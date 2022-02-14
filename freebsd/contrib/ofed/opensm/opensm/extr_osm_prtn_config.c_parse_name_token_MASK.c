
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, char **VAR_1, char **VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4, *VAR_5;

 *VAR_1 = *VAR_2 = ((void*)0);

 VAR_4 = VAR_0;

 while (*VAR_4 == ' ' || *VAR_4 == '\t' || *VAR_4 == '\n')
  VAR_4++;

 VAR_5 = FUNC_0(VAR_4, '=');
 if (VAR_5)
  *VAR_5++ = '\0';

 VAR_3 = FUNC_1(VAR_0) + 1;
 VAR_0 = VAR_5;

 VAR_5 = VAR_4 + FUNC_1(VAR_4);
 while (VAR_5 != VAR_4 && (*VAR_5 == '\0' || *VAR_5 == ' ' || *VAR_5 == '\t' || *VAR_5 == '\n'))
  *VAR_5-- = '\0';

 *VAR_1 = VAR_4;

 VAR_4 = VAR_0;
 if (!VAR_4)
  return VAR_3;

 while (*VAR_4 == ' ' || *VAR_4 == '\t' || *VAR_4 == '\n')
  VAR_4++;

 VAR_5 = VAR_4 + FUNC_1(VAR_4);
 VAR_3 += (int)(VAR_5 - VAR_0) + 1;
 while (VAR_5 != VAR_4 && (*VAR_5 == '\0' || *VAR_5 == ' ' || *VAR_5 == '\t' || *VAR_5 == '\n'))
  *VAR_5-- = '\0';
 *VAR_2 = VAR_4;

 return VAR_3;
}
