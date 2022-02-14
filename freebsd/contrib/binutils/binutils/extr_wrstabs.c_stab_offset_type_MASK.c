
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {TYPE_1__* type_stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {int definition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*,char*) ;
 char* FUNC_2 (struct stab_write_handle*) ;
 int FUNC_3 (struct stab_write_handle*,char*,int ,int,int ) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_2)
{
  struct stab_write_handle *VAR_3 = (struct stab_write_handle *) VAR_2;
  bfd_boolean VAR_4;
  char *VAR_5, *VAR_6, *VAR_7;

  VAR_4 = VAR_3->type_stack->definition;
  VAR_5 = FUNC_2 (VAR_3);

  VAR_4 = VAR_4 || VAR_3->type_stack->definition;
  VAR_6 = FUNC_2 (VAR_3);

  VAR_7 = (char *) FUNC_5 (FUNC_4 (VAR_5) + FUNC_4 (VAR_6) + 3);
  FUNC_1 (VAR_7, "@%s,%s", VAR_6, VAR_5);
  FUNC_0 (VAR_6);
  FUNC_0 (VAR_5);

  if (! FUNC_3 (VAR_3, VAR_7, 0, VAR_4, 0))
    return VAR_0;

  FUNC_0 (VAR_7);

  return VAR_1;
}
