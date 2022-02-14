
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;




 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6 (rtx VAR_1)
{
  switch (FUNC_1 (VAR_1))
    {
    case 131: case 132: case 128: case 129:
      return 1;

    case 130:
      return ! (FUNC_1 (FUNC_4 (VAR_1, 1)) == VAR_0
  && FUNC_5 (FUNC_2 (FUNC_4 (VAR_1, 1))) >= 0);
    default:
      if (FUNC_0 (VAR_1))
 return FUNC_6 (FUNC_4 (VAR_1, 0))
     || FUNC_6 (FUNC_4 (VAR_1, 1));

      if (FUNC_3 (VAR_1))
 return FUNC_6 (FUNC_4 (VAR_1, 0));

      return 0;
    }
}
