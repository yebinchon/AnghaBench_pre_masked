
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
 int VAR_5 ;
 struct are_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct are_softc * VAR_10 = FUNC_2(VAR_6);
 uint32_t VAR_11;
 int VAR_12;


 FUNC_1(VAR_10, VAR_1, VAR_9);


 VAR_11 = (VAR_7 << VAR_3) | (VAR_8 << VAR_4) |
     VAR_5;
 FUNC_1(VAR_10, VAR_0, VAR_11);

 for (VAR_12 = 0; VAR_12 < 100000000; VAR_12++) {
  if ((FUNC_0(VAR_10, VAR_0) & VAR_2) == 0)
   break;
 }

 return (0);
}
