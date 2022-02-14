
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int as_aperture; } ;
struct agp_nvidia_softc {int gatt; int initial_aperture; TYPE_1__ agp; int mc2_dev; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct agp_nvidia_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9 (device_t VAR_2)
{
 struct agp_nvidia_softc *VAR_3 = FUNC_4(VAR_2);
 u_int32_t VAR_4;

 FUNC_1(VAR_2);


 VAR_4 = FUNC_6(VAR_3->dev, VAR_0, 4);
 FUNC_7(VAR_3->dev, VAR_0, VAR_4 & ~(0x100), 4);


 VAR_4 = FUNC_6(VAR_3->mc2_dev, VAR_1, 4);
 FUNC_7(VAR_3->mc2_dev, VAR_1, VAR_4 & ~(0x11), 4);


 FUNC_0(VAR_2, VAR_3->initial_aperture);


 FUNC_5(FUNC_8(VAR_3->agp.as_aperture),
    VAR_3->initial_aperture);

 FUNC_2(VAR_3->gatt);
 FUNC_3(VAR_2);

 return (0);
}
