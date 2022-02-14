
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ctl_softc {int port_min; int port_max; } ;
struct ctl_lun {int lun_lock; struct ctl_softc* ctl_softc; } ;
typedef int ctl_ua_type ;


 int VAR_0 ;
 int FUNC_0 (struct ctl_lun*,int,int ,int ) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct ctl_lun *VAR_1, uint32_t VAR_2, ctl_ua_type VAR_3)
{
 struct ctl_softc *VAR_4 = VAR_1->ctl_softc;
 int VAR_5;

 FUNC_1(&VAR_1->lun_lock, VAR_0);
 for (VAR_5 = VAR_4->port_min; VAR_5 < VAR_4->port_max; VAR_5++)
  FUNC_0(VAR_1, VAR_5, VAR_2, VAR_3);
}
