
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rstmgr_softc {int dev; } ;
typedef int phandle_t ;
typedef int paddr ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,char*,int *,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct rstmgr_softc *VAR_3, int VAR_4, int VAR_5)
{
 uint32_t VAR_6;
 bus_addr_t VAR_7;
 phandle_t VAR_8;
 int VAR_9;






 VAR_9 = VAR_1;
 if (VAR_5)
  VAR_9 |= (VAR_4);
 else
  VAR_9 &= ~(VAR_4);

 VAR_8 = FUNC_0("l3regs");
 if (VAR_8 == -1) {
  FUNC_4(VAR_3->dev, "Can't find l3regs node\n");
  return (1);
 }

 if ((FUNC_1(VAR_8, "reg", &VAR_6, sizeof(VAR_6))) > 0) {
  if (FUNC_2(VAR_2, VAR_6, 0x4, 0, &VAR_7) == 0) {
   FUNC_3(VAR_2, VAR_7,
       VAR_0, VAR_9);
   return (0);
  }
 }

 return (1);
}
