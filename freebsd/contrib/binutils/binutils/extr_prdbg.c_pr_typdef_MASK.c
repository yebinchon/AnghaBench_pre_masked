
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int f; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pr_handle*) ;
 char* FUNC_3 (struct pr_handle*) ;
 int FUNC_4 (struct pr_handle*,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (void *VAR_2, const char *VAR_3)
{
  struct pr_handle *VAR_4 = (struct pr_handle *) VAR_2;
  char *VAR_5;

  if (! FUNC_4 (VAR_4, VAR_3))
    return VAR_0;

  VAR_5 = FUNC_3 (VAR_4);
  if (VAR_5 == ((void*)0))
    return VAR_0;

  FUNC_2 (VAR_4);
  FUNC_0 (VAR_4->f, "typedef %s;\n", VAR_5);

  FUNC_1 (VAR_5);

  return VAR_1;
}
