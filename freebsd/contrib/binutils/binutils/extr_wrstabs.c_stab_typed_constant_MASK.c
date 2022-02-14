
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char const*,char*,long) ;
 char* FUNC_2 (struct stab_write_handle*) ;
 int FUNC_3 (struct stab_write_handle*,int ,int ,int ,char*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_3, const char *VAR_4, bfd_vma VAR_5)
{
  struct stab_write_handle *VAR_6 = (struct stab_write_handle *) VAR_3;
  char *VAR_7, *VAR_8;

  VAR_7 = FUNC_2 (VAR_6);

  VAR_8 = (char *) FUNC_5 (FUNC_4 (VAR_4) + FUNC_4 (VAR_7) + 20);
  FUNC_1 (VAR_8, "%s:c=e%s,%ld", VAR_4, VAR_7, (long) VAR_5);
  FUNC_0 (VAR_7);

  if (! FUNC_3 (VAR_6, VAR_1, 0, 0, VAR_8))
    return VAR_0;

  FUNC_0 (VAR_8);

  return VAR_2;
}
