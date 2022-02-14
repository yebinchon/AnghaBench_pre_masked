
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_option_table {char* option; char* help; } ;
struct arm_long_option_table {char* option; char* help; } ;
typedef int FILE ;


 char* FUNC_0 (char*) ;
 struct arm_long_option_table* VAR_0 ;
 struct arm_option_table* VAR_1 ;
 int FUNC_1 (int *,char*,...) ;

void
FUNC_2 (FILE * VAR_2)
{
  struct arm_option_table *VAR_3;
  struct arm_long_option_table *VAR_4;

  FUNC_1 (VAR_2, FUNC_0(" ARM-specific assembler options:\n"));

  for (VAR_3 = VAR_1; VAR_3->option != ((void*)0); VAR_3++)
    if (VAR_3->help != ((void*)0))
      FUNC_1 (VAR_2, "  -%-23s%s\n", VAR_3->option, FUNC_0(VAR_3->help));

  for (VAR_4 = VAR_0; VAR_4->option != ((void*)0); VAR_4++)
    if (VAR_4->help != ((void*)0))
      FUNC_1 (VAR_2, "  -%s%s\n", VAR_4->option, FUNC_0(VAR_4->help));
}
