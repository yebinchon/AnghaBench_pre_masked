
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static size_t
FUNC_3(const char *VAR_0, char *VAR_1, size_t VAR_2)
{
 const char *VAR_3;
 size_t VAR_4;





 if (VAR_0 == ((void*)0) || *VAR_0 == '\0') {
  VAR_0 = ".";
  VAR_4 = 1;
  goto out;
 }


 VAR_3 = VAR_0 + FUNC_2(VAR_0) - 1;
 while (VAR_3 != VAR_0 && *VAR_3 == '/')
  VAR_3--;


 while (VAR_3 > VAR_0 && *VAR_3 != '/')
  VAR_3--;

 if (VAR_3 == VAR_0) {
  VAR_0 = *VAR_3 == '/' ? "/" : ".";
  VAR_4 = 1;
  goto out;
 }

 do
  VAR_3--;
 while (VAR_3 > VAR_0 && *VAR_3 == '/');

 VAR_4 = VAR_3 - VAR_0 + 1;
out:
 if (VAR_1 != ((void*)0) && VAR_2 != 0) {
  VAR_2 = FUNC_0(VAR_4, VAR_2 - 1);
  if (VAR_1 != VAR_0)
   FUNC_1(VAR_1, VAR_0, VAR_2);
  VAR_1[VAR_2] = '\0';
 }
 return VAR_4;
}
