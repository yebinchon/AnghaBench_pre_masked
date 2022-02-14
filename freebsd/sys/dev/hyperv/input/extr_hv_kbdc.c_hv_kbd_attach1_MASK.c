
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vmbus_chan_callback_t ;
struct TYPE_4__ {int buf; int hs_chan; int buflen; } ;
typedef TYPE_1__ hv_kbd_sc ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int *,int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6, vmbus_chan_callback_t VAR_7)
{
 int VAR_8;
 hv_kbd_sc *VAR_9;

        VAR_9 = FUNC_0(VAR_6);
 VAR_9->buflen = VAR_0;
 VAR_9->buf = FUNC_2(VAR_9->buflen, VAR_3, VAR_4 | VAR_5);
 FUNC_4(VAR_9->hs_chan, 0);
 VAR_8 = FUNC_3(
  VAR_9->hs_chan,
  VAR_2,
  VAR_1,
  ((void*)0), 0,
  VAR_7,
  VAR_9);
 if (VAR_8 != 0) {
  FUNC_1(VAR_9->buf, VAR_3);
 }
 return (VAR_8);
}
