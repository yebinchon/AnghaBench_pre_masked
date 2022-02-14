
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char**) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_2[])
{
 char *VAR_3[9];
 pid_t VAR_4;
 int VAR_5;

 VAR_3[0] = VAR_0;
 for (VAR_5 = 0; VAR_2[VAR_5] != ((void*)0) && VAR_5 < 8; VAR_5++)
  VAR_3[VAR_5+1] = VAR_2[VAR_5];
 VAR_3[VAR_5+1] = ((void*)0);

 VAR_4 = FUNC_2();
 if (VAR_4 == -1)
  return (-1);
 if (VAR_4 == 0) {



  FUNC_0(VAR_0, VAR_3);
  FUNC_3(VAR_1, "Could not exec %s (%m)\n",
      VAR_0);
  FUNC_1(1);
 }



 return (0);
}
