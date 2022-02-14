
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mrsas_softc {int mask_interrupts; } ;


 int FUNC_0 (struct mrsas_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mrsas_softc*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

void
FUNC_3(struct mrsas_softc *VAR_2)
{
 u_int32_t VAR_3 = 0xFFFFFFFF;
 u_int32_t VAR_4;

 VAR_2->mask_interrupts = 1;
 FUNC_1(VAR_2, FUNC_2(VAR_0, VAR_1), VAR_3);

 VAR_4 = FUNC_0(VAR_2, FUNC_2(VAR_0, VAR_1));
}
