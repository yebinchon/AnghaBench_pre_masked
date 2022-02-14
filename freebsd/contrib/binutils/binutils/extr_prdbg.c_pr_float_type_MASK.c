
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int dummy; } ;
typedef int bfd_boolean ;


 int FUNC_0 (struct pr_handle*,char*) ;
 int FUNC_1 (char*,char*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_0, unsigned int VAR_1)
{
  struct pr_handle *VAR_2 = (struct pr_handle *) VAR_0;
  char VAR_3[10];

  if (VAR_1 == 4)
    return FUNC_0 (VAR_2, "float");
  else if (VAR_1 == 8)
    return FUNC_0 (VAR_2, "double");

  FUNC_1 (VAR_3, "float%d", VAR_1 * 8);
  return FUNC_0 (VAR_2, VAR_3);
}
