
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct cpsw_softc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cpsw_softc*,int,int*) ;
 int FUNC_2 (struct cpsw_softc*,int,int*) ;

__attribute__((used)) static int
FUNC_3(struct cpsw_softc *VAR_5, uint8_t VAR_6, int VAR_7,
 uint8_t *VAR_8)
{
 int VAR_9 = -1, VAR_10 = -1, VAR_11;
 uint32_t VAR_12[3], VAR_13;


 for (VAR_11 = 10; VAR_11 < VAR_3; VAR_11++) {
  FUNC_1(VAR_5, VAR_11, VAR_12);


  if (VAR_9 < 0 && FUNC_0(VAR_12) == 0)
   VAR_9 = VAR_11;

  if ((((VAR_12[1] >> 8) & 0xFF) == VAR_8[0]) &&
      (((VAR_12[1] >> 0) & 0xFF) == VAR_8[1]) &&
      (((VAR_12[0] >>24) & 0xFF) == VAR_8[2]) &&
      (((VAR_12[0] >>16) & 0xFF) == VAR_8[3]) &&
      (((VAR_12[0] >> 8) & 0xFF) == VAR_8[4]) &&
      (((VAR_12[0] >> 0) & 0xFF) == VAR_8[5])) {
   VAR_10 = VAR_11;
   break;
  }
 }

 if (VAR_10 < 0) {
  if (VAR_9 < 0)
   return (VAR_4);
  VAR_11 = VAR_9;
 }

 if (VAR_7 != -1)
  VAR_13 = VAR_2 << 28 | VAR_7 << 16;
 else
  VAR_13 = VAR_1 << 28;


 VAR_12[0] = VAR_8[2] << 24 | VAR_8[3] << 16 | VAR_8[4] << 8 | VAR_8[5];
 VAR_12[1] = VAR_8[0] << 8 | VAR_8[1];


 VAR_12[1] |= VAR_0 | VAR_13;


 VAR_12[2] = (VAR_6 & 7) << 2;

 FUNC_2(VAR_5, VAR_11, VAR_12);

 return 0;
}
