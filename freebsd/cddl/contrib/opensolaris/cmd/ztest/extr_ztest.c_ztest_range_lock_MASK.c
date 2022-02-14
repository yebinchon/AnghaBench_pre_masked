
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * zd_range_lock; } ;
typedef TYPE_1__ ztest_ds_t ;
typedef int uint64_t ;
typedef int rll_t ;
typedef int rl_type_t ;
struct TYPE_7__ {int rl_object; int rl_offset; int rl_size; int * rl_lock; } ;
typedef TYPE_2__ rl_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static rl_t *
FUNC_2(ztest_ds_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    uint64_t VAR_5, rl_type_t VAR_6)
{
 uint64_t VAR_7 = VAR_3 ^ (VAR_4 % (VAR_1 + 1));
 rll_t *VAR_8 = &VAR_2->zd_range_lock[VAR_7 & (VAR_1 - 1)];
 rl_t *VAR_9;

 VAR_9 = FUNC_0(sizeof (*VAR_9), VAR_0);
 VAR_9->rl_object = VAR_3;
 VAR_9->rl_offset = VAR_4;
 VAR_9->rl_size = VAR_5;
 VAR_9->rl_lock = VAR_8;

 FUNC_1(VAR_8, VAR_6);

 return (VAR_9);
}
