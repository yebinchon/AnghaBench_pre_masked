
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
 int FUNC_1 (char*,char*,char const*,char*) ;
 char* FUNC_2 (struct stab_write_handle*) ;
 int FUNC_3 (struct stab_write_handle*,int ,int ,int ,char*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_3, const char *VAR_4)
{
  struct stab_write_handle *VAR_5 = (struct stab_write_handle *) VAR_3;
  char *VAR_6, *VAR_7;

  VAR_6 = FUNC_2 (VAR_5);

  VAR_7 = (char *) FUNC_5 (FUNC_4 (VAR_4) + FUNC_4 (VAR_6) + 3);

  FUNC_1 (VAR_7, "%s:T%s", VAR_4, VAR_6);
  FUNC_0 (VAR_6);

  if (! FUNC_3 (VAR_5, VAR_1, 0, 0, VAR_7))
    return VAR_0;

  FUNC_0 (VAR_7);

  return VAR_2;
}
