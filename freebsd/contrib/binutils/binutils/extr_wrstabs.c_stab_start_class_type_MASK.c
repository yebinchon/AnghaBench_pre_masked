
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {TYPE_1__* type_stack; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {char* index; char* vtable; scalar_t__ definition; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*) ;
 char* FUNC_3 (struct stab_write_handle*) ;
 int FUNC_4 (void*,char const*,unsigned int,scalar_t__,unsigned int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (void *VAR_2, const char *VAR_3, unsigned int VAR_4, bfd_boolean VAR_5, unsigned int VAR_6, bfd_boolean VAR_7, bfd_boolean VAR_8)
{
  struct stab_write_handle *VAR_9 = (struct stab_write_handle *) VAR_2;
  bfd_boolean VAR_10;
  char *VAR_11;

  if (! VAR_7 || VAR_8)
    {
      VAR_10 = VAR_0;
      VAR_11 = ((void*)0);
    }
  else
    {
      VAR_10 = VAR_9->type_stack->definition;
      VAR_11 = FUNC_3 (VAR_9);
    }

  if (! FUNC_4 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))
    return VAR_0;

  if (VAR_7)
    {
      char *VAR_12;

      if (VAR_8)
 {
   FUNC_0 (VAR_9->type_stack->index > 0);
   VAR_12 = (char *) FUNC_6 (20);
   FUNC_2 (VAR_12, "~%%%ld", VAR_9->type_stack->index);
 }
      else
 {
   VAR_12 = (char *) FUNC_6 (FUNC_5 (VAR_11) + 3);
   FUNC_2 (VAR_12, "~%%%s", VAR_11);
   FUNC_1 (VAR_11);
 }

      VAR_9->type_stack->vtable = VAR_12;
    }

  if (VAR_10)
    VAR_9->type_stack->definition = VAR_1;

  return VAR_1;
}
