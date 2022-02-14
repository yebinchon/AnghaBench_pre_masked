
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int dummy; } ;
typedef scalar_t__ bfd_signed_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (struct pr_handle*,char const*) ;
 int FUNC_1 (scalar_t__,char*,int ,int ) ;
 int FUNC_2 (struct pr_handle*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_1, const char *VAR_2, const char **VAR_3,
       bfd_signed_vma *VAR_4)
{
  struct pr_handle *VAR_5 = (struct pr_handle *) VAR_1;
  unsigned int VAR_6;
  bfd_signed_vma VAR_7;

  if (! FUNC_2 (VAR_5, "enum "))
    return VAR_0;
  if (VAR_2 != ((void*)0))
    {
      if (! FUNC_0 (VAR_5, VAR_2)
   || ! FUNC_0 (VAR_5, " "))
 return VAR_0;
    }
  if (! FUNC_0 (VAR_5, "{ "))
    return VAR_0;

  if (VAR_3 == ((void*)0))
    {
      if (! FUNC_0 (VAR_5, "/* undefined */"))
 return VAR_0;
    }
  else
    {
      VAR_7 = 0;
      for (VAR_6 = 0; VAR_3[VAR_6] != ((void*)0); VAR_6++)
 {
   if (VAR_6 > 0)
     {
       if (! FUNC_0 (VAR_5, ", "))
  return VAR_0;
     }

   if (! FUNC_0 (VAR_5, VAR_3[VAR_6]))
     return VAR_0;

   if (VAR_4[VAR_6] != VAR_7)
     {
       char VAR_8[20];

       FUNC_1 (VAR_4[VAR_6], VAR_8, VAR_0, VAR_0);
       if (! FUNC_0 (VAR_5, " = ")
    || ! FUNC_0 (VAR_5, VAR_8))
  return VAR_0;
       VAR_7 = VAR_4[VAR_6];
     }

   ++VAR_7;
 }
    }

  return FUNC_0 (VAR_5, " }");
}
