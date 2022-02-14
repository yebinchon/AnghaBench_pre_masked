
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_2__ {scalar_t__ versioned_name; } ;


 char VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,size_t) ;
 char* FUNC_4 (scalar_t__,char) ;
 int FUNC_5 (char*) ;
 TYPE_1__* FUNC_6 (int *) ;
 int VAR_1 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int **,int *) ;
 int * VAR_2 ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

void
FUNC_11 (void)
{
  if (VAR_2)
    {
      symbolS *VAR_3;

      for (VAR_3 = VAR_2; VAR_3; VAR_3 = FUNC_7 (VAR_3))
 if (!FUNC_0 (VAR_3))
   {
     if (FUNC_6 (VAR_3)->versioned_name)
       {
  char *VAR_4;





  VAR_4 = FUNC_4 (FUNC_6 (VAR_3)->versioned_name,
       VAR_0);
  FUNC_2 (VAR_4 != ((void*)0));
  if (VAR_4[1] == VAR_0 && VAR_4[2] == VAR_0)
    {
      size_t VAR_5 = FUNC_5 (&VAR_4[3]) + 1;
      FUNC_3 (&VAR_4[1], &VAR_4[3], VAR_5);
    }
  if (FUNC_10 (VAR_3) == 0
      && FUNC_9 (VAR_3) == 0)
    FUNC_8 (VAR_3, &VAR_2, &VAR_1);
       }




     else if (FUNC_1 (VAR_3)
       && FUNC_10 (VAR_3) == 0
       && FUNC_9 (VAR_3) == 0)
       FUNC_8 (VAR_3, &VAR_2, &VAR_1);
   }
    }
}
