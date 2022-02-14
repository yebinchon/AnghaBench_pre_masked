
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char const**) ;
 char** FUNC_2 (int ,char*) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (char*,int,int*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 char const** VAR_3 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static const char *
FUNC_6(void)
{
 char *VAR_4;
 static const char **VAR_5 = 0;
 static const char **VAR_6;
 int VAR_7;

 if (VAR_1) {
  VAR_1 = 0;
  if (VAR_5 && VAR_5 != VAR_3)
   FUNC_1(VAR_5);
  if ((VAR_4 = FUNC_0("TERM")) &&
    (FUNC_3(VAR_4, 1, &VAR_7) == 0)) {
   VAR_5 = FUNC_2(VAR_2, VAR_4);
  } else {
   if (VAR_4 && (FUNC_4(VAR_4) <= 40)) {
    VAR_3[0] = VAR_4;
    FUNC_5(VAR_4);
   } else
    VAR_3[0] = VAR_0;
   VAR_5 = VAR_3;
  }
  VAR_6 = VAR_5;
 }
 if (*VAR_6 == 0)
  VAR_6 = VAR_5;
 return(*VAR_6++);
}
