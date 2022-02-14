
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 int VAR_4 ;

__attribute__((used)) static uint8_t
FUNC_2(struct bxe_softc *VAR_5)
{
    uint32_t VAR_6 = FUNC_1(VAR_5, VAR_1);
    FUNC_0(VAR_5, VAR_2, "GLOB_REG=0x%08x\n", VAR_6);
    return (VAR_6 & VAR_0) ? VAR_4 : VAR_3;
}
