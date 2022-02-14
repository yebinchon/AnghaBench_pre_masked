
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct usb_mixer_interface {int rc_buffer; TYPE_5__* rc_setup_packet; TYPE_2__* chip; int * rc_urb; int rc_waitq; TYPE_4__* rc_cfg; } ;
struct TYPE_7__ {int poll; int read; } ;
struct snd_hwdep {int exclusive; TYPE_1__ ops; struct usb_mixer_interface* private_data; int iface; int name; } ;
struct TYPE_11__ {int bRequestType; void* wLength; void* wIndex; void* wValue; int bRequest; } ;
struct TYPE_10__ {scalar_t__ usb_id; int packet_length; } ;
struct TYPE_9__ {char* shortname; } ;
struct TYPE_8__ {scalar_t__ usb_id; int dev; TYPE_3__* card; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (int,int ) ;
 TYPE_4__* VAR_7 ;
 int FUNC_4 (TYPE_3__*,char*,int ,struct snd_hwdep**) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int,char*,char*) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ,int ,int *,int ,int,int ,struct usb_mixer_interface*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct usb_mixer_interface *VAR_11)
{
 struct snd_hwdep *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_7); ++VAR_15)
  if (VAR_7[VAR_15].usb_id == VAR_11->chip->usb_id)
   break;
 if (VAR_15 >= FUNC_0(VAR_7))
  return 0;
 VAR_11->rc_cfg = &VAR_7[VAR_15];

 VAR_14 = VAR_11->rc_cfg->packet_length;

 FUNC_2(&VAR_11->rc_waitq);
 VAR_13 = FUNC_4(VAR_11->chip->card, "SB remote control", 0, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;
 FUNC_5(VAR_12->name, sizeof(VAR_12->name),
   "%s remote control", VAR_11->chip->card->shortname);
 VAR_12->iface = VAR_2;
 VAR_12->private_data = VAR_11;
 VAR_12->ops.read = VAR_9;
 VAR_12->ops.poll = VAR_8;
 VAR_12->exclusive = 1;

 VAR_11->rc_urb = FUNC_6(0, VAR_1);
 if (!VAR_11->rc_urb)
  return -VAR_0;
 VAR_11->rc_setup_packet = FUNC_3(sizeof(*VAR_11->rc_setup_packet), VAR_1);
 if (!VAR_11->rc_setup_packet) {
  FUNC_8(VAR_11->rc_urb);
  VAR_11->rc_urb = ((void*)0);
  return -VAR_0;
 }
 VAR_11->rc_setup_packet->bRequestType =
  VAR_4 | VAR_6 | VAR_5;
 VAR_11->rc_setup_packet->bRequest = VAR_3;
 VAR_11->rc_setup_packet->wValue = FUNC_1(0);
 VAR_11->rc_setup_packet->wIndex = FUNC_1(0);
 VAR_11->rc_setup_packet->wLength = FUNC_1(VAR_14);
 FUNC_7(VAR_11->rc_urb, VAR_11->chip->dev,
        FUNC_9(VAR_11->chip->dev, 0),
        (u8*)VAR_11->rc_setup_packet, VAR_11->rc_buffer, VAR_14,
        VAR_10, VAR_11);
 return 0;
}
