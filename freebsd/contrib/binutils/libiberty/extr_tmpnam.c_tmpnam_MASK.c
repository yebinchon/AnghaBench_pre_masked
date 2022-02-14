
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,char*,char*,int,int ) ;
 char* VAR_1 ;
 int VAR_2 ;

char *
FUNC_4 (char *VAR_3)
{
  int VAR_4 = FUNC_2 ();

  if (VAR_3 == ((void*)0))
    VAR_3 = VAR_1;




  while (1)
    {
      FILE *VAR_5;
      FUNC_3 (VAR_3, "%s/%s%x.%x", VAR_0, "t", VAR_4, VAR_2);
      VAR_5 = FUNC_1 (VAR_3, "r");
      if (VAR_5 == ((void*)0))
 break;
      VAR_2++;
      FUNC_0 (VAR_5);
    }

  return VAR_3;
}
