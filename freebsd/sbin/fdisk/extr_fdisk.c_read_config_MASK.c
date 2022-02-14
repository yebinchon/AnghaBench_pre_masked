
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(char *VAR_2)
{
    FILE *VAR_3 = ((void*)0);
    int VAR_4 = 1;
    char VAR_5[1010];

 while (1) {
  if (FUNC_5(VAR_2, "-") != 0) {



   if ((VAR_3 = FUNC_3(VAR_2, "r")) == ((void*)0)) {
  VAR_4 = 0;
  break;
     }
  } else {
     VAR_3 = VAR_1;
 }
 VAR_0 = 0;
  while (!FUNC_1(VAR_3)) {
     if (FUNC_2(VAR_5, sizeof(VAR_5), VAR_3) == ((void*)0))
  break;
     ++VAR_0;
     VAR_4 = FUNC_4(VAR_5);
     if (VAR_4 == 0)
  break;
     }
 break;
    }
 if (VAR_3) {



 FUNC_0(VAR_3);
    }
    return (VAR_4);
}
