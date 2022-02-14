
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vkbd_state_t ;
struct TYPE_3__ {int kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static int
FUNC_1(keyboard_t *VAR_1, void *VAR_2, size_t VAR_3)
{
 if (VAR_3 < sizeof(vkbd_state_t))
  return (VAR_0);
 FUNC_0(VAR_2, VAR_1->kb_data, sizeof(vkbd_state_t));
 return (0);
}
