
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char**) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int*,int ) ;
 int FUNC_8 (int ,char*,int ) ;

int FUNC_9(const char *VAR_2, const char *VAR_3, int VAR_4)
{
 pid_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2();
 if (VAR_5 < 0) {
  FUNC_8(VAR_0, "fork: %s", FUNC_6(VAR_1));
  return -1;
 }

 if (VAR_5 == 0) {

  const int VAR_7 = 30;
  char *VAR_8, *VAR_9, *VAR_10;
  char *VAR_11[VAR_7 + 1];
  int VAR_12;

  VAR_8 = FUNC_5(VAR_2);
  VAR_9 = FUNC_5(VAR_3);

  VAR_11[0] = VAR_8;

  VAR_12 = 1;
  VAR_10 = VAR_9;
  while (VAR_12 < VAR_7 && VAR_10 && *VAR_10) {
   while (*VAR_10 == ' ')
    VAR_10++;
   if (*VAR_10 == '\0')
    break;
   VAR_11[VAR_12++] = VAR_10;
   VAR_10 = FUNC_4(VAR_10, ' ');
   if (VAR_10)
    *VAR_10++ = '\0';
  }
  VAR_11[VAR_12] = ((void*)0);

  FUNC_0(VAR_2, VAR_11);
  FUNC_8(VAR_0, "execv: %s", FUNC_6(VAR_1));
  FUNC_3(VAR_8);
  FUNC_3(VAR_9);
  FUNC_1(0);
  return -1;
 }

 if (VAR_4) {

  FUNC_7(VAR_5, &VAR_6, 0);
 }

 return 0;
}
