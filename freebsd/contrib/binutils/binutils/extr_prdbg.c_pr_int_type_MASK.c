
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int dummy; } ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ FUNC_0 (struct pr_handle*,char*) ;
 int FUNC_1 (char*,char*,char*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_0, unsigned int VAR_1, bfd_boolean VAR_2)
{
  struct pr_handle *VAR_3 = (struct pr_handle *) VAR_0;
  char VAR_4[10];

  FUNC_1 (VAR_4, "%sint%d", VAR_2 ? "u" : "", VAR_1 * 8);
  return FUNC_0 (VAR_3, VAR_4);
}
