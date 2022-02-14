
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct run_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct run_softc*,int ,int*) ;
 int FUNC_1 (struct run_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct run_softc *VAR_5, uint8_t VAR_6, uint16_t VAR_7)
{
 uint32_t VAR_8;
 int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < 100; VAR_10++) {
  if ((VAR_9 = FUNC_0(VAR_5, VAR_2, &VAR_8)) != 0)
   return VAR_9;
  if (!(VAR_8 & VAR_1))
   break;
 }
 if (VAR_10 == 100)
  return VAR_0;

 VAR_8 = VAR_1 | VAR_4 << 16 | VAR_7;
 if ((VAR_9 = FUNC_1(VAR_5, VAR_2, VAR_8)) == 0)
  VAR_9 = FUNC_1(VAR_5, VAR_3, VAR_6);
 return (VAR_9);
}
