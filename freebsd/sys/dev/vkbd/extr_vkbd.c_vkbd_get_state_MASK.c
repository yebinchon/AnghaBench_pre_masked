
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vkbd_state_t ;
struct TYPE_3__ {int kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int FUNC_0 (int ,void*,int) ;

__attribute__((used)) static int
FUNC_1(keyboard_t *VAR_0, void *VAR_1, size_t VAR_2)
{
 if (VAR_2 == 0)
  return (sizeof(vkbd_state_t));
 if (VAR_2 < sizeof(vkbd_state_t))
  return (-1);
 FUNC_0(VAR_0->kb_data, VAR_1, sizeof(vkbd_state_t));
 return (0);
}
