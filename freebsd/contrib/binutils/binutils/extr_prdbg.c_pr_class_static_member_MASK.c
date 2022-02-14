
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int dummy; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (struct pr_handle*,char const*) ;
 int FUNC_1 (struct pr_handle*) ;
 char* FUNC_2 (struct pr_handle*) ;
 int FUNC_3 (struct pr_handle*,int) ;
 int FUNC_4 (struct pr_handle*,char*) ;
 int FUNC_5 (struct pr_handle*,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_1, const char *VAR_2, const char *VAR_3,
   enum debug_visibility VAR_4)
{
  struct pr_handle *VAR_5 = (struct pr_handle *) VAR_1;
  char *VAR_6;

  if (! FUNC_5 (VAR_5, VAR_2))
    return VAR_0;

  if (! FUNC_4 (VAR_5, "static ")
      || ! FUNC_0 (VAR_5, "; /* ")
      || ! FUNC_0 (VAR_5, VAR_3)
      || ! FUNC_0 (VAR_5, " */\n")
      || ! FUNC_1 (VAR_5))
    return VAR_0;

  VAR_6 = FUNC_2 (VAR_5);
  if (VAR_6 == ((void*)0))
    return VAR_0;

  if (! FUNC_3 (VAR_5, VAR_4))
    return VAR_0;

  return FUNC_0 (VAR_5, VAR_6);
}
