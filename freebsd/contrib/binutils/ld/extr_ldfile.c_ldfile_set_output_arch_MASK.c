
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;
struct TYPE_3__ {int arch; int printable_name; int mach; } ;
typedef TYPE_1__ bfd_arch_info_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_3 (const char *VAR_4, enum bfd_architecture VAR_5)
{
  const bfd_arch_info_type *VAR_6 = FUNC_1 (VAR_4);

  if (VAR_6)
    {
      VAR_1 = VAR_6->arch;
      VAR_2 = VAR_6->mach;
      VAR_3 = VAR_6->printable_name;
    }
  else if (VAR_5 != VAR_0)
    VAR_1 = VAR_5;
  else
    FUNC_2 (FUNC_0("%P%F: cannot represent machine `%s'\n"), VAR_4);
}
