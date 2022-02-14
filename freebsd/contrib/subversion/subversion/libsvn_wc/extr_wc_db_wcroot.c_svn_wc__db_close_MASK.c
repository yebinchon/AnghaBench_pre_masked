
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* abspath; scalar_t__ sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
struct TYPE_7__ {int * state_pool; int * dir_data; } ;
typedef TYPE_2__ svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,char const*,TYPE_1__*) ;
 int FUNC_7 (int *,int *,int *) ;

svn_error_t *
FUNC_8(svn_wc__db_t *VAR_0)
{
  apr_pool_t *VAR_1 = VAR_0->state_pool;
  apr_hash_t *VAR_2 = FUNC_1(VAR_1);
  apr_hash_index_t *VAR_3;


  for (VAR_3 = FUNC_0(VAR_1, VAR_0->dir_data);
       VAR_3;
       VAR_3 = FUNC_2(VAR_3))
    {
      svn_wc__db_wcroot_t *VAR_4 = FUNC_4(VAR_3);
      const char *VAR_5 = FUNC_3(VAR_3);

      if (VAR_4->sdb)
        FUNC_6(VAR_2, VAR_4->abspath, VAR_4);

      FUNC_6(VAR_0->dir_data, VAR_5, ((void*)0));
    }


  return FUNC_5(FUNC_7(VAR_2, VAR_0->state_pool,
                                                       VAR_1));
}
