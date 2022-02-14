
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kb_delay2; int kb_delay1; TYPE_2__* kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_5__ {int kbdc; } ;
typedef TYPE_2__ atkbd_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(keyboard_t *VAR_3)
{
 int VAR_4, VAR_5;
 atkbd_state_t *VAR_6 = VAR_3->kb_data;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 VAR_5 = FUNC_3(VAR_6->kbdc, VAR_2, VAR_4);
 if (VAR_5 == 0) {
  VAR_3->kb_delay1 = FUNC_1(VAR_4);
  VAR_3->kb_delay2 = FUNC_2(VAR_4);
 }

 return (VAR_5);
}
