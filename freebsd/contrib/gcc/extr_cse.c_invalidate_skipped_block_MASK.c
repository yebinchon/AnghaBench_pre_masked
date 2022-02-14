
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_0 ;
 int FUNC_9 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_10 (rtx VAR_1)
{
  rtx VAR_2;

  for (VAR_2 = VAR_1; VAR_2 && !FUNC_3 (VAR_2);
       VAR_2 = FUNC_4 (VAR_2))
    {
      if (! FUNC_2 (VAR_2))
 continue;

      if (FUNC_0 (VAR_2))
 {
   if (! FUNC_1 (VAR_2))
     FUNC_8 ();
   FUNC_6 ();
 }

      FUNC_7 (FUNC_5 (VAR_2));
      FUNC_9 (FUNC_5 (VAR_2), VAR_0, ((void*)0));
    }
}
