
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {int dummy; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char const*,double) ;
 int FUNC_2 (struct stab_write_handle*,int ,int ,int ,char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (void *VAR_3, const char *VAR_4, double VAR_5)
{
  struct stab_write_handle *VAR_6 = (struct stab_write_handle *) VAR_3;
  char *VAR_7;

  VAR_7 = (char *) FUNC_4 (FUNC_3 (VAR_4) + 20);
  FUNC_1 (VAR_7, "%s:c=f%g", VAR_4, VAR_5);

  if (! FUNC_2 (VAR_6, VAR_1, 0, 0, VAR_7))
    return VAR_0;

  FUNC_0 (VAR_7);

  return VAR_2;
}
