
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mos_softc {int* mos_phyaddrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mos_softc*,int ) ;
 int FUNC_1 (struct mos_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct mos_softc *VAR_2)
{
 int VAR_3;





 if (FUNC_0(VAR_2, VAR_1) != -1) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   FUNC_1(VAR_2, VAR_1, 0);
 }
 VAR_2->mos_phyaddrs[0] = 1;
 VAR_2->mos_phyaddrs[1] = 0xFF;
}
