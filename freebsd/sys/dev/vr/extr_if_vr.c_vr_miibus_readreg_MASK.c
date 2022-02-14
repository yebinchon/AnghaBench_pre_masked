
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vr_softc {int vr_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct vr_softc*,int ) ;
 int FUNC_1 (struct vr_softc*,int ) ;
 int FUNC_2 (struct vr_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct vr_softc*,int ,int) ;
 struct vr_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, int VAR_6, int VAR_7)
{
 struct vr_softc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(VAR_5);


 FUNC_2(VAR_8, VAR_0, VAR_7);
 FUNC_4(VAR_8, VAR_1, VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  FUNC_3(1);
  if ((FUNC_0(VAR_8, VAR_1) & VAR_2) == 0)
   break;
 }
 if (VAR_9 == VAR_4)
  FUNC_6(VAR_8->vr_dev, "phy read timeout %d:%d\n", VAR_6, VAR_7);

 return (FUNC_1(VAR_8, VAR_3));
}
