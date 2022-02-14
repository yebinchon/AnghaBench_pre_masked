
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* kb_fkeytab; struct TYPE_8__* kb_accentmap; struct TYPE_8__* kb_keymap; scalar_t__ kb_data; } ;
typedef TYPE_1__ vkbd_state_t ;
typedef TYPE_1__ keyboard_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(keyboard_t *VAR_1)
{
 vkbd_state_t *VAR_2 = (vkbd_state_t *) VAR_1->kb_data;

 FUNC_3(VAR_1);

 FUNC_0(VAR_2);
 FUNC_1(VAR_2, sizeof(*VAR_2));
 FUNC_2(VAR_2, VAR_0);

 FUNC_2(VAR_1->kb_keymap, VAR_0);
 FUNC_2(VAR_1->kb_accentmap, VAR_0);
 FUNC_2(VAR_1->kb_fkeytab, VAR_0);
 FUNC_2(VAR_1, VAR_0);

 return (0);
}
