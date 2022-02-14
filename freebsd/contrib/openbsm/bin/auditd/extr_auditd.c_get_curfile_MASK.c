
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,scalar_t__) ;

__attribute__((used)) static char *
FUNC_4(void)
{
 char *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_0("malloc failed: %m");
  return (((void*)0));
 }

 VAR_3 = FUNC_3(VAR_0, VAR_2, VAR_1 - 1);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2);
  return (((void*)0));
 }


 VAR_2[VAR_3] = '\0';

 return (VAR_2);
}
