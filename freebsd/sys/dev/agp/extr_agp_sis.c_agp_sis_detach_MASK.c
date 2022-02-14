
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_sis_softc {int gatt; int initial_aperture; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct agp_sis_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct agp_sis_softc *VAR_3 = FUNC_4(VAR_2);

 FUNC_1(VAR_2);


 FUNC_6(VAR_2, VAR_1,
    FUNC_5(VAR_2, VAR_1, 1) & ~3, 1);


 FUNC_6(VAR_2, VAR_0, 0, 1);


 FUNC_0(VAR_2, VAR_3->initial_aperture);

 FUNC_2(VAR_3->gatt);
 FUNC_3(VAR_2);
 return 0;
}
