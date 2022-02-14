
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int InclTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,char,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  if (VAR_3 == ((void*)0))
    {
      VAR_3 = (InclTable *)
 FUNC_1 (sizeof (InclTable) * VAR_0);
      FUNC_0 (VAR_3,
       '\0', sizeof (InclTable) * VAR_0);
      VAR_2 = VAR_0;
      VAR_1 = 0;
    }
  else if (VAR_1 >= VAR_2)
    {
      VAR_2 += VAR_0;
      VAR_3 = (InclTable *)
 FUNC_2 (VAR_3, sizeof (InclTable) * VAR_2);
      FUNC_0 (VAR_3 + VAR_2 - VAR_0,
       '\0', sizeof (InclTable) * VAR_0);
    }
}
