
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct terasic_mtl_softc {int mtl_reg_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;

void
FUNC_2(struct terasic_mtl_softc *VAR_2, uint8_t VAR_3,
    uint8_t VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = (VAR_3 << VAR_1) | VAR_4;
 VAR_5 = FUNC_1(VAR_5);
 FUNC_0(VAR_2->mtl_reg_res, VAR_0, VAR_5);
}
