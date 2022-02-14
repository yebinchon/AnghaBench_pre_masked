
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct arswitch_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,int,int*,int*) ;
 struct arswitch_softc* FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_0, int VAR_1, int VAR_2)
{
 struct arswitch_softc *VAR_3;
 uint16_t VAR_4, VAR_5;

 VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_0, VAR_1, &VAR_4, &VAR_5);
 return (FUNC_0(VAR_0, 0x10 | VAR_4, VAR_5, VAR_2));
}
