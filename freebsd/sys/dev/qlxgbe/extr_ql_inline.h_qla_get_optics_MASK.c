
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int module_type; } ;
struct TYPE_6__ {scalar_t__ pci_func; TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static __inline uint32_t
FUNC_1(qla_host_t *VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_5);
 if (VAR_6->pci_func == 0)
  VAR_7 = VAR_7 & 0xFF;
 else
  VAR_7 = (VAR_7 >> 8) & 0xFF;

 switch (VAR_7) {
 case 0x1:
  VAR_7 = VAR_1;
  break;

 case 0x10:
  VAR_7 = VAR_0;
  break;

 default:
  if ((VAR_6->hw.module_type == 0x4) ||
   (VAR_6->hw.module_type == 0x5) ||
   (VAR_6->hw.module_type == 0x6))
   VAR_7 = (VAR_4);
  else
   VAR_7 = (VAR_2 | VAR_3);
  break;
 }

 return(VAR_7);
}
