
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mtkswitch_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct mtkswitch_softc*,int ) ;
 int FUNC_2 (struct mtkswitch_softc*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct mtkswitch_softc*,int ,int ) ;
 struct mtkswitch_softc* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3, int VAR_4, int VAR_5)
{
 struct mtkswitch_softc *VAR_6 = FUNC_7(VAR_3);
 uint32_t VAR_7;

 FUNC_1(VAR_6, VAR_0);
 VAR_7 = FUNC_2(VAR_6, FUNC_3(VAR_4));
 if (FUNC_0(VAR_4)) {
  VAR_7 &= VAR_2;
  VAR_7 |= FUNC_4(VAR_5);
 } else {
  VAR_7 &= VAR_1;
  VAR_7 |= FUNC_5(VAR_5);
 }
 FUNC_6(VAR_6, FUNC_3(VAR_4), VAR_7);

 return (0);
}
