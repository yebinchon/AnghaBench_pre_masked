
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Function ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int * VAR_6 ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3 (int VAR_7, int VAR_8)
{
  int VAR_9;

  if (VAR_1)
    {

      VAR_0 = VAR_2;
    }
  else
    {


      VAR_6 = (Function *) VAR_2;
    }


  VAR_9 = FUNC_2();






  if ((FUNC_0 () && (VAR_3 >= VAR_4)) ||
      (VAR_9 >= VAR_3 - 1))
    VAR_5 = VAR_9;
  else
    VAR_5 = VAR_9 + 1;

  return FUNC_1 (1, VAR_8);
}
