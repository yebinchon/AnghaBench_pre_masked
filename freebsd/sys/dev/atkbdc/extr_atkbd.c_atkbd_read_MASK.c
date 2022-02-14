
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kb_count; scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_6__ {int kbdc; } ;
typedef TYPE_2__ atkbd_state_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(keyboard_t *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1)
  VAR_2 = FUNC_1(((atkbd_state_t *)VAR_0->kb_data)->kbdc);
 else
  VAR_2 = FUNC_2(((atkbd_state_t *)VAR_0->kb_data)->kbdc);
 if (VAR_2 != -1)
  ++VAR_0->kb_count;
 return (FUNC_0(VAR_0) ? VAR_2 : -1);
}
