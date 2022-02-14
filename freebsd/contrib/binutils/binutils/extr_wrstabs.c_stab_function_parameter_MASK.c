
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {int dummy; } ;
typedef enum debug_parm_kind { ____Placeholder_debug_parm_kind } debug_parm_kind ;
typedef int bfd_vma ;
typedef int bfd_boolean ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char const*,char,char*) ;
 char* FUNC_3 (struct stab_write_handle*) ;
 int FUNC_4 (struct stab_write_handle*,int,int ,int ,char*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (void *VAR_4, const char *VAR_5, enum debug_parm_kind VAR_6, bfd_vma VAR_7)
{
  struct stab_write_handle *VAR_8 = (struct stab_write_handle *) VAR_4;
  char *VAR_9, *VAR_10;
  int VAR_11;
  char VAR_12;

  VAR_9 = FUNC_3 (VAR_8);

  switch (VAR_6)
    {
    default:
      FUNC_0 ();

    case 128:
      VAR_11 = VAR_1;
      VAR_12 = 'p';
      break;

    case 129:
      VAR_11 = VAR_2;
      VAR_12 = 'P';
      break;

    case 131:
      VAR_11 = VAR_1;
      VAR_12 = 'v';
      break;

    case 130:
      VAR_11 = VAR_2;
      VAR_12 = 'a';
      break;
    }

  VAR_10 = (char *) FUNC_6 (FUNC_5 (VAR_5) + FUNC_5 (VAR_9) + 3);
  FUNC_2 (VAR_10, "%s:%c%s", VAR_5, VAR_12, VAR_9);
  FUNC_1 (VAR_9);

  if (! FUNC_4 (VAR_8, VAR_11, 0, VAR_7, VAR_10))
    return VAR_0;

  FUNC_1 (VAR_10);

  return VAR_3;
}
