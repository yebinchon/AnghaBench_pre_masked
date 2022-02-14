
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;







 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  FUNC_0 ();

  if (!VAR_3)
    {







      const char * VAR_12 = ((void*)0);

      switch (VAR_8)
 {
 case 132: VAR_12 = "abi32"; break;
 case 129: VAR_12 = "abiN32"; break;
 case 131: VAR_12 = "abi64"; break;
 case 128: VAR_12 = "abiO64"; break;
 case 130: VAR_12 = VAR_1 ? "eabi64" : "eabi32"; break;
 default:
   FUNC_2 ();
 }




      FUNC_1 (VAR_6, "\t.section .mdebug.%s\n", VAR_12);





      if (VAR_8 == 130 || VAR_8 == 128)
 FUNC_1 (VAR_6, "\t.section .gcc_compiled_long%d\n",
   VAR_4 ? 64 : 32);


      FUNC_1 (VAR_6, "\t.previous\n");
    }


  if (VAR_2)
    FUNC_1 (VAR_6, "\t.abicalls\n");

  if (VAR_5)
    FUNC_1 (VAR_6, "\t.set\tmips16\n");

  if (VAR_7)
    FUNC_1 (VAR_6, "\n%s -G value = %d, Arch = %s, ISA = %d\n",
      VAR_0,
      VAR_11, VAR_9->name, VAR_10);
}
