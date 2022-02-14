
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int time_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int*) ;
 int FUNC_4 (char*,int) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(char *VAR_2)
{
 char *VAR_3, *VAR_4;
 time_t VAR_5 = FUNC_7(((void*)0));
 int64_t VAR_6;


 if (*VAR_2 == '+' && FUNC_5(VAR_2, ':') == ((void*)0)) {
  if ((VAR_6 = FUNC_0(VAR_2 + 1)) == -1)
   FUNC_1("Invalid relative certificate life %s", VAR_2);
  VAR_1 = VAR_5 + VAR_6;




  VAR_0 = ((VAR_5 - 59)/ 60) * 60;
  return;
 }






 VAR_3 = FUNC_8(VAR_2);
 VAR_4 = FUNC_5(VAR_3, ':');
 if (VAR_4 == ((void*)0) || VAR_3 == VAR_4 || *(VAR_4 + 1) == '\0')
  FUNC_1("Invalid certificate life specification %s", VAR_2);
 *VAR_4++ = '\0';

 if (*VAR_3 == '-' || *VAR_3 == '+')
  VAR_0 = FUNC_4(VAR_3, VAR_5);
 else if (FUNC_6(VAR_3, "always") == 0)
  VAR_0 = 0;
 else if (FUNC_3(VAR_3, &VAR_0) != 0)
  FUNC_1("Invalid from time \"%s\"", VAR_3);

 if (*VAR_4 == '-' || *VAR_4 == '+')
  VAR_1 = FUNC_4(VAR_4, VAR_5);
 else if (FUNC_6(VAR_4, "forever") == 0)
  VAR_1 = ~(u_int64_t)0;
 else if (FUNC_3(VAR_4, &VAR_1) != 0)
  FUNC_1("Invalid to time \"%s\"", VAR_4);

 if (VAR_1 <= VAR_0)
  FUNC_1("Empty certificate validity interval");
 FUNC_2(VAR_3);
}
