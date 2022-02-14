
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char const*) ;

char * FUNC_5(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3;
 char *VAR_4;
 size_t VAR_5;

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_2 += FUNC_3(VAR_1);
 VAR_3 = FUNC_2(VAR_2, ' ');
 if (VAR_3)
  VAR_5 = VAR_3 - VAR_2;
 else
  VAR_5 = FUNC_3(VAR_2);
 VAR_4 = FUNC_0(VAR_5 + 1);
 if (!VAR_4)
  return ((void*)0);
 FUNC_1(VAR_4, VAR_2, VAR_5);
 VAR_4[VAR_5] = '\0';
 return VAR_4;
}
