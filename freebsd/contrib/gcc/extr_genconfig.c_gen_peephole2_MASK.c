
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_4 (rtx VAR_3)
{
  int VAR_4, VAR_5;



  for (VAR_4 = FUNC_2 (VAR_3, 0) - 1; VAR_4 >= 0; --VAR_4)
    FUNC_3 (FUNC_1 (VAR_3, 0, VAR_4), 1, 0);


  for (VAR_4 = FUNC_2 (VAR_3, 0) - 1, VAR_5 = 0; VAR_4 >= 0; --VAR_4)
    if (FUNC_0 (FUNC_1 (VAR_3, 0, VAR_4)) != VAR_0
 && FUNC_0 (FUNC_1 (VAR_3, 0, VAR_4)) != VAR_1)
      VAR_5++;
  if (VAR_5 > VAR_2)
    VAR_2 = VAR_5;
}
