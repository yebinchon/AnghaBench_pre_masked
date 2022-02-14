
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_branch__rev_bid_t ;
struct TYPE_4__ {int parents; } ;
typedef TYPE_1__ svn_branch__history_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int ,int ) ;

svn_branch__history_t *
FUNC_9(apr_hash_t *VAR_0,
                           apr_pool_t *VAR_1)
{
  svn_branch__history_t *VAR_2
    = FUNC_5(VAR_1, sizeof(*VAR_2));

  VAR_2->parents = FUNC_1(VAR_1);
  if (VAR_0)
    {
      apr_hash_index_t *VAR_3;

      for (VAR_3 = FUNC_0(VAR_1, VAR_0);
           VAR_3; VAR_3 = FUNC_2(VAR_3))
        {
          const char *VAR_4 = FUNC_3(VAR_3);
          svn_branch__rev_bid_t *VAR_5 = FUNC_4(VAR_3);

          FUNC_8(VAR_2->parents,
                        FUNC_6(VAR_1, VAR_4),
                        FUNC_7(VAR_5, VAR_1));
        }
    }
  return VAR_2;
}
