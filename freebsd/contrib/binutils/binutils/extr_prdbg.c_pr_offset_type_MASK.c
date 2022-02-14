
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int dummy; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pr_handle*,char*) ;
 char* FUNC_1 (struct pr_handle*) ;
 scalar_t__ FUNC_2 (struct pr_handle*,char*) ;
 scalar_t__ FUNC_3 (struct pr_handle*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (void *VAR_1)
{
  struct pr_handle *VAR_2 = (struct pr_handle *) VAR_1;
  char *VAR_3;

  if (! FUNC_3 (VAR_2, ""))
    return VAR_0;

  VAR_3 = FUNC_1 (VAR_2);
  if (VAR_3 == ((void*)0))
    return VAR_0;

  return (FUNC_3 (VAR_2, "")
   && FUNC_2 (VAR_2, " ")
   && FUNC_2 (VAR_2, VAR_3)
   && FUNC_0 (VAR_2, "::|"));
}
