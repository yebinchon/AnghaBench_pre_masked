
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcent {char* r_name; char** r_aliases; int r_number; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1, struct rpcent *VAR_2, char **VAR_3,
 size_t VAR_4, int *VAR_5)
{
 char *VAR_6, **VAR_7;

 FUNC_0(VAR_1 != ((void*)0));

 if (*VAR_1 == '#')
  return (-1);
 VAR_6 = FUNC_2(VAR_1, "#\n");
 if (VAR_6 == ((void*)0))
  return (-1);
 *VAR_6 = '\0';
 VAR_6 = FUNC_2(VAR_1, " \t");
 if (VAR_6 == ((void*)0))
  return (-1);
 *VAR_6++ = '\0';

 VAR_2->r_name = VAR_1;
 while (*VAR_6 == ' ' || *VAR_6 == '\t')
  VAR_6++;
 VAR_2->r_number = FUNC_1(VAR_6);
 VAR_7 = VAR_2->r_aliases = VAR_3;
 VAR_6 = FUNC_2(VAR_6, " \t");
 if (VAR_6 != ((void*)0))
  *VAR_6++ = '\0';
 while (VAR_6 && *VAR_6) {
  if (*VAR_6 == ' ' || *VAR_6 == '\t') {
   VAR_6++;
   continue;
  }
  if (VAR_7 < &(VAR_3[VAR_4 - 1]))
   *VAR_7++ = VAR_6;
  else {
   *VAR_5 = VAR_0;
   return -1;
  }

  VAR_6 = FUNC_2(VAR_6, " \t");
  if (VAR_6 != ((void*)0))
   *VAR_6++ = '\0';
 }
 *VAR_7 = ((void*)0);
 return 0;
}
