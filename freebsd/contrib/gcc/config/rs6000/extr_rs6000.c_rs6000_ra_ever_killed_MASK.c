
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_11 (void)
{
  rtx VAR_5;
  rtx VAR_6;
  rtx VAR_7;

  if (VAR_4)
    return 0;
  FUNC_9 ();
  VAR_5 = FUNC_6 ();
  FUNC_7 ();
  VAR_6 = FUNC_5 (VAR_2, VAR_0);

  for (VAR_7 = FUNC_2 (VAR_5); VAR_7 != VAR_1; VAR_7 = FUNC_2 (VAR_7))
    {
      if (FUNC_1 (VAR_7))
 {
   if (FUNC_0 (VAR_7))
     {
       if (!FUNC_3 (VAR_7))
  return 1;
     }
   else if (FUNC_4 (VAR_7, VAR_3, VAR_0))
     return 1;
   else if (FUNC_10 (VAR_6, VAR_7) != VAR_1
     && !FUNC_8 (VAR_7))
     return 1;
     }
    }
  return 0;
}
