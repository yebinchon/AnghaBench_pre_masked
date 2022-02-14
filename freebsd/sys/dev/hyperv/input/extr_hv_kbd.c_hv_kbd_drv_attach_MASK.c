
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {void* kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_18__ {int (* enable ) (TYPE_1__*) ;} ;
typedef TYPE_2__ keyboard_switch_t ;
struct TYPE_19__ {int sc_mode; TYPE_1__ sc_kbd; } ;
typedef TYPE_3__ hv_kbd_sc ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 TYPE_2__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int ,int ,int,int ,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int *,int *,int ,int ) ;
 int VAR_7 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*) ;

int
FUNC_16(device_t VAR_8)
{
 hv_kbd_sc *VAR_9 = FUNC_4(VAR_8);
 int VAR_10 = FUNC_5(VAR_8);
 keyboard_t *VAR_11 = &VAR_9->sc_kbd;
 keyboard_switch_t *VAR_12;
 VAR_12 = FUNC_10(VAR_1);
 if (VAR_12 == ((void*)0)) {
  return (VAR_0);
 }

 FUNC_11(VAR_11, VAR_1, VAR_2, VAR_10, 0, 0, 0);
 VAR_11->kb_data = (void *)VAR_9;
 FUNC_13(VAR_11, &VAR_7, &VAR_4, VAR_6, FUNC_14(VAR_6));
 FUNC_1(VAR_11);
 FUNC_8(VAR_11);
 FUNC_3(VAR_11);
 FUNC_2(VAR_11);
 VAR_9->sc_mode = VAR_3;
 (*VAR_12->enable)(VAR_11);

 if (FUNC_12(VAR_11) < 0) {
  goto detach;
 }
 FUNC_0(VAR_11);





 if (VAR_5) {
  FUNC_6(VAR_11, VAR_5);
 }
 return (0);
detach:
 FUNC_7(VAR_8);
 return (VAR_0);
}
