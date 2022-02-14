
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwohci_softc {scalar_t__ state; int locator; int devid; int base_addr; int handle; int bus_id; } ;
typedef int line ;
struct TYPE_2__ {char* dv_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct fwohci_softc* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_4)
{
 char VAR_5[80];
 int VAR_6, VAR_7 = 0;
 struct fwohci_softc *VAR_8;

 FUNC_1("%s devices:", VAR_3.dv_name);
 if ((VAR_7 = FUNC_0("\n")) != 0)
  return (VAR_7);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6 ++) {
  VAR_8 = &VAR_2[VAR_6];
  if (VAR_8->state == VAR_0)
   break;
  FUNC_2(VAR_5, sizeof(VAR_5), "%d: locator=0x%04x devid=0x%08x"
   " base_addr=0x%08x handle=0x%08x bus_id=0x%08x\n",
   VAR_6, VAR_8->locator, VAR_8->devid,
   VAR_8->base_addr, VAR_8->handle, VAR_8->bus_id);
  VAR_7 = FUNC_0(VAR_5);
  if (VAR_7 != 0)
   break;
 }
 return (VAR_7);
}
