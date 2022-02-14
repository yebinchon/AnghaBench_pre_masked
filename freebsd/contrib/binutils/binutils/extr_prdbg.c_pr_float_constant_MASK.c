
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_handle {int f; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,double) ;
 int FUNC_1 (struct pr_handle*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_1, const char *VAR_2, double VAR_3)
{
  struct pr_handle *VAR_4 = (struct pr_handle *) VAR_1;

  FUNC_1 (VAR_4);
  FUNC_0 (VAR_4->f, "const double %s = %g;\n", VAR_2, VAR_3);
  return VAR_0;
}
