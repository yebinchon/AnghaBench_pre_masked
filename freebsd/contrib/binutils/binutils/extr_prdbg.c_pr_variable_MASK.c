
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int f; } ;
typedef enum debug_var_kind { ____Placeholder_debug_var_kind } debug_var_kind ;
typedef int bfd_vma ;
typedef int bfd_boolean ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pr_handle*) ;
 char* FUNC_3 (struct pr_handle*) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (struct pr_handle*,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_2, const char *VAR_3, enum debug_var_kind VAR_4,
      bfd_vma VAR_5)
{
  struct pr_handle *VAR_6 = (struct pr_handle *) VAR_2;
  char *VAR_7;
  char VAR_8[20];

  if (! FUNC_5 (VAR_6, VAR_3))
    return VAR_0;

  VAR_7 = FUNC_3 (VAR_6);
  if (VAR_7 == ((void*)0))
    return VAR_0;

  FUNC_2 (VAR_6);
  switch (VAR_4)
    {
    case 128:
    case 130:
      FUNC_0 (VAR_6->f, "static ");
      break;
    case 129:
      FUNC_0 (VAR_6->f, "register ");
      break;
    default:
      break;
    }
  FUNC_4 (VAR_5, VAR_8, VAR_1, VAR_1);
  FUNC_0 (VAR_6->f, "%s /* %s */;\n", VAR_7, VAR_8);

  FUNC_1 (VAR_7);

  return VAR_1;
}
