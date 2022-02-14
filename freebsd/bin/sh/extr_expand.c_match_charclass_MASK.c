
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wctype_t ;
typedef int wchar_t ;
typedef int name ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, wchar_t VAR_1, const char **VAR_2)
{
 char VAR_3[20];
 const char *VAR_4;
 wctype_t VAR_5;

 *VAR_2 = ((void*)0);
 VAR_0++;
 VAR_4 = FUNC_2(VAR_0, ":]");
 if (VAR_4 == ((void*)0) || (size_t)(VAR_4 - VAR_0) >= sizeof(VAR_3) ||
     VAR_4 == VAR_0)
  return 0;
 FUNC_1(VAR_3, VAR_0, VAR_4 - VAR_0);
 VAR_3[VAR_4 - VAR_0] = '\0';
 *VAR_2 = VAR_4 + 2;
 VAR_5 = FUNC_3(VAR_3);

 if (VAR_5 == 0)
  return 0;
 return FUNC_0(VAR_1, VAR_5);
}
