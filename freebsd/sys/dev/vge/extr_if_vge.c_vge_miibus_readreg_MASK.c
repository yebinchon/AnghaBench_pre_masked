
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vge_softc {int vge_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct vge_softc*,int ) ;
 int FUNC_1 (struct vge_softc*,int ) ;
 int FUNC_2 (struct vge_softc*,int ,int) ;
 int FUNC_3 (struct vge_softc*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vge_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct vge_softc*) ;
 int FUNC_8 (struct vge_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5, int VAR_6, int VAR_7)
{
 struct vge_softc *VAR_8;
 int VAR_9;
 uint16_t VAR_10 = 0;

 VAR_8 = FUNC_5(VAR_5);

 FUNC_8(VAR_8);


 FUNC_3(VAR_8, VAR_0, VAR_7);


 FUNC_2(VAR_8, VAR_1, VAR_2);


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  FUNC_4(1);
  if ((FUNC_0(VAR_8, VAR_1) & VAR_2) == 0)
   break;
 }

 if (VAR_9 == VAR_4)
  FUNC_6(VAR_8->vge_dev, "MII read timed out\n");
 else
  VAR_10 = FUNC_1(VAR_8, VAR_3);

 FUNC_7(VAR_8);

 return (VAR_10);
}
