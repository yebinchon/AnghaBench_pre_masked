
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int keymap_t ;
struct TYPE_3__ {int kb_fkeytab_size; int * kb_fkeytab; int * kb_accentmap; int * kb_keymap; } ;
typedef TYPE_1__ keyboard_t ;
typedef int fkeytab_t ;
typedef int accentmap_t ;



void
FUNC_0(keyboard_t *VAR_0, keymap_t *VAR_1, accentmap_t *VAR_2,
      fkeytab_t *VAR_3, int VAR_4)
{
 VAR_0->kb_keymap = VAR_1;
 VAR_0->kb_accentmap = VAR_2;
 VAR_0->kb_fkeytab = VAR_3;
 VAR_0->kb_fkeytab_size = VAR_4;
}
