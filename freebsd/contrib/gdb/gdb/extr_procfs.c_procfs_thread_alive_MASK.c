
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;
typedef int procinfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5 (ptid_t VAR_0)
{
  int VAR_1, VAR_2;
  procinfo *VAR_3;

  VAR_1 = FUNC_0 (VAR_0);
  VAR_2 = FUNC_1 (VAR_0);

  if ((VAR_3 = FUNC_3 (VAR_1, VAR_2)) == ((void*)0))
    return 0;



  if (!FUNC_4 (VAR_3))
    {
      FUNC_2 (VAR_3);
      return 0;
    }

  return 1;
}
