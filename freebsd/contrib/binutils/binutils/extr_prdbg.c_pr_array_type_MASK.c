
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int dummy; } ;
typedef int bfd_signed_vma ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pr_handle*,char*) ;
 char* FUNC_1 (struct pr_handle*) ;
 int FUNC_2 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (char*,char*,...) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (struct pr_handle*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_2, bfd_signed_vma VAR_3, bfd_signed_vma VAR_4,
        bfd_boolean VAR_5)
{
  struct pr_handle *VAR_6 = (struct pr_handle *) VAR_2;
  char *VAR_7;
  char VAR_8[20], VAR_9[20], VAR_10[50];

  VAR_7 = FUNC_1 (VAR_6);
  if (VAR_7 == ((void*)0))
    return VAR_0;

  if (VAR_3 == 0)
    {
      if (VAR_4 == -1)
 FUNC_3 (VAR_10, "|[]");
      else
 {
   FUNC_2 (VAR_4 + 1, VAR_9, VAR_0, VAR_0);
   FUNC_3 (VAR_10, "|[%s]", VAR_9);
 }
    }
  else
    {
      FUNC_2 (VAR_3, VAR_8, VAR_0, VAR_0);
      FUNC_2 (VAR_4, VAR_9, VAR_0, VAR_0);
      FUNC_3 (VAR_10, "|[%s:%s]", VAR_8, VAR_9);
    }

  if (! FUNC_5 (VAR_6, VAR_10))
    return VAR_0;

  if (FUNC_4 (VAR_7, "int") != 0)
    {
      if (! FUNC_0 (VAR_6, ":")
   || ! FUNC_0 (VAR_6, VAR_7))
 return VAR_0;
    }

  if (VAR_5)
    {
      if (! FUNC_0 (VAR_6, " /* string */"))
 return VAR_0;
    }

  return VAR_1;
}
