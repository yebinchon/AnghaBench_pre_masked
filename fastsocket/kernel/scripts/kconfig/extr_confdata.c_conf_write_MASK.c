
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {scalar_t__ tri; } ;
struct symbol {int flags; int type; char* name; TYPE_1__ curr; } ;
struct stat {int st_mode; } ;
struct menu {struct menu* next; struct menu* parent; struct menu* list; struct symbol* sym; } ;
struct TYPE_4__ {struct menu* list; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_0 (int ) ;


 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 char* FUNC_3 () ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,char*,char const*,...) ;
 int FUNC_8 (char*,int *) ;
 int FUNC_9 (char const*,int,int,int *) ;
 char* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (char*,char const*,int) ;
 char* FUNC_13 (struct menu*) ;
 int FUNC_14 (struct menu*) ;

 struct symbol* VAR_2 ;

 int FUNC_15 (char*,char*) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_17 (char*,char*,char*,...) ;
 int FUNC_18 (char const*,struct stat*) ;
 int FUNC_19 (char*,char const*) ;
 int FUNC_20 (char*,char const*) ;
 int FUNC_21 (char const*,char*) ;
 char* FUNC_22 (char const*,char) ;
 int FUNC_23 (struct symbol*) ;
 int FUNC_24 () ;
 char* FUNC_25 (struct symbol*) ;
 int FUNC_26 (struct symbol*) ;
 struct symbol* FUNC_27 (char*,int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int *) ;


int FUNC_30(const char *VAR_4)
{
 FILE *VAR_5;
 struct symbol *VAR_6;
 struct menu *VAR_7;
 const char *VAR_8;
 char VAR_9[128], VAR_10[128], VAR_11[128];
 int VAR_12, VAR_13;
 const char *VAR_14;
 time_t VAR_15;
 int VAR_16 = 1;
 char *VAR_17;

 VAR_9[0] = 0;
 if (VAR_4 && VAR_4[0]) {
  struct stat VAR_18;
  char *VAR_19;

  if (!FUNC_18(VAR_4, &VAR_18) && FUNC_0(VAR_18.st_mode)) {
   FUNC_20(VAR_9, VAR_4);
   FUNC_19(VAR_9, "/");
   VAR_8 = FUNC_3();
  } else if ((VAR_19 = FUNC_22(VAR_4, '/'))) {
   int VAR_20 = VAR_19 - VAR_4 + 1;
   FUNC_12(VAR_9, VAR_4, VAR_20);
   VAR_9[VAR_20] = 0;
   if (VAR_19[1])
    VAR_8 = VAR_19 + 1;
   else
    VAR_8 = FUNC_3();
  } else
   VAR_8 = VAR_4;
 } else
  VAR_8 = FUNC_3();

 FUNC_17(VAR_11, "%s%s", VAR_9, VAR_8);
 VAR_17 = FUNC_10("KCONFIG_OVERWRITECONFIG");
 if (!VAR_17 || !*VAR_17) {
  FUNC_17(VAR_10, "%s.tmpconfig.%d", VAR_9, (int)FUNC_11());
  VAR_5 = FUNC_6(VAR_10, "w");
 } else {
  *VAR_10 = 0;
  VAR_5 = FUNC_6(VAR_11, "w");
 }
 if (!VAR_5)
  return 1;

 VAR_6 = FUNC_27("KERNELVERSION", 0);
 FUNC_23(VAR_6);
 FUNC_29(&VAR_15);
 VAR_17 = FUNC_10("KCONFIG_NOTIMESTAMP");
 if (VAR_17 && *VAR_17)
  VAR_16 = 0;

 FUNC_7(VAR_5, FUNC_1("#\n"
         "# Automatically generated make config: don't edit\n"
         "# Linux kernel version: %s\n"
         "%s%s"
         "#\n"),
       FUNC_25(VAR_6),
       VAR_16 ? "# " : "",
       VAR_16 ? FUNC_4(&VAR_15) : "");

 if (!FUNC_2())
  FUNC_24();

 VAR_7 = VAR_3.list;
 while (VAR_7) {
  VAR_6 = VAR_7->sym;
  if (!VAR_6) {
   if (!FUNC_14(VAR_7))
    goto next;
   VAR_14 = FUNC_13(VAR_7);
   FUNC_7(VAR_5, "\n"
         "#\n"
         "# %s\n"
         "#\n", VAR_14);
  } else if (!(VAR_6->flags & VAR_0)) {
   FUNC_23(VAR_6);
   if (!(VAR_6->flags & VAR_1))
    goto next;
   VAR_6->flags &= ~VAR_1;
   VAR_12 = VAR_6->type;
   if (VAR_12 == 131) {
    FUNC_23(VAR_2);
    if (VAR_2->curr.tri == 129)
     VAR_12 = 135;
   }
   switch (VAR_12) {
   case 135:
   case 131:
    switch (FUNC_26(VAR_6)) {
    case 129:
     FUNC_7(VAR_5, "# CONFIG_%s is not set\n", VAR_6->name);
     break;
    case 130:
     FUNC_7(VAR_5, "CONFIG_%s=m\n", VAR_6->name);
     break;
    case 128:
     FUNC_7(VAR_5, "CONFIG_%s=y\n", VAR_6->name);
     break;
    }
    break;
   case 132:
    VAR_14 = FUNC_25(VAR_6);
    FUNC_7(VAR_5, "CONFIG_%s=\"", VAR_6->name);
    while (1) {
     VAR_13 = FUNC_21(VAR_14, "\"\\");
     if (VAR_13) {
      FUNC_9(VAR_14, VAR_13, 1, VAR_5);
      VAR_14 += VAR_13;
     }
     if (!*VAR_14)
      break;
     FUNC_7(VAR_5, "\\%c", VAR_14++);
    }
    FUNC_8("\"\n", VAR_5);
    break;
   case 134:
    VAR_14 = FUNC_25(VAR_6);
    if (VAR_14[0] != '0' || (VAR_14[1] != 'x' && VAR_14[1] != 'X')) {
     FUNC_7(VAR_5, "CONFIG_%s=%s\n", VAR_6->name, VAR_14);
     break;
    }
   case 133:
    VAR_14 = FUNC_25(VAR_6);
    FUNC_7(VAR_5, "CONFIG_%s=%s\n", VAR_6->name, VAR_14);
    break;
   }
  }

 next:
  if (VAR_7->list) {
   VAR_7 = VAR_7->list;
   continue;
  }
  if (VAR_7->next)
   VAR_7 = VAR_7->next;
  else while ((VAR_7 = VAR_7->parent)) {
   if (VAR_7->next) {
    VAR_7 = VAR_7->next;
    break;
   }
  }
 }
 FUNC_5(VAR_5);

 if (*VAR_10) {
  FUNC_19(VAR_9, VAR_8);
  FUNC_19(VAR_9, ".old");
  FUNC_16(VAR_11, VAR_9);
  if (FUNC_16(VAR_10, VAR_11))
   return 1;
 }

 FUNC_15(FUNC_1("#\n"
   "# configuration written to %s\n"
   "#\n"), VAR_11);

 FUNC_28(0);

 return 0;
}
