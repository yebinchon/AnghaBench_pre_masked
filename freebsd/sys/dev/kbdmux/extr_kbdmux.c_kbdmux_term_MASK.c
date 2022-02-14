
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int ks_flags; struct TYPE_13__* kb_fkeytab; struct TYPE_13__* kb_accentmap; struct TYPE_13__* kb_keymap; int ks_evdev; int * kbd; int ks_kbds; int ks_timo; scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
typedef TYPE_1__ kbdmux_state_t ;
typedef TYPE_1__ kbdmux_kbd_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *,int **) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_12(keyboard_t *VAR_4)
{
 kbdmux_state_t *VAR_5 = (kbdmux_state_t *) VAR_4->kb_data;
 kbdmux_kbd_t *VAR_6;

 FUNC_0(VAR_5);


 FUNC_7(&VAR_5->ks_timo);


 while (VAR_5->ks_flags & VAR_1)
  FUNC_2(VAR_5, VAR_2, "kbdmuxc", 0);


 while ((VAR_6 = FUNC_4(&VAR_5->ks_kbds)) != ((void*)0)) {
  FUNC_10(VAR_6->kbd, &VAR_6->kbd);
  FUNC_5(&VAR_5->ks_kbds, VAR_3);

  VAR_6->kbd = ((void*)0);

  FUNC_9(VAR_6, VAR_0);
 }

 FUNC_3(VAR_5);

 FUNC_11(VAR_4);





 FUNC_1(VAR_5);
 FUNC_6(VAR_5, sizeof(*VAR_5));
 FUNC_9(VAR_5, VAR_0);

 FUNC_9(VAR_4->kb_keymap, VAR_0);
 FUNC_9(VAR_4->kb_accentmap, VAR_0);
 FUNC_9(VAR_4->kb_fkeytab, VAR_0);
 FUNC_9(VAR_4, VAR_0);

 return (0);
}
