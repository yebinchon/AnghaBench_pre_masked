
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_8__ {scalar_t__ nelts; } ;
typedef TYPE_1__ svn_rangelist_t ;
typedef scalar_t__ svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (TYPE_1__**,TYPE_1__*,TYPE_1__*,int,int ,int *) ;
 int FUNC_10 (scalar_t__,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_11 (scalar_t__,scalar_t__,int ,int *) ;

svn_error_t *
FUNC_12(svn_mergeinfo_t *VAR_3,
                                          svn_mergeinfo_t VAR_4,
                                          svn_revnum_t VAR_5,
                                          svn_revnum_t VAR_6,
                                          svn_boolean_t VAR_7,
                                          apr_pool_t *VAR_8,
                                          apr_pool_t *VAR_9)
{
  FUNC_1(FUNC_2(VAR_5));
  FUNC_1(FUNC_2(VAR_6));
  FUNC_1(VAR_6 < VAR_5);

  *VAR_3 = FUNC_4(VAR_8);

  if (VAR_4)
    {
      apr_hash_index_t *VAR_10;
      svn_rangelist_t *VAR_11 =
        FUNC_11(VAR_6, VAR_5, VAR_2,
                                  VAR_9);

      for (VAR_10 = FUNC_3(VAR_9, VAR_4);
           VAR_10;
           VAR_10 = FUNC_5(VAR_10))
        {
          const char *VAR_12 = FUNC_6(VAR_10);
          svn_rangelist_t *VAR_13 = FUNC_7(VAR_10);

          if (VAR_13->nelts)
            {
              svn_rangelist_t *VAR_14;

              FUNC_0(FUNC_9(
                        &VAR_14, VAR_11, VAR_13,
                        ! VAR_7, VAR_0, VAR_8));

              if (VAR_14->nelts)
                FUNC_10(*VAR_3,
                              FUNC_8(VAR_8, VAR_12), VAR_14);
            }
        }
    }
  return VAR_1;
}
