
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_8__ {scalar_t__ nelts; } ;
typedef TYPE_1__ svn_rangelist_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,TYPE_1__*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*,int ) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__**,TYPE_1__*,int ,int ,int ,int *,int *) ;

svn_error_t *
FUNC_12(svn_mergeinfo_t *VAR_1,
                           svn_mergeinfo_t VAR_2,
                           const char *VAR_3,
                           svn_revnum_t VAR_4,
                           svn_revnum_t VAR_5,
                           svn_boolean_t VAR_6,
                           apr_pool_t *VAR_7,
                           apr_pool_t *VAR_8)
{
  apr_hash_index_t *VAR_9;
  svn_mergeinfo_t VAR_10 = FUNC_2(VAR_7);

  for (VAR_9 = FUNC_1(VAR_8, VAR_2);
       VAR_9;
       VAR_9 = FUNC_3(VAR_9))
    {
      const char *VAR_11 = FUNC_5(VAR_9);
      apr_ssize_t VAR_12 = FUNC_6(VAR_9);
      svn_rangelist_t *VAR_13 = FUNC_7(VAR_9);
      svn_rangelist_t *VAR_14;

      if (!VAR_3 || FUNC_9(VAR_3, VAR_11) == 0)
        FUNC_0(FUNC_11(&VAR_14, VAR_13,
                                           VAR_4, VAR_5, VAR_6,
                                           VAR_7, VAR_8));
      else
        VAR_14 = FUNC_10(VAR_13, VAR_7);



      if (VAR_14->nelts)
        FUNC_4(VAR_10,
                     FUNC_8(VAR_7, VAR_11, VAR_12), VAR_12,
                     VAR_14);
    }
  *VAR_1 = VAR_10;
  return VAR_0;
}
