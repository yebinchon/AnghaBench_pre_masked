
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {TYPE_1__* type_stack; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {char* fields; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,char,...) ;
 long FUNC_1 (struct stab_write_handle*,char const*,unsigned int,int ,unsigned int*) ;
 int FUNC_2 (struct stab_write_handle*,char*,long,scalar_t__,unsigned int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (void *VAR_3, const char *VAR_4, unsigned int VAR_5,
   bfd_boolean VAR_6, unsigned int VAR_7)
{
  struct stab_write_handle *VAR_8 = (struct stab_write_handle *) VAR_3;
  long VAR_9;
  bfd_boolean VAR_10;
  char *VAR_11;

  VAR_11 = (char *) FUNC_4 (40);

  if (VAR_5 == 0)
    {
      VAR_9 = 0;
      *VAR_11 = '\0';
      VAR_10 = VAR_1;
    }
  else
    {
      VAR_9 = FUNC_1 (VAR_8, VAR_4, VAR_5, VAR_0,
         &VAR_7);
      if (VAR_9 < 0)
 return VAR_1;
      FUNC_0 (VAR_11, "%ld=", VAR_9);
      VAR_10 = VAR_2;
    }

  FUNC_0 (VAR_11 + FUNC_3 (VAR_11), "%c%u",
    VAR_6 ? 's' : 'u',
    VAR_7);

  if (! FUNC_2 (VAR_8, VAR_11, VAR_9, VAR_10, VAR_7))
    return VAR_1;

  VAR_8->type_stack->fields = (char *) FUNC_4 (1);
  VAR_8->type_stack->fields[0] = '\0';

  return VAR_2;
}
