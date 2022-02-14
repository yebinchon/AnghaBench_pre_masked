
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;




 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static rtx
FUNC_6 (rtx VAR_0, int VAR_1, int VAR_2)
{
  int VAR_3 = 0;

  switch (FUNC_1 (VAR_0))
    {
    case 128:
      VAR_3 = (VAR_2 + 1) * VAR_1;
      break;
    case 129:
      VAR_3 = -(VAR_2 + 1) * VAR_1;
      break;
    case 130:
      VAR_3 = VAR_2 * VAR_1;
      break;
    case 131:
      VAR_3 = -VAR_2 * VAR_1;
      break;

    default:
      return VAR_0;
    }

  if (VAR_3)
    VAR_0 = FUNC_5 (FUNC_2 (VAR_0), FUNC_3 (VAR_0, 0),
    FUNC_0 (VAR_3));
  else
    VAR_0 = FUNC_3 (VAR_0, 0);
  VAR_0 = FUNC_4 (VAR_0);

  return VAR_0;
}
