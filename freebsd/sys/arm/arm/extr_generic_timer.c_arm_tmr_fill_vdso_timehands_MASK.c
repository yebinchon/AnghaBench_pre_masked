
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vdso_timehands {int th_res; int th_physical; int th_algo; } ;
struct timecounter {int dummy; } ;
struct TYPE_2__ {int physical; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct vdso_timehands *VAR_2,
    struct timecounter *VAR_3)
{

 VAR_2->th_algo = VAR_0;
 VAR_2->th_physical = VAR_1->physical;
 FUNC_0(VAR_2->th_res, sizeof(VAR_2->th_res));
 return (1);
}
