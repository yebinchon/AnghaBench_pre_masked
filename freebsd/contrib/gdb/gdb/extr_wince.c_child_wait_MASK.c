
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_waitstatus {int dummy; } ;
typedef int ptid_t ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,struct target_waitstatus*,int ,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ptid_t
FUNC_5 (ptid_t VAR_1, struct target_waitstatus *VAR_2)
{
  DWORD VAR_3;
  int VAR_4;
  int VAR_5 = FUNC_0 (VAR_1);







  while (1)
    if (FUNC_2 (VAR_5, VAR_2, VAR_0, &VAR_4))
      return FUNC_3 (VAR_4);
    else
      {
 int VAR_6 = 0;

 if (&FUNC_4 != ((void*)0))
   VAR_6 = FUNC_4 (0);

 if (VAR_6)
   FUNC_1 ();
      }
}
