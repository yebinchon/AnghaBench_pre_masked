
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int FILE ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (char*,int ) ;

void
FUNC_4 (FILE *VAR_0, tree VAR_1)
{
  if (FUNC_3 ("init", FUNC_1 (VAR_1)))
    {
      FUNC_2 (VAR_0, "\t.pushsection\t\".init\"\n");
      FUNC_0 (VAR_0, VAR_1);
      FUNC_2 (VAR_0, "\t.popsection\n");
    }

  if (FUNC_3 ("fini", FUNC_1 (VAR_1)))
    {
      FUNC_2 (VAR_0, "\t.pushsection\t\".fini\"\n");
      FUNC_0 (VAR_0, VAR_1);
      FUNC_2 (VAR_0, "\t.popsection\n");
    }
}
