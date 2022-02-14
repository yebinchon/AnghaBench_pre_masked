
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nelts; } ;
typedef TYPE_1__ svn_rangelist_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*) ;
 TYPE_1__* FUNC_7 (int ,char const*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__**,TYPE_1__*,TYPE_1__*,int ,int *) ;

svn_error_t *
FUNC_14(svn_mergeinfo_t *VAR_1,
                         svn_mergeinfo_t VAR_2,
                         svn_mergeinfo_t VAR_3,
                         svn_boolean_t VAR_4,
                         apr_pool_t *VAR_5,
                         apr_pool_t *VAR_6)
{
  apr_hash_index_t *VAR_7;
  apr_pool_t *VAR_8;

  *VAR_1 = FUNC_2(VAR_5);
  VAR_8 = FUNC_10(VAR_6);






  for (VAR_7 = FUNC_1(VAR_6, VAR_2);
       VAR_7; VAR_7 = FUNC_3(VAR_7))
    {
      const char *VAR_9 = FUNC_4(VAR_7);
      svn_rangelist_t *VAR_10 = FUNC_5(VAR_7);
      svn_rangelist_t *VAR_11;

      FUNC_9(VAR_8);
      VAR_11 = FUNC_7(VAR_3, VAR_9);
      if (VAR_11)
        {
          FUNC_0(FUNC_13(&VAR_11, VAR_10, VAR_11,
                                          VAR_4, VAR_8));
          if (VAR_11->nelts > 0)
            FUNC_8(*VAR_1, FUNC_6(VAR_5, VAR_9),
                          FUNC_12(VAR_11, VAR_5));
        }
    }
  FUNC_11(VAR_8);
  return VAR_0;
}
