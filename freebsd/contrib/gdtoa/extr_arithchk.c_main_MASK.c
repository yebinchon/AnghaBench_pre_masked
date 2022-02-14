
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; int kind; } ;
typedef int FILE ;
typedef TYPE_1__ Akind ;


 TYPE_1__* FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 () ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (char*) ;
 int * VAR_1 ;

int
FUNC_7()
{
 Akind *VAR_2 = 0;
 int VAR_3 = 0;
 FILE *VAR_4;
 VAR_4 = VAR_1;


 if (sizeof(double) == 2*sizeof(long))
  VAR_2 = FUNC_0();
 else if (sizeof(double) == 2*sizeof(int)) {
  VAR_3 = 1;
  VAR_2 = FUNC_5();
  }
 else if (sizeof(double) == sizeof(long))
  VAR_2 = FUNC_1();
 if (VAR_2) {
  FUNC_3(VAR_4, "#define %s\n#define Arith_Kind_ASL %d\n",
   VAR_2->name, VAR_2->kind);
  if (VAR_3)
   FUNC_3(VAR_4, "#define Long int\n#define Intcast (int)(long)\n");
  if (VAR_0)
   FUNC_3(VAR_4, "#define Double_Align\n");
  if (sizeof(char*) == 8)
   FUNC_3(VAR_4, "#define X64_bit_pointers\n");

  if (sizeof(long long) < 8)

   FUNC_3(VAR_4, "#define NO_LONG_LONG\n");
  if (VAR_2->kind <= 2 && FUNC_4())
   FUNC_3(VAR_4, "#define Sudden_Underflow\n");
  return 0;
  }
 FUNC_3(VAR_4, "/* Unknown arithmetic */\n");
 return 1;
 }
