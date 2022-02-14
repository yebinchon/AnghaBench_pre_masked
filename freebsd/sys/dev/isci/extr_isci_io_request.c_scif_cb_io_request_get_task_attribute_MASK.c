
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ISCI_IO_REQUEST {TYPE_3__* ccb; } ;
struct TYPE_5__ {int tag_action; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_6__ {TYPE_2__ csio; TYPE_1__ ccb_h; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

uint32_t
FUNC_0(void * VAR_5)
{
 struct ISCI_IO_REQUEST *VAR_6 =
     (struct ISCI_IO_REQUEST *)VAR_5;
 uint32_t VAR_7;

 if((VAR_6->ccb->ccb_h.flags & VAR_0) != 0)
  switch(VAR_6->ccb->csio.tag_action) {
  case 129:
   VAR_7 = VAR_2;
   break;

  case 128:
   VAR_7 = VAR_3;
   break;

  case 130:
   VAR_7 = VAR_1;
   break;

  default:
   VAR_7 = VAR_4;
   break;
  }
 else
  VAR_7 = VAR_4;

 return (VAR_7);
}
