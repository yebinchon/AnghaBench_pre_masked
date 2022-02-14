
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ vr_tx_cnt; int vr_tx_cons; } ;
struct vr_softc {int vr_watchdog_timer; TYPE_1__ vr_cdata; } ;
typedef int bus_addr_t ;


 int FUNC_0 (struct vr_softc*,int ) ;
 int FUNC_1 (struct vr_softc*,int ,int) ;
 int FUNC_2 (struct vr_softc*,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct vr_softc*,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct vr_softc*,int ) ;

__attribute__((used)) static void
FUNC_6(struct vr_softc *VAR_4)
{
 bus_addr_t VAR_5;
 uint8_t VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_0);
 if ((VAR_6 & VAR_2) == 0) {
  VAR_5 = FUNC_5(VAR_4, VAR_4->vr_cdata.vr_tx_cons);
  FUNC_2(VAR_4, VAR_3, FUNC_3(VAR_5));
  VAR_6 |= VAR_2;
  FUNC_1(VAR_4, VAR_0, VAR_6);
 }
 if (VAR_4->vr_cdata.vr_tx_cnt != 0) {
  VAR_4->vr_watchdog_timer = 5;
  FUNC_4(VAR_4, VAR_0, VAR_1);
 }
}
