
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct ada_val_print_args {char* valaddr0; int embedded_offset; int format; int deref_ref; int recurse; int pretty; struct ui_file* stream; int address; struct type* type; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ada_val_print_args*,int *,int ) ;

int
FUNC_1 (struct type *VAR_2, char *VAR_3, int VAR_4,
        CORE_ADDR VAR_5, struct ui_file *VAR_6, int VAR_7,
        int VAR_8, int VAR_9, enum val_prettyprint VAR_10)
{
  struct ada_val_print_args VAR_11;
  VAR_11.type = VAR_2;
  VAR_11.valaddr0 = VAR_3;
  VAR_11.embedded_offset = VAR_4;
  VAR_11.address = VAR_5;
  VAR_11.stream = VAR_6;
  VAR_11.format = VAR_7;
  VAR_11.deref_ref = VAR_8;
  VAR_11.recurse = VAR_9;
  VAR_11.pretty = VAR_10;

  return FUNC_0 (VAR_1, &VAR_11, ((void*)0), VAR_0);
}
