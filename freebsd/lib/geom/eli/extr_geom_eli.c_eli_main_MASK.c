
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct gctl_req*) ;
 int FUNC_1 (struct gctl_req*) ;
 int FUNC_2 (struct gctl_req*) ;
 int FUNC_3 (struct gctl_req*) ;
 int FUNC_4 (struct gctl_req*) ;
 int FUNC_5 (struct gctl_req*) ;
 int FUNC_6 (struct gctl_req*) ;
 int FUNC_7 (struct gctl_req*) ;
 int FUNC_8 (struct gctl_req*) ;
 int FUNC_9 (struct gctl_req*) ;
 int FUNC_10 (struct gctl_req*) ;
 int FUNC_11 (struct gctl_req*) ;
 int FUNC_12 (struct gctl_req*) ;
 int FUNC_13 (struct gctl_req*) ;
 int FUNC_14 (struct gctl_req*,char*,char const*) ;
 char* FUNC_15 (struct gctl_req*,char*) ;
 scalar_t__ FUNC_16 (char const*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_17(struct gctl_req *VAR_2, unsigned int VAR_3)
{
 const char *VAR_4;

 if (FUNC_8(VAR_2) == -1)
  return;

 if ((VAR_3 & VAR_0) != 0)
  VAR_1 = 1;

 VAR_4 = FUNC_15(VAR_2, "verb");
 if (VAR_4 == ((void*)0)) {
  FUNC_14(VAR_2, "No '%s' argument.", "verb");
  return;
 }
 if (FUNC_16(VAR_4, "init") == 0 || FUNC_16(VAR_4, "label") == 0)
  FUNC_6(VAR_2);
 else if (FUNC_16(VAR_4, "attach") == 0)
  FUNC_0(VAR_2);
 else if (FUNC_16(VAR_4, "configure") == 0)
  FUNC_3(VAR_2);
 else if (FUNC_16(VAR_4, "setkey") == 0)
  FUNC_12(VAR_2);
 else if (FUNC_16(VAR_4, "delkey") == 0)
  FUNC_4(VAR_2);
 else if (FUNC_16(VAR_4, "resume") == 0)
  FUNC_11(VAR_2);
 else if (FUNC_16(VAR_4, "kill") == 0)
  FUNC_7(VAR_2);
 else if (FUNC_16(VAR_4, "backup") == 0)
  FUNC_1(VAR_2);
 else if (FUNC_16(VAR_4, "restore") == 0)
  FUNC_10(VAR_2);
 else if (FUNC_16(VAR_4, "resize") == 0)
  FUNC_9(VAR_2);
 else if (FUNC_16(VAR_4, "version") == 0)
  FUNC_13(VAR_2);
 else if (FUNC_16(VAR_4, "dump") == 0)
  FUNC_5(VAR_2);
 else if (FUNC_16(VAR_4, "clear") == 0)
  FUNC_2(VAR_2);
 else
  FUNC_14(VAR_2, "Unknown command: %s.", VAR_4);
}
