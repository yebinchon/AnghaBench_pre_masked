
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct tsec_softc {int node; } ;


 int FUNC_0 (int ,char*,void*,int) ;
 void* FUNC_1 (struct tsec_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int) ;

void
FUNC_3(struct tsec_softc *VAR_2, uint8_t *VAR_3)
{
 union {
  uint32_t reg[2];
  uint8_t addr[6];
 } VAR_4;
 int VAR_5;

 VAR_4.reg[0] = VAR_4.reg[1] = 0;


 VAR_5 = FUNC_0(VAR_2->node, "local-mac-address", (void *)VAR_4.addr, 6);
 if (VAR_5 == 6 && (VAR_4.reg[0] != 0 || VAR_4.reg[1] != 0)) {
  FUNC_2(VAR_4.addr, VAR_3, 6);
  return;
 }


 VAR_5 = FUNC_0(VAR_2->node, "mac-address", (void *)VAR_4.addr, 6);
 if (VAR_5 == 6 && (VAR_4.reg[0] != 0 || VAR_4.reg[1] != 0)) {
  FUNC_2(VAR_4.addr, VAR_3, 6);
  return;
 }





 VAR_4.reg[0] = FUNC_1(VAR_2, VAR_0);
 VAR_4.reg[1] = FUNC_1(VAR_2, VAR_1);
 for (VAR_5 = 0; VAR_5 < 6; VAR_5++)
  VAR_3[5-VAR_5] = VAR_4.addr[VAR_5];
}
