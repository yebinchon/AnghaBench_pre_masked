
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_7__ {int ks_timer; } ;
typedef TYPE_2__ atkbd_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,void (*) (void*),void*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 atkbd_state_t *VAR_4;
 keyboard_t *VAR_5;
 int VAR_6;
 VAR_6 = FUNC_4();
 VAR_5 = (keyboard_t *)VAR_3;
 if (FUNC_3(VAR_5, VAR_1)) {





  FUNC_3(VAR_5, VAR_0);
  if (FUNC_1(VAR_5))
   FUNC_2(VAR_5, ((void*)0));
 }
 FUNC_5(VAR_6);
 VAR_4 = (atkbd_state_t *)VAR_5->kb_data;
 FUNC_0(&VAR_4->ks_timer, VAR_2 / 10, FUNC_6, VAR_3);
}
