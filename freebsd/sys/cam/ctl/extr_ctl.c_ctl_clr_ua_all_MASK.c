
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ctl_softc {int port_min; int port_max; } ;
struct ctl_lun {int ** pending_ua; int lun_lock; struct ctl_softc* ctl_softc; } ;
typedef int ctl_ua_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct ctl_lun *VAR_2, uint32_t VAR_3, ctl_ua_type VAR_4)
{
 struct ctl_softc *VAR_5 = VAR_2->ctl_softc;
 int VAR_6, VAR_7;

 FUNC_0(&VAR_2->lun_lock, VAR_1);
 for (VAR_6 = VAR_5->port_min; VAR_6 < VAR_5->port_max; VAR_6++) {
  if (VAR_2->pending_ua[VAR_6] == ((void*)0))
   continue;
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   if (VAR_6 * VAR_0 + VAR_7 == VAR_3)
    continue;
   VAR_2->pending_ua[VAR_6][VAR_7] &= ~VAR_4;
  }
 }
}
