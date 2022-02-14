
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_sfile {char* name; struct coff_sfile* next; int scope; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (struct coff_sfile *VAR_0)
{
  FUNC_3 (1);
  FUNC_2 ("List of source files");
  FUNC_1 ();

  while (VAR_0)
    {
      FUNC_3 (0);
      FUNC_2 ("Source file %s", VAR_0->name);
      FUNC_1 ();
      FUNC_0 (VAR_0->scope);
      VAR_0 = VAR_0->next;
    }
  FUNC_3 (-1);
}
