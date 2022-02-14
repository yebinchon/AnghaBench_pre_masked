
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct menu {TYPE_1__* prompt; void* data; struct symbol* sym; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct menu*) ;
 int VAR_3 ;
 int FUNC_2 (struct menu*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct menu*) ;
 struct menu* VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*,struct menu*,int*) ;
 int FUNC_8 () ;
 struct menu* FUNC_9 () ;
 int FUNC_10 (char) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (char) ;
 scalar_t__ FUNC_14 () ;
 char* VAR_5 ;
 char* FUNC_15 (struct menu*) ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct menu VAR_9 ;
 int FUNC_16 () ;
 int VAR_10 ;
 int FUNC_17 (struct menu*) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (int *,int ,int,int) ;
 int VAR_11 ;
 int FUNC_20 (struct symbol*) ;
 int FUNC_21 (struct symbol*) ;
 int FUNC_22 (struct symbol*,int ) ;
 int FUNC_23 (struct symbol*) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_24(struct menu *VAR_13)
{
 struct menu *VAR_14;
 const char *VAR_15 = FUNC_15(VAR_13);
 struct symbol *VAR_16;
 struct menu *VAR_17 = ((void*)0);
 int VAR_18;
 int VAR_19 = 0;

 while (1) {
  FUNC_12();
  VAR_4 = VAR_13;
  FUNC_1(VAR_13);
  if (!VAR_3)
   break;
  if (VAR_13 == &VAR_9) {
   FUNC_11("--- ");
   FUNC_13(':');
   FUNC_11(FUNC_0("    Load an Alternate Configuration File"));
   FUNC_13('L');
   FUNC_11(FUNC_0("    Save an Alternate Configuration File"));
   FUNC_13('S');
  }
  FUNC_6();
  VAR_18 = FUNC_7(VAR_15 ? FUNC_0(VAR_15) : FUNC_0("Main Menu"),
      FUNC_0(VAR_6),
      VAR_17, &VAR_19);
  if (VAR_18 == 1 || VAR_18 == VAR_1 || VAR_18 == -VAR_0)
   break;
  if (!FUNC_8())
   continue;
  if (!FUNC_14())
   continue;

  VAR_14 = FUNC_9();
  VAR_17 = FUNC_9();
  if (VAR_14)
   VAR_16 = VAR_14->sym;
  else
   VAR_16 = ((void*)0);

  switch (VAR_18) {
  case 0:
   switch (FUNC_14()) {
   case 'm':
    if (VAR_11)
     VAR_14->data = (void *) (long) !VAR_14->data;
    else
     FUNC_24(VAR_14);
    break;
   case 't':
    if (FUNC_21(VAR_16) && FUNC_20(VAR_16) == VAR_12)
     FUNC_2(VAR_14);
    else if (VAR_14->prompt->type == VAR_2)
     FUNC_24(VAR_14);
    break;
   case 's':
    FUNC_5(VAR_14);
    break;
   case 'L':
    FUNC_3();
    break;
   case 'S':
    FUNC_4();
    break;
   }
   break;
  case 2:
   if (VAR_16)
    FUNC_17(VAR_14);
   else
    FUNC_18(FUNC_0("README"), FUNC_0(VAR_5));
   break;
  case 3:
   if (FUNC_10('t')) {
    if (FUNC_22(VAR_16, VAR_12))
     break;
    if (FUNC_22(VAR_16, VAR_7))
     FUNC_19(((void*)0), VAR_10, 6, 74);
   }
   break;
  case 4:
   if (FUNC_10('t'))
    FUNC_22(VAR_16, VAR_8);
   break;
  case 5:
   if (FUNC_10('t'))
    FUNC_22(VAR_16, VAR_7);
   break;
  case 6:
   if (FUNC_10('t'))
    FUNC_23(VAR_16);
   else if (FUNC_10('m'))
    FUNC_24(VAR_14);
   break;
  case 7:
   FUNC_16();
   break;
  }
 }
}
