
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {struct lio_dispatch* dlist; } ;
struct octeon_device {TYPE_1__ dispatch; void* chip; } ;
struct lio_dispatch {int dummy; } ;
struct lio_cn23xx_pf {int dummy; } ;
typedef int device_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int * FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct octeon_device *
FUNC_4(device_t VAR_4)
{
 struct octeon_device *VAR_5;
 uint32_t VAR_6 = 0, VAR_7 = 0, VAR_8;
 uint8_t *VAR_9 = ((void*)0);

 VAR_7 = FUNC_3(VAR_4);
 switch (VAR_7) {
 case 128:
  VAR_6 = sizeof(struct lio_cn23xx_pf);
  break;
 default:
  FUNC_1(VAR_4, "Error: Unknown PCI Device: 0x%x\n",
         VAR_7);
  return (((void*)0));
 }

 if (VAR_6 & 0x7)
  VAR_6 += (8 - (VAR_6 & 0x7));

 VAR_8 = VAR_6 +
  (sizeof(struct lio_dispatch) * VAR_0);

 VAR_9 = FUNC_2(VAR_8, VAR_1, VAR_2 | VAR_3);
 if (VAR_9 == ((void*)0))
  return (((void*)0));

 VAR_5 = (struct octeon_device *)FUNC_0(VAR_4);
 VAR_5->chip = (void *)(VAR_9);
 VAR_5->dispatch.dlist = (struct lio_dispatch *)(VAR_9 + VAR_6);

 return (VAR_5);
}
