
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static char * FUNC_3(const char *VAR_0)
{
 const char *VAR_1, *VAR_2, *VAR_3;
 char *VAR_4;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_1 = FUNC_2(VAR_0, '/');
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_1++;
 if (*VAR_1 != '/')
  return ((void*)0);
 VAR_1++;

 VAR_2 = FUNC_2(VAR_1, '/');
 VAR_3 = FUNC_2(VAR_1, ':');
 if ((VAR_2 && VAR_3 && VAR_3 < VAR_2) || (!VAR_2 && VAR_3))
  VAR_2 = VAR_3;
 if (VAR_2)
  VAR_2--;
 else {
  VAR_2 = VAR_1;
  while (*VAR_2)
   VAR_2++;
  if (VAR_2 > VAR_1)
   VAR_2--;
 }

 VAR_4 = FUNC_0(VAR_2 - VAR_1 + 2);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_4, VAR_1, VAR_2 - VAR_1 + 1);
 VAR_4[VAR_2 - VAR_1 + 1] = '\0';

 return VAR_4;
}
