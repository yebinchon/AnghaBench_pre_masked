
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__) ;
 int FUNC_3 (struct bxe_softc*,int,int*,int) ;
 int FUNC_4 (struct bxe_softc*,int,int*,int) ;

__attribute__((used)) static void FUNC_5(struct bxe_softc *VAR_8, uint32_t VAR_9, uint8_t VAR_10, uint8_t VAR_11)
{
 uint32_t VAR_12 = VAR_10 ? VAR_7 :
   VAR_6;
 uint32_t VAR_13[2];
 uint32_t VAR_14 = FUNC_2(VAR_8, VAR_5 + VAR_10*4);

 if (FUNC_0(VAR_8))
  VAR_12 += VAR_0;
 else
  VAR_12 += VAR_1;

 if (FUNC_2(VAR_8, VAR_4) &
   (VAR_3 << VAR_10) &&
     VAR_14) {

  FUNC_3(VAR_8, VAR_12, VAR_13, 2);
  if (VAR_11)
   VAR_13[0] |= VAR_2;
  else
   VAR_13[0] &= ~VAR_2;
  FUNC_4(VAR_8, VAR_12, VAR_13, 2);
  FUNC_1(1000 * 1);
 }
}
