
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ pci_func; } ;
typedef TYPE_1__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static __inline uint32_t
FUNC_1(qla_host_t *VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_4);
 if (VAR_5->pci_func == 0)
  VAR_6 = VAR_6 & 0xFF;
 else
  VAR_6 = (VAR_6 >> 8) & 0xFF;

 switch (VAR_6) {
 case 0x1:
  VAR_6 = VAR_1;
  break;

 case 0x10:
  VAR_6 = VAR_0;
  break;

 default:
  VAR_6 = (VAR_2 | VAR_3);
  break;
 }

 return(VAR_6);
}
