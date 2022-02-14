
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_5__ {int ks_polling; } ;
typedef TYPE_2__ atkbd_state_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(keyboard_t *VAR_0, int VAR_1)
{
 atkbd_state_t *VAR_2;
 int VAR_3;

 VAR_2 = (atkbd_state_t *)VAR_0->kb_data;
 VAR_3 = FUNC_0();
 if (VAR_1)
  ++VAR_2->ks_polling;
 else
  --VAR_2->ks_polling;
 FUNC_1(VAR_3);
 return 0;
}
