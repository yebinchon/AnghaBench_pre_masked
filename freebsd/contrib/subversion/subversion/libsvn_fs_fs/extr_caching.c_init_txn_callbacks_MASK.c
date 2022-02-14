
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pool; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_cache__t ;
struct txn_cleanup_baton_t {int * fs_pool; int * txn_pool; int ** to_reset; int * txn_cache; } ;
typedef int apr_pool_t ;


 struct txn_cleanup_baton_t* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct txn_cleanup_baton_t*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(svn_fs_t *VAR_3,
                   svn_cache__t **VAR_4,
                   apr_pool_t *VAR_5)
{
  if (*VAR_4 != ((void*)0))
    {
      struct txn_cleanup_baton_t *VAR_6;

      VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));
      VAR_6->txn_cache = *VAR_4;
      VAR_6->to_reset = VAR_4;
      VAR_6->txn_pool = VAR_5;
      VAR_6->fs_pool = VAR_3->pool;





      FUNC_1(VAR_5,
                                VAR_6,
                                VAR_2,
                                VAR_0);
      FUNC_1(VAR_3->pool,
                                VAR_6,
                                VAR_1,
                                VAR_0);
    }
}
