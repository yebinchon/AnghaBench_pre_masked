
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * nid; } ;
struct TYPE_6__ {TYPE_2__ lan; } ;
struct TYPE_4__ {int cfg; } ;
struct cardbus_devinfo {int fepresent; TYPE_3__ funce; TYPE_1__ pci; } ;
typedef int pcicfgregs ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;

 struct cardbus_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,uintptr_t*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t *VAR_5)
{
 struct cardbus_devinfo *VAR_6;
 pcicfgregs *VAR_7;

 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = &VAR_6->pci.cfg;

 switch (VAR_4) {
 case 128:




  if (VAR_6->fepresent & (1 << VAR_1)) {
   *((uint8_t **) VAR_5) = VAR_6->funce.lan.nid;
   break;
  }
  *((uint8_t **) VAR_5) = ((void*)0);
  return (VAR_0);
 default:
  return (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5));
 }
 return 0;
}
