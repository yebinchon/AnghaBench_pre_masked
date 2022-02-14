
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int hashval_t ;






 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

 int FUNC_7 () ;

__attribute__((used)) static hashval_t
FUNC_8 (const void *VAR_0)
{
  int VAR_1 = 0;
  int VAR_2, VAR_3;
  tree VAR_4 = (tree) VAR_0;
  tree VAR_5;
  switch (FUNC_1 (VAR_4))
    {

    case 131:
      return FUNC_8 (FUNC_3 (VAR_4)) ^ 0x3003003;

    case 132:
      VAR_2 = 3;
      VAR_5 = FUNC_6 (VAR_4);
      break;
    case 129:
      VAR_2 = 0;
      VAR_5 = FUNC_4 (VAR_4);
      break;
    case 130:
      VAR_2 = 1;
      VAR_5 = FUNC_4 (VAR_4);
      break;
    case 128:
      VAR_2 = 2;
      VAR_5 = FUNC_4 (VAR_4);
      break;
    default:
      FUNC_7 ();
    }
  for (; VAR_5; VAR_5 = FUNC_0 (VAR_5))
    VAR_1++;
  VAR_3 = FUNC_2 (FUNC_5 (VAR_4));
  return ((VAR_3 << 24) | (VAR_1 << VAR_2));
}
