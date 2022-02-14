
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vkbd_state_t ;
struct TYPE_4__ {scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(keyboard_t *VAR_1)
{
 vkbd_state_t *VAR_2 = ((void*)0);
 int VAR_3;

 if (!FUNC_0(VAR_1))
  return (VAR_0);

 VAR_2 = (vkbd_state_t *) VAR_1->kb_data;

 FUNC_1(VAR_2);
 VAR_3 = FUNC_3(VAR_2);
 FUNC_2(VAR_2);

 return (VAR_3);
}
