
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int parameter; int f; } ;
typedef enum debug_parm_kind { ____Placeholder_debug_parm_kind } debug_parm_kind ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct pr_handle*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (struct pr_handle*,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_5, const char *VAR_6,
         enum debug_parm_kind VAR_7, bfd_vma VAR_8)
{
  struct pr_handle *VAR_9 = (struct pr_handle *) VAR_5;
  char *VAR_10;
  char VAR_11[20];

  if (VAR_7 == VAR_0
      || VAR_7 == VAR_1)
    {
      if (! FUNC_3 (VAR_5))
 return VAR_3;
    }

  if (! FUNC_5 (VAR_9, VAR_6))
    return VAR_3;

  VAR_10 = FUNC_2 (VAR_9);
  if (VAR_10 == ((void*)0))
    return VAR_3;

  if (VAR_9->parameter != 1)
    FUNC_0 (VAR_9->f, ", ");

  if (VAR_7 == VAR_2 || VAR_7 == VAR_1)
    FUNC_0 (VAR_9->f, "register ");

  FUNC_4 (VAR_8, VAR_11, VAR_4, VAR_4);
  FUNC_0 (VAR_9->f, "%s /* %s */", VAR_10, VAR_11);

  FUNC_1 (VAR_10);

  ++VAR_9->parameter;

  return VAR_4;
}
