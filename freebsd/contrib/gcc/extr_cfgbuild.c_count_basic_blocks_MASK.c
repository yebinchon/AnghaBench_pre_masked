
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7 (rtx VAR_3)
{
  int VAR_4 = VAR_0;
  bool VAR_5 = 0;
  rtx VAR_6;

  for (VAR_6 = VAR_3; VAR_6; VAR_6 = FUNC_2 (VAR_6))
    {


      if ((FUNC_1 (VAR_6) || FUNC_0 (VAR_6))
   && VAR_5)
 VAR_4++, VAR_5 = 0;


      if (!VAR_5 && FUNC_6 (VAR_6))
 VAR_5 = 1;


      if (VAR_5 && FUNC_3 (VAR_6))
 VAR_4++, VAR_5 = 0;
    }

  if (VAR_5)
    VAR_4++;



  if (VAR_4 == VAR_0)
    {
      FUNC_4 (FUNC_5 (VAR_1, VAR_2));
      VAR_4 = VAR_0 + 1;
    }

  return VAR_4;
}
