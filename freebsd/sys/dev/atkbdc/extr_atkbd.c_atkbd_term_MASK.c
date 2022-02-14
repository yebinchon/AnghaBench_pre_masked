
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_6__ {int ks_timer; } ;
typedef TYPE_2__ atkbd_state_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(keyboard_t *VAR_0)
{
 atkbd_state_t *VAR_1 = (atkbd_state_t *)VAR_0->kb_data;

 FUNC_1(VAR_0);
 FUNC_0(&VAR_1->ks_timer);
 return 0;
}
