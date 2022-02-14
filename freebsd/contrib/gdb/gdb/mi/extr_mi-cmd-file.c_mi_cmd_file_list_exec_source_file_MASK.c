
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab_and_line {TYPE_1__* symtab; int line; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;
struct TYPE_2__ {int * fullname; int * filename; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct symtab_and_line FUNC_1 () ;
 int FUNC_2 (char*,int,char**) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,char*,int *) ;
 int VAR_1 ;

enum mi_cmd_result
FUNC_7(char *VAR_2, char **VAR_3, int VAR_4)
{
  struct symtab_and_line VAR_5;
  int VAR_6 = 0;
  char *VAR_7;

  if ( !FUNC_2("mi_cmd_file_list_exec_source_file", VAR_4, VAR_3) )
    FUNC_0 ("mi_cmd_file_list_exec_source_file: Usage: No args");



  FUNC_3();
  VAR_5 = FUNC_1();




  if (!VAR_5.symtab)
    FUNC_0 ("mi_cmd_file_list_exec_source_file: No symtab");


  if (VAR_5.symtab->fullname == ((void*)0))
    FUNC_4 (VAR_5.symtab);


  if (VAR_5.symtab->fullname == ((void*)0))
    FUNC_0 ("mi_cmd_file_list_exec_source_file: File not found");


  FUNC_5 (VAR_1, "line", VAR_5.line);
  FUNC_6 (VAR_1, "file", VAR_5.symtab->filename);
  FUNC_6 (VAR_1, "fullname", VAR_5.symtab->fullname);

  return VAR_0;
}
