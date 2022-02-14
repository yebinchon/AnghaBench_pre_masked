
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ada_val_print_args {int pretty; int recurse; int deref_ref; int format; int stream; int address; int embedded_offset; int valaddr0; int type; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1 (void * VAR_0)
{
  struct ada_val_print_args *VAR_1 = (struct ada_val_print_args *) VAR_0;
  return FUNC_0 (VAR_1->type, VAR_1->valaddr0,
     VAR_1->embedded_offset, VAR_1->address,
     VAR_1->stream, VAR_1->format, VAR_1->deref_ref,
     VAR_1->recurse, VAR_1->pretty);
}
