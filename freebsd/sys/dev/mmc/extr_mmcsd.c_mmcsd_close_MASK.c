
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmcsd_softc {int dev; } ;
struct mmcsd_part {struct mmcsd_softc* sc; } ;
struct disk {int d_flags; scalar_t__ d_drv1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct mmcsd_softc*) ;

__attribute__((used)) static int
FUNC_2(struct disk *VAR_2)
{
 struct mmcsd_softc *VAR_3;

 if ((VAR_2->d_flags & VAR_0) != 0) {
  VAR_3 = ((struct mmcsd_part *)VAR_2->d_drv1)->sc;
  if (FUNC_1(VAR_3) != VAR_1)
   FUNC_0(VAR_3->dev, "failed to flush cache\n");
 }
 return (0);
}
