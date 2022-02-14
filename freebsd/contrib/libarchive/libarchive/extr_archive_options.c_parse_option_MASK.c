
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static const char *
FUNC_2(const char **VAR_0, const char **VAR_1, const char **VAR_2, const char **VAR_3)
{
 const char *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 char *VAR_8;

 VAR_4 = ((void*)0);
 VAR_5 = ((void*)0);
 VAR_6 = *VAR_0;
 VAR_7 = "1";

 VAR_8 = FUNC_0(VAR_6, ',');

 if (VAR_8 != ((void*)0)) {
  *VAR_8 = '\0';
  VAR_4 = ((const char *)VAR_8) + 1;
 }

 if (0 == FUNC_1(VAR_6)) {
  *VAR_0 = VAR_4;
  *VAR_1 = ((void*)0);
  *VAR_2 = ((void*)0);
  *VAR_3 = ((void*)0);
  return VAR_4;
 }

 VAR_8 = FUNC_0(VAR_6, ':');
 if (VAR_8 != ((void*)0)) {
  *VAR_8 = '\0';
  VAR_5 = VAR_6;
  VAR_6 = ++VAR_8;
 }

 VAR_8 = FUNC_0(VAR_6, '=');
 if (VAR_8 != ((void*)0)) {
  *VAR_8 = '\0';
  VAR_7 = ++VAR_8;
 } else if (VAR_6[0] == '!') {
  ++VAR_6;
  VAR_7 = ((void*)0);
 }

 *VAR_0 = VAR_4;
 *VAR_1 = VAR_5;
 *VAR_2 = VAR_6;
 *VAR_3 = VAR_7;

 return VAR_4;
}
