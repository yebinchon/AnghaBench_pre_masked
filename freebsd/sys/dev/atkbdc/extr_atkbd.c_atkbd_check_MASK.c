
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_6__ {int kbdc; } ;
typedef TYPE_2__ atkbd_state_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(keyboard_t *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return VAR_0;
 return FUNC_1(((atkbd_state_t *)VAR_1->kb_data)->kbdc);
}
