
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ztest_ds_t ;
struct TYPE_7__ {scalar_t__ zgd_lr; scalar_t__ zgd_db; int * zgd_private; } ;
typedef TYPE_1__ zgd_t ;
typedef int uint64_t ;
struct TYPE_8__ {int rl_object; } ;
typedef TYPE_2__ rl_t ;


 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(zgd_t *VAR_0, int VAR_1)
{
 ztest_ds_t *VAR_2 = VAR_0->zgd_private;
 uint64_t VAR_3 = ((rl_t *)VAR_0->zgd_lr)->rl_object;

 if (VAR_0->zgd_db)
  FUNC_0(VAR_0->zgd_db, VAR_0);

 FUNC_3((rl_t *)VAR_0->zgd_lr);
 FUNC_2(VAR_2, VAR_3);

 FUNC_1(VAR_0, sizeof (*VAR_0));
}
