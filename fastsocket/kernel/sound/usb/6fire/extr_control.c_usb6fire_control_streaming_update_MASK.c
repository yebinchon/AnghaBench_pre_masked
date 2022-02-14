
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct control_runtime {scalar_t__ digital_thru_switch; scalar_t__ usb_streaming; TYPE_1__* chip; } ;
struct comm_runtime {int (* write16 ) (struct comm_runtime*,int,int,int,int) ;} ;
struct TYPE_2__ {struct comm_runtime* comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comm_runtime*,int,int,int,int) ;
 int FUNC_1 (struct control_runtime*,int ) ;

__attribute__((used)) static int FUNC_2(struct control_runtime *VAR_2)
{
 struct comm_runtime *VAR_3 = VAR_2->chip->comm;

 if (VAR_3) {
  if (!VAR_2->usb_streaming && VAR_2->digital_thru_switch)
   FUNC_1(VAR_2,
    VAR_0);
  return VAR_3->write16(VAR_3, 0x02, 0x00, 0x00,
   (VAR_2->usb_streaming ? 0x01 : 0x00) |
   (VAR_2->digital_thru_switch ? 0x08 : 0x00));
 }
 return -VAR_1;
}
