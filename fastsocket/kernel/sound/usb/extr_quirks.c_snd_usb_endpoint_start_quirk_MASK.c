
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_usb_endpoint {scalar_t__ type; int skip_packets; TYPE_3__* chip; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct TYPE_4__ {int idVendor; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct snd_usb_endpoint *VAR_1)
{




 if ((FUNC_0(VAR_1->chip->dev->descriptor.idVendor) == 0x23ba) &&
     VAR_1->type == VAR_0)
  VAR_1->skip_packets = 4;
}
