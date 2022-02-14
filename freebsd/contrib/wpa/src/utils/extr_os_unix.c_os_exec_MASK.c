
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (char const*,char**) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__,int*,int ) ;

int FUNC_8(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 pid_t VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2();
 if (VAR_3 < 0) {
  FUNC_6("fork");
  return -1;
 }

 if (VAR_3 == 0) {

  const int VAR_5 = 30;
  char *VAR_6, *VAR_7, *VAR_8;
  char *VAR_9[VAR_5 + 1];
  int VAR_10;

  VAR_6 = FUNC_5(VAR_0);
  VAR_7 = FUNC_5(VAR_1);

  VAR_9[0] = VAR_6;

  VAR_10 = 1;
  VAR_8 = VAR_7;
  while (VAR_10 < VAR_5 && VAR_8 && *VAR_8) {
   while (*VAR_8 == ' ')
    VAR_8++;
   if (*VAR_8 == '\0')
    break;
   VAR_9[VAR_10++] = VAR_8;
   VAR_8 = FUNC_4(VAR_8, ' ');
   if (VAR_8)
    *VAR_8++ = '\0';
  }
  VAR_9[VAR_10] = ((void*)0);

  FUNC_0(VAR_0, VAR_9);
  FUNC_6("execv");
  FUNC_3(VAR_6);
  FUNC_3(VAR_7);
  FUNC_1(0);
  return -1;
 }

 if (VAR_2) {

  FUNC_7(VAR_3, &VAR_4, 0);
 }

 return 0;
}
