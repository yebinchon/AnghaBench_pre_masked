
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {long type_index; TYPE_1__* type_stack; } ;
typedef scalar_t__ bfd_signed_vma ;
typedef int bfd_boolean ;
struct TYPE_2__ {int definition; unsigned int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,...) ;
 char* FUNC_2 (struct stab_write_handle*) ;
 int FUNC_3 (struct stab_write_handle*,char*,long,int,unsigned int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_2, bfd_signed_vma VAR_3, bfd_signed_vma VAR_4,
   bfd_boolean VAR_5)
{
  struct stab_write_handle *VAR_6 = (struct stab_write_handle *) VAR_2;
  bfd_boolean VAR_7;
  unsigned int VAR_8;
  char *VAR_9, *VAR_10, *VAR_11;
  long VAR_12;
  unsigned int VAR_13;

  VAR_7 = VAR_6->type_stack->definition;
  VAR_9 = FUNC_2 (VAR_6);

  VAR_7 = VAR_7 || VAR_6->type_stack->definition;
  VAR_8 = VAR_6->type_stack->size;
  VAR_10 = FUNC_2 (VAR_6);

  VAR_11 = (char *) FUNC_5 (FUNC_4 (VAR_9) + FUNC_4 (VAR_10) + 100);

  if (! VAR_5)
    {
      VAR_12 = 0;
      *VAR_11 = '\0';
    }
  else
    {


      VAR_12 = VAR_6->type_index;
      ++VAR_6->type_index;
      VAR_7 = VAR_1;
      FUNC_1 (VAR_11, "%ld=@S;", VAR_12);
    }

  FUNC_1 (VAR_11 + FUNC_4 (VAR_11), "ar%s;%ld;%ld;%s",
    VAR_9, (long) VAR_3, (long) VAR_4, VAR_10);
  FUNC_0 (VAR_9);
  FUNC_0 (VAR_10);

  if (VAR_4 < VAR_3)
    VAR_13 = 0;
  else
    VAR_13 = VAR_8 * ((VAR_4 - VAR_3) + 1);
  if (! FUNC_3 (VAR_6, VAR_11, VAR_12, VAR_7, VAR_13))
    return VAR_0;

  FUNC_0 (VAR_11);

  return VAR_1;
}
