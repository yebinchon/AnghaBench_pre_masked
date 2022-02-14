
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char* const*) ;
 int FUNC_2 (int,char* const*) ;
 int FUNC_3 (int,char* const*) ;
 int FUNC_4 (int,char* const*) ;
 int FUNC_5 (int,char* const*) ;
 int FUNC_6 () ;
 int FUNC_7 (int,char* const*) ;
 int FUNC_8 (int,char* const*) ;
 int FUNC_9 (int,char* const*) ;
 int FUNC_10 (int,char* const*,int) ;
 int FUNC_11 (int,char* const*) ;
 int FUNC_12 (int,char* const*) ;
 int FUNC_13 (int,char* const*) ;
 int FUNC_14 (int,char* const*) ;
 int FUNC_15 (int,char* const*) ;
 int FUNC_16 () ;
 int FUNC_17 (int,char* const*) ;
 int FUNC_18 (int,char* const*) ;
 int FUNC_19 (int,char* const*) ;
 int FUNC_20 (int,char* const*) ;
 int FUNC_21 (char*,char* const) ;
 int FUNC_22 (char* const,char*) ;

__attribute__((used)) static void
FUNC_23(int VAR_0, char * const *VAR_1)
{

 if (VAR_0 <= 0)
  return;

 if (!FUNC_22(VAR_1[0], "create"))
  FUNC_3(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "exit") || !FUNC_22(VAR_1[0], "quit"))
  FUNC_0(0);
 else if (!FUNC_22(VAR_1[0], "attach"))
  FUNC_1(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "detach"))
  FUNC_4(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "concat"))
  FUNC_2(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "grow"))
  FUNC_5(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "help"))
  FUNC_6();
 else if (!FUNC_22(VAR_1[0], "list") || !FUNC_22(VAR_1[0], "l"))
  FUNC_7(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "ld"))
  FUNC_7(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "lp"))
  FUNC_7(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "ls"))
  FUNC_7(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "lv"))
  FUNC_7(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "mirror"))
  FUNC_8(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "move"))
  FUNC_9(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "mv"))
  FUNC_9(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "printconfig"))
  FUNC_11(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "raid5"))
  FUNC_12(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "rename"))
  FUNC_13(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "resetconfig"))
  FUNC_14(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "rm"))
  FUNC_15(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "saveconfig"))
  FUNC_16();
 else if (!FUNC_22(VAR_1[0], "setstate"))
  FUNC_17(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "start"))
  FUNC_18(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "stop"))
  FUNC_19(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "stripe"))
  FUNC_20(VAR_0, VAR_1);
 else if (!FUNC_22(VAR_1[0], "checkparity"))
  FUNC_10(VAR_0, VAR_1, 0);
 else if (!FUNC_22(VAR_1[0], "rebuildparity"))
  FUNC_10(VAR_0, VAR_1, 1);
 else
  FUNC_21("unknown command '%s'\n", VAR_1[0]);
}
