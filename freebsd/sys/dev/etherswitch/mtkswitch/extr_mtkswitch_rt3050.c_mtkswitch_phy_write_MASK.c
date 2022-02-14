
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtkswitch_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtkswitch_softc*) ;
 int FUNC_1 (struct mtkswitch_softc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct mtkswitch_softc*,int ) ;
 int FUNC_3 (struct mtkswitch_softc*) ;
 int FUNC_4 (struct mtkswitch_softc*,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_3 ;
 struct mtkswitch_softc* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct mtkswitch_softc *VAR_8 = FUNC_8(VAR_4);

 FUNC_1(VAR_8, VAR_0);
 FUNC_0(VAR_8);
 while (FUNC_2(VAR_8, VAR_1) & VAR_2);
 FUNC_4(VAR_8, VAR_1, VAR_3 | FUNC_7(VAR_6) |
     FUNC_6(VAR_5) | FUNC_5(VAR_7));
 while (FUNC_2(VAR_8, VAR_1) & VAR_2);
 FUNC_3(VAR_8);
 return (0);
}
