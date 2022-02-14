
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unused_pools; int mutex; } ;
typedef TYPE_1__ svn_root_pools__t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ) ;

svn_error_t *
FUNC_6(svn_root_pools__t **VAR_3)
{


  apr_pool_t *VAR_4
    = FUNC_1(FUNC_5(VAR_0));


  svn_root_pools__t *VAR_5 = FUNC_3(VAR_4, sizeof(*VAR_5));
  FUNC_0(FUNC_4(&VAR_5->mutex, VAR_2, VAR_4));
  VAR_5->unused_pools = FUNC_2(VAR_4, 16, sizeof(apr_pool_t *));


  *VAR_3 = VAR_5;

  return VAR_1;
}
