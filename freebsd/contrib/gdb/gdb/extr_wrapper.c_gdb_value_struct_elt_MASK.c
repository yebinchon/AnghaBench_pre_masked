
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_out {int dummy; } ;
struct captured_value_struct_elt_args {char* name; int* static_memfuncp; char* err; struct value** result_ptr; struct value** args; struct value** argp; } ;
typedef enum gdb_rc { ____Placeholder_gdb_rc } gdb_rc ;


 int VAR_0 ;
 int FUNC_0 (struct ui_out*,int ,struct captured_value_struct_elt_args*,int *,int ) ;
 int VAR_1 ;

enum gdb_rc
FUNC_1 (struct ui_out *VAR_2, struct value **VAR_3, struct value **VAR_4,
        struct value **VAR_5, char *VAR_6, int *VAR_7,
        char *VAR_8)
{
  struct captured_value_struct_elt_args VAR_9;
  VAR_9.argp = VAR_4;
  VAR_9.args = VAR_5;
  VAR_9.name = VAR_6;
  VAR_9.static_memfuncp = VAR_7;
  VAR_9.err = VAR_8;
  VAR_9.result_ptr = VAR_3;
  return FUNC_0 (VAR_2, VAR_1, &VAR_9,
      ((void*)0), VAR_0);
}
