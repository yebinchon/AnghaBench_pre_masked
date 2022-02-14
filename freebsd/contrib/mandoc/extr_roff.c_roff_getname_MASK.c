
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const**,int *,int *) ;
 int FUNC_1 (int ,int,int,char*,int,char*) ;

__attribute__((used)) static size_t
FUNC_2(struct roff *VAR_1, char **VAR_2, int VAR_3, int VAR_4)
{
 char *VAR_5, *VAR_6;
 size_t VAR_7;

 VAR_5 = *VAR_2;
 if (*VAR_5 == '\0')
  return 0;



 for (VAR_6 = VAR_5; 1; VAR_6++) {
  VAR_7 = VAR_6 - VAR_5;
  if (*VAR_6 == '\0')
   break;
  if (*VAR_6 == ' ' || *VAR_6 == '\t') {
   VAR_6++;
   break;
  }
  if (*VAR_6 != '\\')
   continue;
  if (VAR_6[1] == '{' || VAR_6[1] == '}')
   break;
  if (*++VAR_6 == '\\')
   continue;
  FUNC_1(VAR_0, VAR_3, VAR_4,
      "%.*s", (int)(VAR_6 - VAR_5 + 1), VAR_5);
  FUNC_0((const char **)&VAR_6, ((void*)0), ((void*)0));
  break;
 }



 while (*VAR_6 == ' ')
  VAR_6++;

 *VAR_2 = VAR_6;
 return VAR_7;
}
