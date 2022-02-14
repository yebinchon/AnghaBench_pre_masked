
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;




 int FUNC_0 (int ) ;

 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6 (rtx VAR_1, int *VAR_2)
{
  int VAR_3;
  int VAR_4, VAR_5;

  switch (FUNC_0 (VAR_1))
    {
    case 129:
      VAR_3 = FUNC_5 (FUNC_2 (VAR_1, 0));
      break;

    case 130:
      VAR_3 = FUNC_6 (FUNC_1 (VAR_1, 1), VAR_2);
      for (VAR_4 = 0; VAR_4 < FUNC_4 (VAR_1, 0); VAR_4 += 2)
 {
   VAR_5 = FUNC_6 (FUNC_3 (VAR_1, 0, VAR_4 + 1), VAR_2);
   if (VAR_5 < VAR_3)
     VAR_3 = VAR_5;
 }
      break;

    case 128:
      VAR_3 = FUNC_6 (FUNC_1 (VAR_1, 1), VAR_2);
      VAR_5 = FUNC_6 (FUNC_1 (VAR_1, 2), VAR_2);
      if (VAR_5 < VAR_3)
 VAR_3 = VAR_5;
      break;

    default:
      *VAR_2 = 1;
      VAR_3 = VAR_0;
      break;
    }

  return VAR_3;
}
