
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * hs_xact_ctx; int dev; int hs_chan; } ;
typedef TYPE_1__ hv_kbd_sc ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4)
{
 int VAR_5 = 0;
 hv_kbd_sc *VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 VAR_6->hs_chan = FUNC_8(VAR_4);
 VAR_6->dev = VAR_4;
 FUNC_6(VAR_6);
 VAR_6->hs_xact_ctx = FUNC_9(FUNC_0(VAR_4),
     VAR_1, VAR_2, 0);
 if (VAR_6->hs_xact_ctx == ((void*)0)) {
  VAR_5 = VAR_0;
  goto failed;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5)
  goto failed;
 VAR_5 = FUNC_3(VAR_6);
 if (VAR_5)
  goto failed;

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5)
  goto failed;
 FUNC_7(VAR_4);
 return (0);
failed:
 FUNC_4(VAR_4);
 return (VAR_5);
}
