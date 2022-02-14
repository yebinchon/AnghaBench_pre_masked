
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bxe_softc*,scalar_t__) ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int ) ;
 int FUNC_4 (struct bxe_softc*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct bxe_softc *VAR_3, uint8_t VAR_4,
         uint8_t VAR_5)
{
 uint32_t VAR_6 = 0;






 VAR_6 = FUNC_1(VAR_3,
        VAR_1 + VAR_4*8);
 FUNC_0(VAR_3, "latch_status = 0x%x\n", VAR_6);

 if (VAR_5)
  FUNC_4(VAR_3,
         VAR_2
         + VAR_4*4,
         VAR_0);
 else
  FUNC_3(VAR_3,
          VAR_2
          + VAR_4*4,
          VAR_0);

 if (VAR_6 & 1) {


  FUNC_2(VAR_3, VAR_1 + VAR_4*8,
         (VAR_6 & 0xfffe) | (VAR_6 & 1));
 }

}
