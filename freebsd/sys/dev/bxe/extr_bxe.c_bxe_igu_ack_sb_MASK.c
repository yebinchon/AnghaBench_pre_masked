
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bxe_softc {int igu_base_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,int,int,int ,int,int,int) ;

void
FUNC_1(struct bxe_softc *VAR_1,
               uint8_t VAR_2,
               uint8_t VAR_3,
               uint16_t VAR_4,
               uint8_t VAR_5,
               uint8_t VAR_6)
{
    uint32_t VAR_7 = VAR_1->igu_base_addr;
    VAR_7 += (VAR_0 + VAR_2)*8;
    FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
