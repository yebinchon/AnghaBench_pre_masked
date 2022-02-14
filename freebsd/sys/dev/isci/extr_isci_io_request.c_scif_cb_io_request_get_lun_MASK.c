
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ISCI_IO_REQUEST {TYPE_2__* ccb; } ;
struct TYPE_3__ {int target_lun; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;



uint32_t
FUNC_0(void * VAR_0)
{
 struct ISCI_IO_REQUEST *VAR_1 =
     (struct ISCI_IO_REQUEST *)VAR_0;

 return (VAR_1->ccb->ccb_h.target_lun);
}
