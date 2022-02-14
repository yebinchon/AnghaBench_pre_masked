
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; TYPE_2__* unused_pools; } ;
typedef TYPE_1__ svn_root_pools__t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {scalar_t__ nelts; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(apr_pool_t **VAR_2,
                      svn_root_pools__t *VAR_3)
{
  FUNC_0(FUNC_3(VAR_3->mutex));
  *VAR_2 = VAR_3->unused_pools->nelts
        ? *(apr_pool_t **)FUNC_2(VAR_3->unused_pools)
        : FUNC_1(FUNC_5(VAR_0));
  FUNC_0(FUNC_4(VAR_3->mutex, VAR_1));

  return VAR_1;
}
