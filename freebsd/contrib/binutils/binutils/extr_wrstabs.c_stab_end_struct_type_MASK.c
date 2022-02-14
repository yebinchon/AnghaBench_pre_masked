
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {TYPE_1__* type_stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {char* fields; long index; unsigned int size; int definition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 char* FUNC_3 (struct stab_write_handle*) ;
 int FUNC_4 (struct stab_write_handle*,char*,long,int ,unsigned int) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (void *VAR_2)
{
  struct stab_write_handle *VAR_3 = (struct stab_write_handle *) VAR_2;
  bfd_boolean VAR_4;
  long VAR_5;
  unsigned int VAR_6;
  char *VAR_7, *VAR_8, *VAR_9;

  FUNC_0 (VAR_3->type_stack != ((void*)0) && VAR_3->type_stack->fields != ((void*)0));

  VAR_4 = VAR_3->type_stack->definition;
  VAR_5 = VAR_3->type_stack->index;
  VAR_6 = VAR_3->type_stack->size;
  VAR_7 = VAR_3->type_stack->fields;
  VAR_8 = FUNC_3 (VAR_3);

  VAR_9 = (char *) FUNC_6 (FUNC_5 (VAR_8) + FUNC_5 (VAR_7) + 2);
  FUNC_2 (VAR_9, "%s%s;", VAR_8, VAR_7);
  FUNC_1 (VAR_8);
  FUNC_1 (VAR_7);

  if (! FUNC_4 (VAR_3, VAR_9, VAR_5, VAR_4, VAR_6))
    return VAR_0;

  FUNC_1 (VAR_9);

  return VAR_1;
}
