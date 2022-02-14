
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {long type_index; } ;
typedef enum debug_var_kind { ____Placeholder_debug_var_kind } debug_var_kind ;
typedef int bfd_vma ;
typedef int bfd_boolean ;







 int VAR_0 ;
 int FUNC_0 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,...) ;
 char* FUNC_4 (struct stab_write_handle*) ;
 int FUNC_5 (struct stab_write_handle*,int,int ,int ,char*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (void *VAR_6, const char *VAR_7, enum debug_var_kind VAR_8,
        bfd_vma VAR_9)
{
  struct stab_write_handle *VAR_10 = (struct stab_write_handle *) VAR_6;
  char *VAR_11, *VAR_12;
  int VAR_13;
  const char *VAR_14;

  VAR_11 = FUNC_4 (VAR_10);

  switch (VAR_8)
    {
    default:
      FUNC_1 ();

    case 132:
      VAR_13 = VAR_1;
      VAR_14 = "G";
      break;

    case 128:
      VAR_13 = VAR_4;
      VAR_14 = "S";
      break;

    case 130:
      VAR_13 = VAR_4;
      VAR_14 = "V";
      break;

    case 131:
      VAR_13 = VAR_2;
      VAR_14 = "";


      if (! FUNC_0 (*VAR_11))
 {
   char *VAR_15;
   long VAR_16;

   VAR_16 = VAR_10->type_index;
   ++VAR_10->type_index;
   VAR_15 = (char *) FUNC_7 (FUNC_6 (VAR_11) + 20);
   FUNC_3 (VAR_15, "%ld=%s", VAR_16, VAR_11);
   FUNC_2 (VAR_11);
   VAR_11 = VAR_15;
 }
      break;

    case 129:
      VAR_13 = VAR_3;
      VAR_14 = "r";
      break;
    }

  VAR_12 = (char *) FUNC_7 (FUNC_6 (VAR_7) + FUNC_6 (VAR_11) + 3);
  FUNC_3 (VAR_12, "%s:%s%s", VAR_7, VAR_14, VAR_11);
  FUNC_2 (VAR_11);

  if (! FUNC_5 (VAR_10, VAR_13, 0, VAR_9, VAR_12))
    return VAR_0;

  FUNC_2 (VAR_12);

  return VAR_5;
}
