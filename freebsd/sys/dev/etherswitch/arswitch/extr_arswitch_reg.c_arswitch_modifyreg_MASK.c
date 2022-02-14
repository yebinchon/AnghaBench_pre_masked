
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct arswitch_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct arswitch_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ,int,int*,int*) ;
 scalar_t__ FUNC_4 (int ) ;

int
FUNC_5(device_t VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 uint16_t VAR_6, VAR_7;

 FUNC_0((struct arswitch_softc *)FUNC_4(VAR_1),
     VAR_0);

 FUNC_3(VAR_1, VAR_2, &VAR_6, &VAR_7);

 VAR_5 = FUNC_1(VAR_1, 0x10 | VAR_6, VAR_7);
 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_4;
 return (FUNC_2(VAR_1, 0x10 | VAR_6, VAR_7, VAR_5));
}
