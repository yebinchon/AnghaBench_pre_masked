
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_apple_softc {int gatt; scalar_t__ needs_2x_reset; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct agp_apple_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct agp_apple_softc *VAR_4 = FUNC_4(VAR_3);

 FUNC_1(VAR_3);


 FUNC_5(VAR_3, VAR_1, VAR_2, 4);
 FUNC_5(VAR_3, VAR_1, 0, 4);

 if (VAR_4->needs_2x_reset) {
  FUNC_5(VAR_3, VAR_1,
      VAR_0, 4);
  FUNC_5(VAR_3, VAR_1, 0, 4);
 }

 FUNC_0(VAR_3, 0);

 FUNC_2(VAR_4->gatt);
 FUNC_3(VAR_3);
 return 0;
}
