
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int bus_errors; } ;
struct vr_softc {scalar_t__ vr_revid; int vr_dev; int vr_flags; TYPE_1__ vr_stat; } ;


 int FUNC_0 (struct vr_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct vr_softc *VAR_8, uint16_t VAR_9)
{
 uint16_t VAR_10;

 VAR_9 &= VAR_5 | VAR_6 | VAR_7;
 if ((VAR_9 & VAR_5) != 0) {
  VAR_9 &= ~VAR_5;
  VAR_8->vr_stat.bus_errors++;

  FUNC_0(VAR_8, VAR_4, 0);
  VAR_10 = FUNC_2(VAR_8->vr_dev, VAR_1, 2);
  FUNC_1(VAR_8->vr_dev, "PCI bus error(0x%04x) -- "
      "resetting\n", VAR_10);
  FUNC_3(VAR_8->vr_dev, VAR_1, VAR_10, 2);
  VAR_8->vr_flags |= VAR_3;
  return (VAR_0);
 }
 if ((VAR_9 & VAR_6) != 0) {

  VAR_9 &= ~VAR_6;
 }
 if ((VAR_9 & VAR_7) != 0) {
  VAR_9 &= ~VAR_7;
  if (VAR_8->vr_revid >= VAR_2) {

  }
 }

 if (VAR_9 != 0)
  FUNC_1(VAR_8->vr_dev,
      "unhandled interrupt, status = 0x%04x\n", VAR_9);
 return (0);
}
