
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int dummy; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pr_handle*,char*) ;
 int FUNC_1 (struct pr_handle*) ;
 char* FUNC_2 (struct pr_handle*) ;
 int FUNC_3 (struct pr_handle*,int) ;
 int FUNC_4 (scalar_t__,char*,int ,int ) ;
 int FUNC_5 (struct pr_handle*,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_2, const char *VAR_3, bfd_vma VAR_4, bfd_vma VAR_5,
   enum debug_visibility VAR_6)
{
  struct pr_handle *VAR_7 = (struct pr_handle *) VAR_2;
  char VAR_8[20];
  char *VAR_9;

  if (! FUNC_5 (VAR_7, VAR_3))
    return VAR_0;

  if (! FUNC_0 (VAR_7, "; /* "))
    return VAR_0;

  if (VAR_5 != 0)
    {
      FUNC_4 (VAR_5, VAR_8, VAR_1, VAR_0);
      if (! FUNC_0 (VAR_7, "bitsize ")
   || ! FUNC_0 (VAR_7, VAR_8)
   || ! FUNC_0 (VAR_7, ", "))
 return VAR_0;
    }

  FUNC_4 (VAR_4, VAR_8, VAR_1, VAR_0);
  if (! FUNC_0 (VAR_7, "bitpos ")
      || ! FUNC_0 (VAR_7, VAR_8)
      || ! FUNC_0 (VAR_7, " */\n")
      || ! FUNC_1 (VAR_7))
    return VAR_0;

  VAR_9 = FUNC_2 (VAR_7);
  if (VAR_9 == ((void*)0))
    return VAR_0;

  if (! FUNC_3 (VAR_7, VAR_6))
    return VAR_0;

  return FUNC_0 (VAR_7, VAR_9);
}
