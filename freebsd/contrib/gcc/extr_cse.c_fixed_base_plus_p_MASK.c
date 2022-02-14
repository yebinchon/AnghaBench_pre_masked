
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static bool
FUNC_3 (rtx VAR_8)
{
  switch (FUNC_0 (VAR_8))
    {
    case 128:
      if (VAR_8 == VAR_6 || VAR_8 == VAR_7)
 return 1;
      if (VAR_8 == VAR_4 && VAR_5[VAR_0])
 return 1;
      if (FUNC_1 (VAR_8) >= VAR_2
   && FUNC_1 (VAR_8) <= VAR_3)
 return 1;
      return 0;

    case 129:
      if (FUNC_0 (FUNC_2 (VAR_8, 1)) != VAR_1)
 return 0;
      return FUNC_3 (FUNC_2 (VAR_8, 0));

    default:
      return 0;
    }
}
