
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(const char **VAR_0, const char *VAR_1,
        int *VAR_2)
{
 const char *VAR_3 = *VAR_0;
 size_t VAR_4;
 char *VAR_5;

 for (; VAR_3 < VAR_1; VAR_3++) {
  if (*VAR_3 != '-' && (*VAR_3 < '0' || *VAR_3 > '9')) {
   VAR_3--;
   break;
  }
 }
 if (VAR_3 == VAR_1)
  VAR_3--;
 if (VAR_3 < *VAR_0)
  return -1;
 VAR_4 = VAR_3 - *VAR_0 + 1;
 VAR_5 = FUNC_2(VAR_4 + 1);
 if (!VAR_5)
  return -1;
 FUNC_3(VAR_5, *VAR_0, VAR_4);
 VAR_5[VAR_4] = '\0';

 *VAR_2 = FUNC_0(VAR_5);
 FUNC_1(VAR_5);
 *VAR_0 = VAR_3;
 return 0;
}
