
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int *) ;
 scalar_t__ FUNC_1 (int **) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*,char**) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char const*) ;
 unsigned long long FUNC_7 (char*,int *,int) ;

__attribute__((used)) static unsigned long long
FUNC_8(const char *VAR_1)
{
 unsigned long long VAR_2;
 char *VAR_3, *VAR_4, *VAR_5;
 nvlist_t *VAR_6;

 VAR_2 = 0;
 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3 == ((void*)0))
  return (0);


 if ((VAR_5 = FUNC_5(VAR_3, '@')) != ((void*)0))
  *VAR_5 = '\0';

 if (FUNC_1(&VAR_6) != 0) {
  FUNC_2(VAR_3);
  return (0);
 }

 if (FUNC_0(VAR_0, VAR_3, VAR_6) != 0) {
  FUNC_3(VAR_6);
  FUNC_2(VAR_3);
  return (0);
 }

 if (FUNC_4(VAR_6, "used", &VAR_4) == 0)
  VAR_2 = FUNC_7(VAR_4, ((void*)0), 10);

 FUNC_3(VAR_6);
 FUNC_2(VAR_3);
 return (VAR_2);
}
