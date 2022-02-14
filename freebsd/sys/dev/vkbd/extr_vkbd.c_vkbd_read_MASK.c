
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vkbd_state_t ;
struct TYPE_4__ {int kb_count; scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int
FUNC_4(keyboard_t *VAR_0, int VAR_1)
{
 vkbd_state_t *VAR_2 = (vkbd_state_t *) VAR_0->kb_data;
 int VAR_3;

 FUNC_1(VAR_2);
 VAR_3 = FUNC_3(VAR_2, VAR_1);
 FUNC_2(VAR_2);

 if (VAR_3 != -1)
  VAR_0->kb_count ++;

 return (FUNC_0(VAR_0)? VAR_3 : -1);
}
