
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ks_polling; } ;
typedef TYPE_1__ vkbd_state_t ;
struct TYPE_7__ {scalar_t__ kb_data; } ;
typedef TYPE_2__ keyboard_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(keyboard_t *VAR_0, int VAR_1)
{
 vkbd_state_t *VAR_2 = ((void*)0);

 VAR_2 = (vkbd_state_t *) VAR_0->kb_data;

 FUNC_0(VAR_2);

 if (VAR_1)
  VAR_2->ks_polling ++;
 else
  VAR_2->ks_polling --;

 FUNC_1(VAR_2);

 return (0);
}
