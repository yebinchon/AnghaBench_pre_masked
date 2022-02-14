
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct agp_apple_softc {scalar_t__ needs_2x_reset; scalar_t__ u3; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct agp_apple_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_5)
{
 struct agp_apple_softc *VAR_6 = FUNC_0(VAR_5);
 uint32_t VAR_7 = VAR_2;

 if (VAR_6->u3)
  VAR_7 |= VAR_4;

 FUNC_1(VAR_5, VAR_1,
     VAR_7 | VAR_3, 4);
 FUNC_1(VAR_5, VAR_1, VAR_7, 4);

 if (VAR_6->needs_2x_reset) {
  FUNC_1(VAR_5, VAR_1,
      VAR_7 | VAR_0, 4);
  FUNC_1(VAR_5, VAR_1, VAR_7, 4);
 }
}
