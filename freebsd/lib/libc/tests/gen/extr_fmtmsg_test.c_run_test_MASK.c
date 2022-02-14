
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (long,char const*,int,char const*,char const*,char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (size_t) ;
 int * FUNC_8 (char*,char,int) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int,char*,int) ;
 char* FUNC_11 (char*,size_t) ;
 int FUNC_12 (int,int*,int ) ;

__attribute__((used)) static char *
FUNC_13(long VAR_4, const char *VAR_5, int VAR_6,
    const char *VAR_7, const char *VAR_8, const char *VAR_9)
{
 int VAR_10[2];
 pid_t VAR_11, VAR_12;
 char *VAR_13, *VAR_14;
 size_t VAR_15;
 ssize_t VAR_16;
 int VAR_17;

 if (FUNC_9(VAR_10) == -1)
  FUNC_3(2, "pipe");
 VAR_11 = FUNC_5();
 if (VAR_11 == -1)
  FUNC_3(2, "fork");
 if (VAR_11 == 0) {
  FUNC_1(VAR_10[0]);
  if (VAR_10[1] != VAR_2 &&
      FUNC_2(VAR_10[1], VAR_2) == -1)
   FUNC_0(2);
  if (FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9)
      != VAR_1)
   FUNC_0(1);
  else
   FUNC_0(0);
 }
 FUNC_1(VAR_10[1]);
 VAR_15 = 1024;
 VAR_13 = FUNC_7(VAR_15);
 VAR_14 = VAR_13;
 while ((VAR_16 = FUNC_10(VAR_10[0], VAR_14, VAR_13 + VAR_15 - VAR_14 - 1)) != 0) {
  if (VAR_16 == -1) {
   if (VAR_3 == VAR_0)
    continue;
   else
    FUNC_3(2, "read");
  }
  VAR_14 += VAR_16;
  if (VAR_13 + VAR_15 == VAR_14 - 1) {
   VAR_15 *= 2;
   VAR_13 = FUNC_11(VAR_13, VAR_15);
   if (VAR_13 == ((void*)0))
    FUNC_3(2, "realloc");
  }
 }
 if (FUNC_8(VAR_13, '\0', VAR_14 - VAR_13) != ((void*)0)) {
  FUNC_6(VAR_13);
  return (((void*)0));
 }
 *VAR_14 = '\0';
 FUNC_1(VAR_10[0]);
 while ((VAR_12 = FUNC_12(VAR_11, &VAR_17, 0)) == -1 && VAR_3 == VAR_0)
  ;
 if (VAR_12 == -1)
  FUNC_3(2, "waitpid");
 if (VAR_17 != 0) {
  FUNC_6(VAR_13);
  return (((void*)0));
 }
 return (VAR_13);
}
