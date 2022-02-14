
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 int * FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,char*,...) ;
 char* FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_8 (tree VAR_3, tree VAR_4, tree VAR_5)
{
  int VAR_6;
  FILE *VAR_7 = FUNC_4 (VAR_1, &VAR_6);

  if (!VAR_7)
    return;

  if (!(VAR_6 & VAR_0))
    {
      int VAR_8 = FUNC_2 (VAR_3) != VAR_4;

      FUNC_6 (VAR_7, "%s for %s",
        VAR_8 ? "Construction vtable" : "Vtable",
        FUNC_7 (FUNC_0 (VAR_4), VAR_2));
      if (VAR_8)
 {
   if (!FUNC_1 (VAR_4))
     FUNC_6 (VAR_7, " (0x%lx instance)", (unsigned long)VAR_4);
   FUNC_6 (VAR_7, " in %s", FUNC_7 (VAR_3, VAR_2));
 }
      FUNC_6 (VAR_7, "\n");
      FUNC_3 (VAR_7, VAR_5);
      FUNC_6 (VAR_7, "\n");
    }

  FUNC_5 (VAR_1, VAR_7);
}
