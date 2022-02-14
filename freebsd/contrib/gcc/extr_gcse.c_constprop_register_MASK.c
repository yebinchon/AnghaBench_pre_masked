
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *,int *) ;

__attribute__((used)) static bool
FUNC_11 (rtx VAR_0, rtx VAR_1, rtx VAR_2, bool VAR_3)
{
  rtx VAR_4;



  if (VAR_3
      && (VAR_4 = FUNC_9 (VAR_0)) != ((void*)0)
      && FUNC_2 (VAR_0)
      && FUNC_6 (FUNC_2 (VAR_0)) && FUNC_8 (FUNC_2 (VAR_0)))
    {
      rtx VAR_5 = FUNC_5 (VAR_4);
      if ((FUNC_4 (VAR_5) || FUNC_1 (VAR_5))
   && FUNC_7 (FUNC_0 (VAR_0), VAR_0, FUNC_2 (VAR_0), VAR_1, VAR_2))
 return 1;
    }


  if (FUNC_3 (VAR_0)
      && FUNC_10 (VAR_1, VAR_2, VAR_0))
    return 1;







  else if (VAR_3 && FUNC_6 (VAR_0) && FUNC_8 (VAR_0))
    return FUNC_7 (FUNC_0 (VAR_0), ((void*)0), VAR_0, VAR_1, VAR_2);
  return 0;
}
