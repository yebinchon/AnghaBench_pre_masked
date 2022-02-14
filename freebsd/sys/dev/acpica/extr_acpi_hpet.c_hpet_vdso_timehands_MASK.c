
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vdso_timehands {int th_res; int th_x86_hpet_idx; scalar_t__ th_x86_shift; int th_algo; } ;
struct timecounter {struct hpet_softc* tc_priv; } ;
struct hpet_softc {scalar_t__ mmap_allow; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

uint32_t
FUNC_2(struct vdso_timehands *VAR_1, struct timecounter *VAR_2)
{
 struct hpet_softc *VAR_3;

 VAR_3 = VAR_2->tc_priv;
 VAR_1->th_algo = VAR_0;
 VAR_1->th_x86_shift = 0;
 VAR_1->th_x86_hpet_idx = FUNC_1(VAR_3->dev);
 FUNC_0(VAR_1->th_res, sizeof(VAR_1->th_res));
 return (VAR_3->mmap_allow != 0);
}
