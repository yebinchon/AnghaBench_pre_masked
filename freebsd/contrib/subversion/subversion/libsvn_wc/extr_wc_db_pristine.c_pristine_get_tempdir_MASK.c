
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static char *
FUNC_2(svn_wc__db_wcroot_t *VAR_2,
                     apr_pool_t *VAR_3,
                     apr_pool_t *VAR_4)
{
  return FUNC_0(VAR_3, VAR_2->abspath,
                              FUNC_1(VAR_4),
                              VAR_0, VAR_1);
}
