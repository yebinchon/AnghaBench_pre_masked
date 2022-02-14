
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int parameter; int f; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct pr_handle*) ;
 char* FUNC_2 (struct pr_handle*) ;
 int FUNC_3 (struct pr_handle*,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (void *VAR_2, const char *VAR_3, bfd_boolean VAR_4)
{
  struct pr_handle *VAR_5 = (struct pr_handle *) VAR_2;
  char *VAR_6;

  if (! FUNC_3 (VAR_5, VAR_3))
    return VAR_0;

  VAR_6 = FUNC_2 (VAR_5);
  if (VAR_6 == ((void*)0))
    return VAR_0;

  FUNC_1 (VAR_5);
  if (! VAR_4)
    FUNC_0 (VAR_5->f, "static ");
  FUNC_0 (VAR_5->f, "%s (", VAR_6);

  VAR_5->parameter = 1;

  return VAR_1;
}
