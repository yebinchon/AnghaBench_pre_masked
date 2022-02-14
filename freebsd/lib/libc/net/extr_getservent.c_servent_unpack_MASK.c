
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {char* s_name; char* s_proto; char** s_aliases; int s_port; } ;
typedef int in_port_t ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct servent*,int ,int) ;
 char* FUNC_2 (char*,char*) ;
 long FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_2, struct servent *VAR_3, char **VAR_4,
    size_t VAR_5, int *VAR_6)
{
 char *VAR_7, **VAR_8, *VAR_9;
 long VAR_10;

 if (*VAR_2 == '#')
  return -1;

 FUNC_1(VAR_3, 0, sizeof(struct servent));

 VAR_7 = FUNC_2(VAR_2, "#\n");
 if (VAR_7 != ((void*)0))
  *VAR_7 = '\0';
 VAR_3->s_name = VAR_2;

 VAR_2 = FUNC_2(VAR_2, " \t");
 if (VAR_2 == ((void*)0))
  return -1;
 *VAR_2++ = '\0';
 while (*VAR_2 == ' ' || *VAR_2 == '\t')
  VAR_2++;
 VAR_7 = FUNC_2(VAR_2, ",/");
 if (VAR_7 == ((void*)0))
  return -1;

 *VAR_7++ = '\0';
 VAR_10 = FUNC_3(VAR_2, &VAR_9, 10);
 if (VAR_9 == VAR_2 || *VAR_9 != '\0' || VAR_10 < 0 || VAR_10 > VAR_1)
  return -1;
 VAR_3->s_port = FUNC_0((in_port_t)VAR_10);
 VAR_3->s_proto = VAR_7;

 VAR_8 = VAR_3->s_aliases = VAR_4;
 VAR_7 = FUNC_2(VAR_7, " \t");
 if (VAR_7 != ((void*)0))
  *VAR_7++ = '\0';
 while (VAR_7 && *VAR_7) {
  if (*VAR_7 == ' ' || *VAR_7 == '\t') {
   VAR_7++;
   continue;
  }
  if (VAR_8 < &VAR_4[VAR_5 - 1]) {
   *VAR_8++ = VAR_7;
  } else {
   *VAR_8 = ((void*)0);
   *VAR_6 = VAR_0;
   return -1;
  }
  VAR_7 = FUNC_2(VAR_7, " \t");
  if (VAR_7 != ((void*)0))
   *VAR_7++ = '\0';
 }
 *VAR_8 = ((void*)0);

 return 0;
}
