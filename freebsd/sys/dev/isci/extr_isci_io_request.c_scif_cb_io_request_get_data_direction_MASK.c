
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ISCI_IO_REQUEST {TYPE_2__* ccb; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;
typedef int SCI_IO_REQUEST_DATA_DIRECTION ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

SCI_IO_REQUEST_DATA_DIRECTION
FUNC_0(void * VAR_4)
{
 struct ISCI_IO_REQUEST *VAR_5 =
     (struct ISCI_IO_REQUEST *)VAR_4;

 switch (VAR_5->ccb->ccb_h.flags & VAR_0) {
 case 129:
  return (VAR_1);
 case 128:
  return (VAR_2);
 default:
  return (VAR_3);
 }
}
