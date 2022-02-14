
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* kb_name; int kb_type; int kb_unit; int kb_config; int kb_io_base; int kb_io_size; long kb_count; int kb_lastact; int kb_delay2; int kb_delay1; scalar_t__ kb_fkeytab_size; int * kb_fkeytab; int * kb_accentmap; int * kb_keymap; int * kb_data; scalar_t__ kb_led; int kb_flags; } ;
typedef TYPE_1__ keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;

void
FUNC_1(keyboard_t *VAR_4, char *VAR_5, int VAR_6, int VAR_7, int VAR_8,
  int VAR_9, int VAR_10)
{
 VAR_4->kb_flags = VAR_3;
 VAR_4->kb_name = VAR_5;
 VAR_4->kb_type = VAR_6;
 VAR_4->kb_unit = VAR_7;
 VAR_4->kb_config = VAR_8 & ~VAR_0;
 VAR_4->kb_led = 0;
 VAR_4->kb_io_base = VAR_9;
 VAR_4->kb_io_size = VAR_10;
 VAR_4->kb_data = ((void*)0);
 VAR_4->kb_keymap = ((void*)0);
 VAR_4->kb_accentmap = ((void*)0);
 VAR_4->kb_fkeytab = ((void*)0);
 VAR_4->kb_fkeytab_size = 0;
 VAR_4->kb_delay1 = VAR_1;
 VAR_4->kb_delay2 = VAR_2;
 VAR_4->kb_count = 0L;
 FUNC_0(VAR_4->kb_lastact, sizeof(VAR_4->kb_lastact));
}
