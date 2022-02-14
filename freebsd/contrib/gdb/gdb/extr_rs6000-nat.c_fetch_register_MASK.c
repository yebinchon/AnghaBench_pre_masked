
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
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int*,long long*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int*) ;
 int FUNC_7 (int ,int ,int*,int,int ) ;
 int FUNC_8 (int ,int ,int,int ,int*) ;
 int FUNC_9 (int,char*) ;

__attribute__((used)) static void
FUNC_10 (int VAR_7)
{
  int VAR_8[VAR_0];
  int VAR_9, VAR_10;


  VAR_4 = 0;

  VAR_9 = FUNC_6 (VAR_7, &VAR_10);


  if (VAR_10)
    FUNC_7 (VAR_2, FUNC_2 (VAR_6), VAR_8, VAR_9, 0);


  else if (VAR_9 < 0)
    {
      if (VAR_7 >= VAR_1)
 FUNC_3 (VAR_5,
       "gdb error: register no %d not implemented.\n",
       VAR_7);
      return;
    }


  else
    {
      if (!FUNC_0 ())
 *VAR_8 = FUNC_7 (VAR_3, FUNC_2 (VAR_6), (int *)VAR_9, 0, 0);
      else
 {


   long long VAR_11;
   FUNC_8 (VAR_3, FUNC_2 (VAR_6), VAR_9, 0, (int *)&VAR_11);
   if (FUNC_1 (VAR_7) == 8)
     FUNC_4 (VAR_8, &VAR_11, 8);
   else
     *VAR_8 = VAR_11;
 }
    }

  if (!VAR_4)
    FUNC_9 (VAR_7, (char *) VAR_8);
  else
    {




      VAR_4 = 0;
    }
}
