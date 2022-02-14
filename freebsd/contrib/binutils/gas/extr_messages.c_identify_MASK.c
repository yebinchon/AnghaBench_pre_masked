
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char**,unsigned int*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3 (char *VAR_1)
{
  static int VAR_2;

  if (VAR_2)
    return;
  VAR_2++;

  if (!VAR_1)
    {
      unsigned int VAR_3;
      FUNC_1 (&VAR_1, &VAR_3);
    }

  if (VAR_1)
    FUNC_2 (VAR_0, "%s: ", VAR_1);
  FUNC_2 (VAR_0, "%s", FUNC_0("Assembler messages:\n"));
}
