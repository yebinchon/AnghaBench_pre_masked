
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int **,char*,int ,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*,long) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *) ;

int
FUNC_8(const char *VAR_6)
{
 FILE *VAR_7;
 int VAR_8;
 pid_t VAR_9;

 if (VAR_6 == ((void*)0))
  VAR_6 = VAR_1;

 if (VAR_4 != ((void*)0)) {
  FUNC_5(VAR_4);
  VAR_4 = ((void*)0);
 }


 (void) FUNC_0(&VAR_4, "%d%s.pid", VAR_0, VAR_6);
 if (VAR_4 == ((void*)0))
  return (-1);

 if ((VAR_7 = FUNC_3(VAR_4, "w")) == ((void*)0)) {
  VAR_8 = VAR_2;
  FUNC_5(VAR_4);
  VAR_4 = ((void*)0);
  VAR_2 = VAR_8;
  return (-1);
 }

 VAR_9 = FUNC_6();
 if (FUNC_4(VAR_7, "%ld\n", (long)VAR_9) <= 0 || FUNC_2(VAR_7) != 0) {
  VAR_8 = VAR_2;
  (void) FUNC_7(VAR_4);
  FUNC_5(VAR_4);
  VAR_4 = ((void*)0);
  VAR_2 = VAR_8;
  return (-1);
 }

 VAR_5 = VAR_9;
 if (FUNC_1(VAR_3) < 0) {
  VAR_8 = VAR_2;
  (void) FUNC_7(VAR_4);
  FUNC_5(VAR_4);
  VAR_4 = ((void*)0);
  VAR_5 = 0;
  VAR_2 = VAR_8;
  return (-1);
 }

 return (0);
}
