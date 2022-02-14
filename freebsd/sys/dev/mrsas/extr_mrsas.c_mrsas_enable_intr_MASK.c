
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mrsas_softc {scalar_t__ mask_interrupts; } ;


 int VAR_0 ;
 int FUNC_0 (struct mrsas_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mrsas_softc*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_3(struct mrsas_softc *VAR_4)
{
 u_int32_t VAR_5 = VAR_0;
 u_int32_t VAR_6;

 VAR_4->mask_interrupts = 0;
 FUNC_1(VAR_4, FUNC_2(VAR_1, VAR_3), ~0);
 VAR_6 = FUNC_0(VAR_4, FUNC_2(VAR_1, VAR_3));

 FUNC_1(VAR_4, FUNC_2(VAR_1, VAR_2), ~VAR_5);
 VAR_6 = FUNC_0(VAR_4, FUNC_2(VAR_1, VAR_2));
}
