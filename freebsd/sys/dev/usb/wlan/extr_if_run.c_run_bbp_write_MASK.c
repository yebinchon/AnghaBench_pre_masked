
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct run_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct run_softc*,int ,int*) ;
 int FUNC_1 (struct run_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct run_softc *VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
 uint32_t VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
  if ((VAR_8 = FUNC_0(VAR_3, VAR_1, &VAR_6)) != 0)
   return (VAR_8);
  if (!(VAR_6 & VAR_2))
   break;
 }
 if (VAR_7 == 10)
  return (VAR_0);

 VAR_6 = VAR_2 | VAR_4 << 8 | VAR_5;
 return (FUNC_1(VAR_3, VAR_1, VAR_6));
}
