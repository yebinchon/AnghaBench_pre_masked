
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid {int * fp; } ;
typedef int pid_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char* const*,char* const*) ;
 int FUNC_2 (int*,char const*) ;
 int FUNC_3 (int*,struct pid*) ;
 struct pid* FUNC_4 (int*,char const**) ;
 int FUNC_5 (int*,struct pid*,int ,char const*) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

FILE *
FUNC_9(const char *VAR_2, char *const *VAR_3, char *const *VAR_4, const char *VAR_5)
{
 struct pid *VAR_6;
 int VAR_7[2], VAR_8;
 pid_t VAR_9;

 if ((VAR_6 = FUNC_4(VAR_7, &VAR_5)) == ((void*)0))
  return ((void*)0);




 switch (VAR_9 = FUNC_8()) {
 case -1:
  VAR_8 = VAR_0;



  FUNC_3(VAR_7, VAR_6);
  VAR_0 = VAR_8;
  return ((void*)0);

 case 0:
  FUNC_2(VAR_7, VAR_5);
  FUNC_1(VAR_2, VAR_3, VAR_4);
  FUNC_0(127);

 }

 FUNC_5(VAR_7, VAR_6, VAR_9, VAR_5);





 return VAR_6->fp;
}
