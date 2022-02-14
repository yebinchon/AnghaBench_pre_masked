
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vge_softc {int vge_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct vge_softc*,int ) ;
 int FUNC_1 (struct vge_softc*,int ,int) ;
 int FUNC_2 (struct vge_softc*,int ,int) ;
 int FUNC_3 (struct vge_softc*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vge_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct vge_softc*) ;
 int FUNC_8 (struct vge_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct vge_softc *VAR_10;
 int VAR_11, VAR_12 = 0;

 VAR_10 = FUNC_5(VAR_6);

 FUNC_8(VAR_10);


 FUNC_2(VAR_10, VAR_1, VAR_8);


 FUNC_3(VAR_10, VAR_4, VAR_9);


 FUNC_1(VAR_10, VAR_2, VAR_3);


 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  FUNC_4(1);
  if ((FUNC_0(VAR_10, VAR_2) & VAR_3) == 0)
   break;
 }

 if (VAR_11 == VAR_5) {
  FUNC_6(VAR_10->vge_dev, "MII write timed out\n");
  VAR_12 = VAR_0;
 }

 FUNC_7(VAR_10);

 return (VAR_12);
}
