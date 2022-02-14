
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct terasic_mtl_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct terasic_mtl_softc*) ;
 int FUNC_1 (struct terasic_mtl_softc*) ;
 int FUNC_2 (struct terasic_mtl_softc*,int*) ;
 int FUNC_3 (struct terasic_mtl_softc*,int) ;

void
FUNC_4(struct terasic_mtl_softc *VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4;

 FUNC_0(VAR_2);
 FUNC_2(VAR_2, &VAR_4);
 VAR_4 &= ~VAR_0;
 VAR_4 |= VAR_3 << VAR_1;
 FUNC_3(VAR_2, VAR_4);
 FUNC_1(VAR_2);
}
