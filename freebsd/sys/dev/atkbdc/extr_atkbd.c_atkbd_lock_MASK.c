
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


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(keyboard_t *VAR_0, int VAR_1)
{
 return FUNC_0(((atkbd_state_t *)VAR_0->kb_data)->kbdc, VAR_1);
}
