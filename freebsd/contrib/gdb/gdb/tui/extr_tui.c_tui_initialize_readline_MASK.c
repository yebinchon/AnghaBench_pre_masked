
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char key; scalar_t__ cmd; } ;
typedef scalar_t__ Keymap ;


 char FUNC_0 (char) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char,int ,scalar_t__) ;
 int FUNC_3 (int ,char*,char*,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void
FUNC_7 (void)
{
  int VAR_12;
  Keymap VAR_13;

  FUNC_5 ();

  FUNC_1 ("tui-switch-mode", VAR_11, -1);
  FUNC_1 ("gdb-command", VAR_6, -1);
  FUNC_1 ("next-keymap", VAR_9, -1);

  VAR_3 = FUNC_6 ();
  VAR_13 = FUNC_6 ();
  VAR_4 = FUNC_4 ();

  for (VAR_12 = 0; VAR_2[VAR_12].cmd; VAR_12++)
    FUNC_2 (VAR_2[VAR_12].key, VAR_6, VAR_3);

  FUNC_3 (VAR_0, "\\C-x", (char*) VAR_13, VAR_3);



  for (VAR_12 = ' '; VAR_12 < 0x7f; VAR_12++)
    {
      int VAR_14;

      for (VAR_14 = 0; VAR_2[VAR_14].cmd; VAR_14++)
        if (VAR_2[VAR_14].key == VAR_12)
          break;

      if (VAR_2[VAR_14].cmd)
        continue;

      FUNC_2 (VAR_12, VAR_7, VAR_3);
    }

  FUNC_2 ('a', VAR_11, VAR_1);
  FUNC_2 ('a', VAR_11, VAR_13);
  FUNC_2 ('A', VAR_11, VAR_1);
  FUNC_2 ('A', VAR_11, VAR_13);
  FUNC_2 (FUNC_0 ('A'), VAR_11, VAR_1);
  FUNC_2 (FUNC_0 ('A'), VAR_11, VAR_13);
  FUNC_2 ('1', VAR_8, VAR_1);
  FUNC_2 ('1', VAR_8, VAR_13);
  FUNC_2 ('2', VAR_5, VAR_1);
  FUNC_2 ('2', VAR_5, VAR_13);
  FUNC_2 ('o', VAR_10, VAR_1);
  FUNC_2 ('o', VAR_10, VAR_13);
  FUNC_2 ('q', VAR_9, VAR_3);
  FUNC_2 ('s', VAR_9, VAR_1);
  FUNC_2 ('s', VAR_9, VAR_13);
}
