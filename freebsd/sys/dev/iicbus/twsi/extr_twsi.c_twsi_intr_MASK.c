
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct twsi_softc {int control_val; size_t sent_bytes; int recv_bytes; scalar_t__ transfer; int dev; int reg_control; scalar_t__ need_ack; void* error; TYPE_1__* msg; int reg_data; int reg_status; } ;
struct TYPE_2__ {int flags; int slave; int* buf; int len; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct twsi_softc*,int ) ;
 int FUNC_1 (struct twsi_softc*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct twsi_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_9)
{
 struct twsi_softc *VAR_10;
 uint32_t VAR_11;
 int VAR_12 = 0;

 VAR_10 = VAR_9;

 FUNC_2(VAR_10->dev, "Got interrupt\n");

 while (FUNC_0(VAR_10, VAR_10->reg_control) & VAR_6) {
  VAR_11 = FUNC_0(VAR_10, VAR_10->reg_status);
  FUNC_2(VAR_10->dev, "status=%x\n", VAR_11);

  switch (VAR_11) {
  case 128:
  case 129:

   FUNC_2(VAR_10->dev, "Send the address\n");

   if (VAR_10->msg->flags & VAR_3)
    FUNC_1(VAR_10, VAR_10->reg_data,
        VAR_10->msg->slave | VAR_4);
   else
    FUNC_1(VAR_10, VAR_10->reg_data,
        VAR_10->msg->slave & ~VAR_4);

   FUNC_1(VAR_10, VAR_10->reg_control, VAR_10->control_val);
   break;

  case 134:
   FUNC_2(VAR_10->dev, "Ack received after transmitting the address\n");

   VAR_10->sent_bytes = 0;
   FUNC_2(VAR_10->dev, "Sending byte 0 = %x\n", VAR_10->msg->buf[0]);
   FUNC_1(VAR_10, VAR_10->reg_data, VAR_10->msg->buf[0]);

   FUNC_1(VAR_10, VAR_10->reg_control, VAR_10->control_val);
   break;

  case 136:
   FUNC_2(VAR_10->dev, "Ack received after transmitting the address\n");
   VAR_10->recv_bytes = 0;

   FUNC_1(VAR_10, VAR_10->reg_control, VAR_10->control_val);
   break;

  case 133:
  case 135:
   FUNC_2(VAR_10->dev, "No ack received after transmitting the address\n");
   VAR_10->transfer = 0;
   VAR_10->error = VAR_1;
   VAR_10->control_val = 0;
   FUNC_3(VAR_10);
   break;

  case 130:
   FUNC_2(VAR_10->dev, "Ack received after transmitting data\n");
   if (VAR_10->sent_bytes++ == (VAR_10->msg->len - 1)) {
    FUNC_2(VAR_10->dev, "Done sending all the bytes\n");

    if (!(VAR_10->msg->flags & VAR_2)) {
     FUNC_2(VAR_10->dev, "Done TX data, send stop\n");
     FUNC_1(VAR_10, VAR_10->reg_control,
       VAR_10->control_val | VAR_8);
    } else {
     VAR_10->control_val &= ~VAR_7;
     FUNC_1(VAR_10, VAR_10->reg_control,
         VAR_10->control_val);
    }
    VAR_12 = 1;
   } else {
    FUNC_2(VAR_10->dev, "Sending byte %d = %x\n",
        VAR_10->sent_bytes,
        VAR_10->msg->buf[VAR_10->sent_bytes]);
    FUNC_1(VAR_10, VAR_10->reg_data,
        VAR_10->msg->buf[VAR_10->sent_bytes]);
    FUNC_1(VAR_10, VAR_10->reg_control,
        VAR_10->control_val);
   }

   break;
  case 132:
   FUNC_2(VAR_10->dev, "Ack received after receiving data\n");
   FUNC_2(VAR_10->dev, "msg_len=%d recv_bytes=%d\n", VAR_10->msg->len, VAR_10->recv_bytes);
   VAR_10->msg->buf[VAR_10->recv_bytes++] = FUNC_0(VAR_10, VAR_10->reg_data);


   if (VAR_10->msg->len - VAR_10->recv_bytes == 1)
    VAR_10->control_val &= ~VAR_5;
   FUNC_1(VAR_10, VAR_10->reg_control, VAR_10->control_val);
   break;

  case 131:
   if (VAR_10->msg->len - VAR_10->recv_bytes == 1) {
    VAR_10->msg->buf[VAR_10->recv_bytes++] = FUNC_0(VAR_10, VAR_10->reg_data);
    FUNC_2(VAR_10->dev, "Done RX data, send stop (2)\n");
    if (!(VAR_10->msg->flags & VAR_2))
     FUNC_1(VAR_10, VAR_10->reg_control,
       VAR_10->control_val | VAR_8);
   } else {
    FUNC_2(VAR_10->dev, "No ack when receiving data\n");
    VAR_10->error = VAR_0;
    VAR_10->control_val = 0;
   }
   VAR_10->transfer = 0;
   VAR_12 = 1;
   break;

  default:
   FUNC_2(VAR_10->dev, "status=%x hot handled\n", VAR_11);
   VAR_10->transfer = 0;
   VAR_10->error = VAR_0;
   VAR_10->control_val = 0;
   FUNC_3(VAR_10);
   break;
  }

  if (VAR_10->need_ack)
   FUNC_1(VAR_10, VAR_10->reg_control,
       VAR_10->control_val | VAR_6);
 }

 FUNC_2(VAR_10->dev, "Done with interrupts\n");
 if (VAR_12 == 1) {
  VAR_10->transfer = 0;
  FUNC_3(VAR_10);
 }
}
