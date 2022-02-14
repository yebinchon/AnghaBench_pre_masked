
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * zd_object_lock; } ;
typedef TYPE_1__ ztest_ds_t ;
typedef int uint64_t ;
typedef int rll_t ;
typedef int rl_type_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(ztest_ds_t *VAR_1, uint64_t VAR_2, rl_type_t VAR_3)
{
 rll_t *VAR_4 = &VAR_1->zd_object_lock[VAR_2 & (VAR_0 - 1)];

 FUNC_0(VAR_4, VAR_3);
}
