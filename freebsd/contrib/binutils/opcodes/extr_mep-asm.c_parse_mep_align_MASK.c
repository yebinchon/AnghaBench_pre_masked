
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cgen_operand_type { ____Placeholder_cgen_operand_type } cgen_operand_type ;
typedef int CGEN_CPU_DESC ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,char const**,int,long*) ;
 char* FUNC_2 (int ,char const**,int,unsigned long*) ;

const char *
FUNC_3 (CGEN_CPU_DESC VAR_0, const char ** VAR_1,
   enum cgen_operand_type VAR_2, long *VAR_3)
{
  long VAR_4 = 0;
  const char *VAR_5;

  switch (VAR_2)
    {
    case 132:
    case 135:
    case 134:
    case 133:
    case 139:
    case 138:
    case 137:
      VAR_5 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3);
      break;
    case 136:
    case 131:
    case 130:
    case 129:
    case 128:
    case 140:
      VAR_5 = FUNC_2 (VAR_0, VAR_1, VAR_2, (unsigned long *) VAR_3);
      break;
    default:
      FUNC_0();
    }
  if (VAR_5)
    return VAR_5;
  switch (VAR_2)
    {
    case 131:
      VAR_4 = 0;
      break;
    case 132:
    case 135:
    case 134:
    case 133:
    case 136:
    case 130:
    case 139:
      VAR_4 = *VAR_3 & 1;
      break;
    case 129:
    case 128:
    case 140:
    case 138:
      VAR_4 = *VAR_3 & 3;
      break;
    case 137:
      VAR_4 = *VAR_3 & 7;
      break;
    default:

      FUNC_0 ();
    }
  if (VAR_4)
    return "Value is not aligned enough";
  return ((void*)0);
}
