
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int hashval_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;





 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

 int FUNC_7 () ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static hashval_t
FUNC_9 (tree VAR_0)
{
  hashval_t VAR_1;

  switch (FUNC_3 (VAR_0))
    {
    case 128:
    case 131:
    case 129:
      VAR_1 = FUNC_2 (VAR_0);
      break;

    case 132:
      VAR_1 = FUNC_5 (VAR_0) ^ FUNC_4 (VAR_0);
      break;

    case 130:
      VAR_1 = FUNC_8 (FUNC_6 (VAR_0, 0), 0);
      VAR_1 = FUNC_8 (FUNC_6 (VAR_0, 1), VAR_1);
      break;

    case 133:


      VAR_1 = FUNC_8 (FUNC_1 (VAR_0), 0);
      VAR_1 = FUNC_8 (FUNC_0 (VAR_0), VAR_1);
      break;

    default:
      FUNC_7 ();
    }

  return VAR_1;
}
