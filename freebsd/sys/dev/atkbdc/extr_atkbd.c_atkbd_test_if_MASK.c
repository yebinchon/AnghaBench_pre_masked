
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_5__ {int kbdc; } ;
typedef TYPE_2__ atkbd_state_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(keyboard_t *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_2 = 0;
 FUNC_0(((atkbd_state_t *)VAR_1->kb_data)->kbdc, 10);
 VAR_3 = FUNC_1();
 if (!FUNC_3(((atkbd_state_t *)VAR_1->kb_data)->kbdc))
  VAR_2 = VAR_0;
 else if (FUNC_4(((atkbd_state_t *)VAR_1->kb_data)->kbdc) != 0)
  VAR_2 = VAR_0;
 FUNC_2(VAR_3);

 return VAR_2;
}
