
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtkswitch_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtkswitch_softc*) ;
 int FUNC_1 (struct mtkswitch_softc*,int ) ;
 int FUNC_2 (struct mtkswitch_softc*) ;
 struct mtkswitch_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct mtkswitch_softc*,int,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct mtkswitch_softc *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;

 if ((VAR_3 < 0 || VAR_3 >= 32) || (VAR_4 < 0 || VAR_4 >= 32))
  return (VAR_0);

 FUNC_1(VAR_6, VAR_1);
 FUNC_0(VAR_6);
 VAR_7 = FUNC_4(VAR_6, VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_6);

 return (VAR_7);
}
