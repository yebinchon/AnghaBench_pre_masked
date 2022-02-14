
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*,char) ;
 int FUNC_1 (int,char**,char const*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (char const*,char) ;

int
FUNC_3(int VAR_3, char **VAR_4, const char *VAR_5)
{
 static char *VAR_6;
 static char VAR_7;
 char VAR_8;
 char *VAR_9;

 VAR_0 = ((void*)0);

 if (VAR_6 == ((void*)0)) {
  if (VAR_3 < 2)
   return (-1);
  VAR_6 = VAR_4[1];
  if (*VAR_6 == '-')
   VAR_7++;
  else
   VAR_1 = 2;
 }

 if (VAR_7)
  return (FUNC_1(VAR_3, VAR_4, VAR_5));

 VAR_8 = *VAR_6++;
 if (VAR_8 == '\0') {
  VAR_6--;
  return (-1);
 }
 VAR_9 = FUNC_2(VAR_5, VAR_8);

 if (VAR_9 == ((void*)0) || VAR_8 == ':') {
  FUNC_0(VAR_2, "%s: unknown option %c\n", VAR_4[0], VAR_8);
  return ('?');
 }

 VAR_9++;
 if (*VAR_9 == ':') {
  if (VAR_1 < VAR_3) {
   VAR_0 = VAR_4[VAR_1];
   VAR_1++;
  } else {
   FUNC_0(VAR_2, "%s: %c argument missing\n",
    VAR_4[0], VAR_8);
   return ('?');
  }
 }

 return (VAR_8);
}
