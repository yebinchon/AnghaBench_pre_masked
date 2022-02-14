
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {TYPE_1__* type_stack; } ;
typedef scalar_t__ bfd_signed_vma ;
typedef int bfd_boolean ;
struct TYPE_2__ {unsigned int size; int definition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*,long,long) ;
 char* FUNC_2 (struct stab_write_handle*) ;
 int FUNC_3 (struct stab_write_handle*,char*,int ,int ,unsigned int) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_2, bfd_signed_vma VAR_3, bfd_signed_vma VAR_4)
{
  struct stab_write_handle *VAR_5 = (struct stab_write_handle *) VAR_2;
  bfd_boolean VAR_6;
  unsigned int VAR_7;
  char *VAR_8, *VAR_9;

  VAR_6 = VAR_5->type_stack->definition;
  VAR_7 = VAR_5->type_stack->size;

  VAR_8 = FUNC_2 (VAR_5);
  VAR_9 = (char *) FUNC_5 (FUNC_4 (VAR_8) + 100);
  FUNC_1 (VAR_9, "r%s;%ld;%ld;", VAR_8, (long) VAR_3, (long) VAR_4);
  FUNC_0 (VAR_8);

  if (! FUNC_3 (VAR_5, VAR_9, 0, VAR_6, VAR_7))
    return VAR_0;

  FUNC_0 (VAR_9);

  return VAR_1;
}
