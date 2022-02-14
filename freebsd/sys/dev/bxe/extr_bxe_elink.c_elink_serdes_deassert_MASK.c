
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_3 (struct bxe_softc*,int) ;

__attribute__((used)) static void FUNC_4(struct bxe_softc *VAR_6, uint8_t VAR_7)
{
 uint32_t VAR_8;

 FUNC_1(VAR_6, "elink_serdes_deassert\n");

 VAR_8 = VAR_1 << (VAR_7*16);


 FUNC_2(VAR_6, VAR_2 + VAR_3, VAR_8);
 FUNC_0(500);
 FUNC_2(VAR_6, VAR_2 + VAR_4, VAR_8);

 FUNC_3(VAR_6, VAR_7);

 FUNC_2(VAR_6, VAR_5 + VAR_7*0x10,
        VAR_0);
}
