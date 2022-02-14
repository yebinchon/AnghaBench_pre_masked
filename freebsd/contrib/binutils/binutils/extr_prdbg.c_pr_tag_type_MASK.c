
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int dummy; } ;
typedef enum debug_type_kind { ____Placeholder_debug_type_kind } debug_type_kind ;
typedef int bfd_boolean ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pr_handle*,char const*) ;
 int FUNC_2 (struct pr_handle*,char const*) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (void *VAR_2, const char *VAR_3, unsigned int VAR_4,
      enum debug_type_kind VAR_5)
{
  struct pr_handle *VAR_6 = (struct pr_handle *) VAR_2;
  const char *VAR_7, *VAR_8;
  char VAR_9[20];

  switch (VAR_5)
    {
    case 130:
      VAR_7 = "struct ";
      break;
    case 129:
      VAR_7 = "union ";
      break;
    case 131:
      VAR_7 = "enum ";
      break;
    case 132:
      VAR_7 = "class ";
      break;
    case 128:
      VAR_7 = "union class ";
      break;
    default:
      FUNC_0 ();
      return VAR_0;
    }

  if (! FUNC_2 (VAR_6, VAR_7))
    return VAR_0;
  if (VAR_3 != ((void*)0))
    VAR_8 = VAR_3;
  else
    {
      FUNC_3 (VAR_9, "%%anon%u", VAR_4);
      VAR_8 = VAR_9;
    }

  if (! FUNC_1 (VAR_6, VAR_8))
    return VAR_0;
  if (VAR_3 != ((void*)0) && VAR_5 != 131)
    {
      FUNC_3 (VAR_9, " /* id %u */", VAR_4);
      if (! FUNC_1 (VAR_6, VAR_9))
 return VAR_0;
    }

  return VAR_1;
}
