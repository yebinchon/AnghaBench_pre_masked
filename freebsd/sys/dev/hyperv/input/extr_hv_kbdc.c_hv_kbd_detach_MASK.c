
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * hs_xact_ctx; } ;
typedef TYPE_1__ hv_kbd_sc ;
typedef int device_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0)
{
 int VAR_1;
 hv_kbd_sc *VAR_2 = FUNC_0(VAR_0);
 FUNC_4(VAR_2);
 if (VAR_2->hs_xact_ctx != ((void*)0))
  FUNC_5(VAR_2->hs_xact_ctx);
 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1)
  FUNC_1(VAR_0, "Fail to detach\n");
 return FUNC_3(VAR_0);
}
