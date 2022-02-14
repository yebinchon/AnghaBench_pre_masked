
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent_data {char** aliases; int * fp; int line; } ;
struct protoent {char* p_name; long p_proto; char** p_aliases; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,int,int *) ;
 int * FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*,char*) ;
 long FUNC_3 (char*,char**,int) ;

int
FUNC_4(struct protoent *VAR_3, struct protoent_data *VAR_4)
{
 char *VAR_5;
 char *VAR_6, **VAR_7, *VAR_8;
 long VAR_9;

 if (VAR_4->fp == ((void*)0) && (VAR_4->fp = FUNC_1(VAR_2, "re")) == ((void*)0))
  return (-1);
again:
 if ((VAR_5 = FUNC_0(VAR_4->line, sizeof VAR_4->line, VAR_4->fp)) == ((void*)0))
  return (-1);
 if (*VAR_5 == '#')
  goto again;
 VAR_6 = FUNC_2(VAR_5, "#\n");
 if (VAR_6 != ((void*)0))
  *VAR_6 = '\0';
 VAR_3->p_name = VAR_5;
 VAR_6 = FUNC_2(VAR_5, " \t");
 if (VAR_6 == ((void*)0))
  goto again;
 *VAR_6++ = '\0';
 while (*VAR_6 == ' ' || *VAR_6 == '\t')
  VAR_6++;
 VAR_5 = FUNC_2(VAR_6, " \t");
 if (VAR_5 != ((void*)0))
  *VAR_5++ = '\0';
 VAR_9 = FUNC_3(VAR_6, &VAR_8, 10);
 if (VAR_8 == VAR_6 || *VAR_8 != '\0' || VAR_9 < 0 || VAR_9 > VAR_0)
  goto again;
 VAR_3->p_proto = VAR_9;
 VAR_7 = VAR_3->p_aliases = VAR_4->aliases;
 if (VAR_5 != ((void*)0)) {
  VAR_6 = VAR_5;
  while (VAR_6 && *VAR_6) {
   if (*VAR_6 == ' ' || *VAR_6 == '\t') {
    VAR_6++;
    continue;
   }
   if (VAR_7 < &VAR_4->aliases[VAR_1 - 1])
    *VAR_7++ = VAR_6;
   VAR_6 = FUNC_2(VAR_6, " \t");
   if (VAR_6 != ((void*)0))
    *VAR_6++ = '\0';
  }
 }
 *VAR_7 = ((void*)0);
 return (0);
}
