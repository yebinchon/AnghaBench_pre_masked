
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct are_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct are_softc*,int ) ;
 int FUNC_1 (struct are_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct are_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, int VAR_6, int VAR_7)
{
 struct are_softc * VAR_8 = FUNC_2(VAR_5);
 uint32_t VAR_9;
 int VAR_10;

 VAR_9 = (VAR_6 << VAR_3) | (VAR_7 << VAR_4);
 FUNC_1(VAR_8, VAR_0, VAR_9);
 for (VAR_10 = 0; VAR_10 < 100000000; VAR_10++) {
  if ((FUNC_0(VAR_8, VAR_0) & VAR_2) == 0)
   break;
 }

 return (FUNC_0(VAR_8, VAR_1) & 0xffff);
}
