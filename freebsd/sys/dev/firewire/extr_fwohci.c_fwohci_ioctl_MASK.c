
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
struct fwohci_softc {int dummy; } ;
struct fw_reg_req_t {void* data; int addr; } ;
struct firewire_softc {scalar_t__ fc; } ;
struct cdev {int dummy; } ;
typedef int fw_proc ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct cdev*) ;

 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (struct fwohci_softc*,int ) ;
 int FUNC_2 (struct fwohci_softc*,int ,void*) ;
 struct firewire_softc* FUNC_3 (int ,int) ;
 int FUNC_4 (struct fwohci_softc*,int ) ;
 int FUNC_5 (struct fwohci_softc*,int ) ;
 int VAR_4 ;
 void* FUNC_6 (struct fwohci_softc*,int ) ;
 void* FUNC_7 (struct fwohci_softc*,int ,void*) ;

int
FUNC_8 (struct cdev *VAR_5, u_long VAR_6, caddr_t VAR_7, int VAR_8, fw_proc *VAR_9)
{
 struct firewire_softc *VAR_10;
 struct fwohci_softc *VAR_11;
 int VAR_12 = FUNC_0(VAR_5);
 int VAR_13 = 0;
 struct fw_reg_req_t *VAR_14 = (struct fw_reg_req_t *) VAR_7;
 uint32_t *VAR_15 = (uint32_t *) VAR_7;

 VAR_10 = FUNC_3(VAR_4, VAR_12);
 if (VAR_10 == ((void*)0))
  return (VAR_0);

 VAR_11 = (struct fwohci_softc *)VAR_10->fc;

 if (!VAR_7)
  return (VAR_0);

 switch (VAR_6) {
 case 128:

  if (VAR_14->addr <= 0x800) {
   FUNC_2(VAR_11, VAR_14->addr, VAR_14->data);
   VAR_14->data = FUNC_1(VAR_11, VAR_14->addr);
  } else {
   VAR_13 = VAR_0;
  }
  break;
 case 130:
  if (VAR_14->addr <= 0x800) {
   VAR_14->data = FUNC_1(VAR_11, VAR_14->addr);
  } else {
   VAR_13 = VAR_0;
  }
  break;

 case 132:
  if (*VAR_15 <= VAR_1) {
   FUNC_5(VAR_11, *VAR_15);
   FUNC_4(VAR_11, *VAR_15);
  } else {
   VAR_13 = VAR_0;
  }
  break;


 case 131:
  if (VAR_14->addr <= 0xf)
   VAR_14->data = FUNC_6(VAR_11, VAR_14->addr);
  else
   VAR_13 = VAR_0;
  break;
 case 129:
  if (VAR_14->addr <= 0xf)
   VAR_14->data = FUNC_7(VAR_11, VAR_14->addr, VAR_14->data);
  else
   VAR_13 = VAR_0;
  break;
 default:
  VAR_13 = VAR_0;
  break;
 }
 return VAR_13;
}
