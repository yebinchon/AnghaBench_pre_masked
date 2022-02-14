
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int filename ;
typedef int bf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static pid_t FUNC_11(pid_t VAR_2, char *VAR_3, size_t VAR_4)
{
 char VAR_5[VAR_1];
 char VAR_6[VAR_0];
 FILE *VAR_7;
 size_t VAR_8 = 0;
 pid_t VAR_9 = -1;

 FUNC_9(VAR_5, sizeof(VAR_5), "/proc/%d/status", VAR_2);

 VAR_7 = FUNC_3(VAR_5, "r");
 if (VAR_7 == ((void*)0)) {
  FUNC_7("couldn't open %s\n", VAR_5);
  return 0;
 }

 while (!VAR_3[0] || (VAR_9 < 0)) {
  if (FUNC_2(VAR_6, sizeof(VAR_6), VAR_7) == ((void*)0)) {
   FUNC_8("couldn't get COMM and pgid, malformed %s\n",
       VAR_5);
   break;
  }

  if (FUNC_5(VAR_6, "Name:", 5) == 0) {
   char *VAR_10 = VAR_6 + 5;
   while (*VAR_10 && FUNC_4(*VAR_10))
    ++VAR_10;
   VAR_8 = FUNC_10(VAR_10) - 1;
   if (VAR_8 >= VAR_4)
    VAR_8 = VAR_4 - 1;
   FUNC_6(VAR_3, VAR_10, VAR_8);
   VAR_3[VAR_8] = '\0';

  } else if (FUNC_5(VAR_6, "Tgid:", 5) == 0) {
   char *VAR_11 = VAR_6 + 5;
   while (*VAR_11 && FUNC_4(*VAR_11))
    ++VAR_11;
   VAR_9 = FUNC_0(VAR_11);
  }
 }

 FUNC_1(VAR_7);

 return VAR_9;
}
