
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct ctl_softc {size_t init_min; size_t init_max; } ;
struct ctl_lun {int ** pending_ua; int lun_lock; struct ctl_softc* ctl_softc; } ;
typedef int ctl_ua_type ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct ctl_lun *VAR_2, uint32_t VAR_3, ctl_ua_type VAR_4)
{
 struct ctl_softc *VAR_5 = VAR_2->ctl_softc;
 ctl_ua_type *VAR_6;

 if (VAR_3 < VAR_5->init_min || VAR_3 >= VAR_5->init_max)
  return;
 FUNC_0(&VAR_2->lun_lock, VAR_1);
 VAR_6 = VAR_2->pending_ua[VAR_3 / VAR_0];
 if (VAR_6 == ((void*)0))
  return;
 VAR_6[VAR_3 % VAR_0] &= ~VAR_4;
}
