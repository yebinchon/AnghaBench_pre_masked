
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
 int VAR_2 ;
 int FUNC_2 (struct mtkswitch_softc*,int ) ;
 int FUNC_3 (struct mtkswitch_softc*) ;
 int FUNC_4 (struct mtkswitch_softc*,int ,int) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 struct mtkswitch_softc* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7, int VAR_8, int VAR_9)
{
 struct mtkswitch_softc *VAR_10 = FUNC_7(VAR_7);
 int VAR_11;

 FUNC_1(VAR_10, VAR_0);
 FUNC_0(VAR_10);
 while (FUNC_2(VAR_10, VAR_1) & VAR_3);
 FUNC_4(VAR_10, VAR_1, VAR_4 | FUNC_6(VAR_9) |
     FUNC_5(VAR_8));
 while (FUNC_2(VAR_10, VAR_1) & VAR_3);
 VAR_11 = (FUNC_2(VAR_10, VAR_2) >> VAR_6) &
     VAR_5;
 FUNC_3(VAR_10);
 return (VAR_11);
}
