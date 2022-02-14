
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct bxe_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct bxe_softc*) ;
 int VAR_5 ;
 int FUNC_6 (struct bxe_softc*,int) ;
 int FUNC_7 (struct bxe_softc*,int,int) ;

__attribute__((used)) static inline void FUNC_8(struct bxe_softc *VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{

 uint32_t VAR_9 = FUNC_6(VAR_6, VAR_5 + VAR_7 * 4);


 if (VAR_9 != VAR_8) {
  uint32_t VAR_10 = VAR_1;
  uint32_t VAR_11, VAR_12, VAR_13;


  if (FUNC_4(VAR_6) & VAR_4) {
   VAR_10 = VAR_2;
   if (FUNC_5(VAR_6)) {
    VAR_9 += VAR_0;
    VAR_8 += VAR_0;
   }
  }


  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
   uint32_t VAR_14 =
    FUNC_0(VAR_7, FUNC_5(VAR_6), VAR_13);
   uint32_t VAR_15 = 1 << (VAR_14 & 0x1f);


   FUNC_7(VAR_6, FUNC_2(VAR_14), VAR_8);


   VAR_11 = FUNC_3(VAR_9, VAR_14);
   VAR_12 = FUNC_6(VAR_6, VAR_11);
   FUNC_7(VAR_6, VAR_11, VAR_12 & (~VAR_15));


   VAR_11 = FUNC_3(VAR_8, VAR_14);
   VAR_12 = FUNC_6(VAR_6, VAR_11);
   FUNC_7(VAR_6, VAR_11, VAR_12 | VAR_15);



   if (!(FUNC_4(VAR_6) & VAR_3)) {
    VAR_11 = FUNC_1(VAR_14);
    VAR_12 = FUNC_6(VAR_6, VAR_11);
    VAR_15 = 1 << (2 * (VAR_14 & 0xf));
    VAR_12 = VAR_8 ?
           (VAR_12 | VAR_15) :
           (VAR_12 & (~VAR_15));
    FUNC_7(VAR_6, VAR_11, VAR_12);
   }
  }
 }
}
