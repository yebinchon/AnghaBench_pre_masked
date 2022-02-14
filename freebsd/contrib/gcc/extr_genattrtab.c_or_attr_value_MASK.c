
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;




 int FUNC_0 (int ) ;

 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6 (rtx VAR_0, int *VAR_1)
{
  int VAR_2;
  int VAR_3;

  switch (FUNC_0 (VAR_0))
    {
    case 129:
      VAR_2 = FUNC_5 (FUNC_2 (VAR_0, 0));
      break;

    case 130:
      VAR_2 = FUNC_6 (FUNC_1 (VAR_0, 1), VAR_1);
      for (VAR_3 = 0; VAR_3 < FUNC_4 (VAR_0, 0); VAR_3 += 2)
 VAR_2 |= FUNC_6 (FUNC_3 (VAR_0, 0, VAR_3 + 1), VAR_1);
      break;

    case 128:
      VAR_2 = FUNC_6 (FUNC_1 (VAR_0, 1), VAR_1);
      VAR_2 |= FUNC_6 (FUNC_1 (VAR_0, 2), VAR_1);
      break;

    default:
      *VAR_1 = 1;
      VAR_2 = -1;
      break;
    }

  return VAR_2;
}
