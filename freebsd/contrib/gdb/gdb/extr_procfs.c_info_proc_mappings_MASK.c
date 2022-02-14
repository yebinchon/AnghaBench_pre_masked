
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int procinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2 (procinfo *VAR_2, int VAR_3)
{
  char *VAR_4;

  if (VAR_0 == 32)
    VAR_4 = "\t%10s %10s %10s %10s %7s\n";
  else
    VAR_4 = "  %18s %18s %10s %10s %7s\n";

  if (VAR_3)
    return;

  FUNC_1 ("Mapped address spaces:\n\n");
  FUNC_1 (VAR_4,
     "Start Addr",
     "  End Addr",
     "      Size",
     "    Offset",
     "Flags");

  FUNC_0 (VAR_2, ((void*)0), ((void*)0), VAR_1);
  FUNC_1 ("\n");
}
