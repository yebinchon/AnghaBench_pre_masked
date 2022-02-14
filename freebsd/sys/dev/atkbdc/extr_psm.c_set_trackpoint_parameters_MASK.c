
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sensitivity; int uplateau; int inertia; int reach; int draghys; int mindrag; int upthresh; int threshold; int jenks; int ztime; int pts; int skipback; } ;
struct psm_softc {TYPE_1__ tpinfo; } ;


 int FUNC_0 (struct psm_softc*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct psm_softc *VAR_0)
{
 FUNC_0(VAR_0, 0x81, 0x4a, VAR_0->tpinfo.sensitivity);
 FUNC_0(VAR_0, 0x81, 0x60, VAR_0->tpinfo.uplateau);
 FUNC_0(VAR_0, 0x81, 0x4d, VAR_0->tpinfo.inertia);
 FUNC_0(VAR_0, 0x81, 0x57, VAR_0->tpinfo.reach);
 FUNC_0(VAR_0, 0x81, 0x58, VAR_0->tpinfo.draghys);
 FUNC_0(VAR_0, 0x81, 0x59, VAR_0->tpinfo.mindrag);
 FUNC_0(VAR_0, 0x81, 0x5a, VAR_0->tpinfo.upthresh);
 FUNC_0(VAR_0, 0x81, 0x5c, VAR_0->tpinfo.threshold);
 FUNC_0(VAR_0, 0x81, 0x5d, VAR_0->tpinfo.jenks);
 FUNC_0(VAR_0, 0x81, 0x5e, VAR_0->tpinfo.ztime);
 if (VAR_0->tpinfo.pts == 0x01)
  FUNC_0(VAR_0, 0x47, 0x2c, 0x01);
 if (VAR_0->tpinfo.skipback == 0x01)
  FUNC_0(VAR_0, 0x47, 0x2d, 0x08);
}
