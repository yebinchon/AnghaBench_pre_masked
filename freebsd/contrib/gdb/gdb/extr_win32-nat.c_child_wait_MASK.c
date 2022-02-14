
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_waitstatus {int dummy; } ;
typedef int ptid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int,struct target_waitstatus*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ptid_t
FUNC_5 (ptid_t VAR_0, struct target_waitstatus *VAR_1)
{
  int VAR_2 = FUNC_0 (VAR_0);







  while (1)
    {
      int VAR_3 = FUNC_2 (VAR_2, VAR_1);
      if (VAR_3)
 return FUNC_3 (VAR_3);
      else
 {
   int VAR_4 = 0;

   if (&FUNC_4 != ((void*)0))
     VAR_4 = FUNC_4 (0);

   if (VAR_4)
     FUNC_1 ();
 }
    }
}
