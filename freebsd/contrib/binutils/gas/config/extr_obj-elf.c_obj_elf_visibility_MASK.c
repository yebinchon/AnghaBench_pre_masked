
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_5__ {int st_other; } ;
struct TYPE_6__ {TYPE_1__ internal_elf_sym; } ;
typedef TYPE_2__ elf_symbol_type ;
typedef int asymbol ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 char* VAR_0 ;
 int * FUNC_6 (char*) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8 (int VAR_1)
{
  char *VAR_2;
  int VAR_3;
  symbolS *VAR_4;
  asymbol *VAR_5;
  elf_symbol_type *VAR_6;

  do
    {
      VAR_2 = VAR_0;
      VAR_3 = FUNC_5 ();
      VAR_4 = FUNC_6 (VAR_2);
      *VAR_0 = VAR_3;

      FUNC_0 ();

      VAR_5 = FUNC_7 (VAR_4);
      VAR_6 = FUNC_4 (FUNC_2 (VAR_5), VAR_5);

      FUNC_1 (VAR_6);

      VAR_6->internal_elf_sym.st_other &= ~3;
      VAR_6->internal_elf_sym.st_other |= VAR_1;

      if (VAR_3 == ',')
 {
   VAR_0 ++;

   FUNC_0 ();

   if (*VAR_0 == '\n')
     VAR_3 = '\n';
 }
    }
  while (VAR_3 == ',');

  FUNC_3 ();
}
