
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (long long*,int*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int*) ;
 int FUNC_8 (int,int*) ;
 int FUNC_9 (int ,int ,int*,int,int ) ;
 int FUNC_10 (int ,int ,int,int ,int*) ;

__attribute__((used)) static void
FUNC_11 (int VAR_8)
{
  int VAR_9[VAR_0];
  int VAR_10, VAR_11;


  FUNC_7 (VAR_8, VAR_9);


  VAR_5 = 0;

  VAR_10 = FUNC_8 (VAR_8, &VAR_11);


  if (VAR_11)
    FUNC_9 (VAR_2, FUNC_2 (VAR_7), VAR_9, VAR_10, 0);


  else if (VAR_10 < 0)
    {
      if (VAR_8 >= VAR_1)
 FUNC_4 (VAR_6,
       "gdb error: register no %d not implemented.\n",
       VAR_8);
    }


  else
    {
      if (VAR_8 == VAR_4)





 FUNC_3 ();




      if (!FUNC_0 ())
 FUNC_9 (VAR_3, FUNC_2 (VAR_7), (int *)VAR_10, *VAR_9, 0);
      else
 {


   long long VAR_12;
   if (FUNC_1 (VAR_8) == 8)
     FUNC_5 (&VAR_12, VAR_9, 8);
   else
     VAR_12 = *VAR_9;
   FUNC_10 (VAR_3, FUNC_2 (VAR_7), VAR_10, 0, (int *)&VAR_12);
 }
    }

  if (VAR_5)
    {
      FUNC_6 ("ptrace write");
      VAR_5 = 0;
    }
}
