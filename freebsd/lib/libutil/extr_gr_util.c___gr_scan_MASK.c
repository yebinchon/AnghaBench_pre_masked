
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char* gr_name; char* gr_passwd; char** gr_mem; int gr_gid; } ;


 char** FUNC_0 (char**,int) ;
 int FUNC_1 (char*,char*,int *) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static bool
FUNC_4(char *VAR_0, struct group *VAR_1)
{
 char *VAR_2;
 int VAR_3;


 VAR_1->gr_name = VAR_0;
 if ((VAR_2 = FUNC_2(VAR_0, ':')) == ((void*)0))
  return (0);
 *VAR_2 = '\0';
 VAR_1->gr_passwd = VAR_2 + 1;
 if (*VAR_1->gr_passwd == ':')
  *VAR_1->gr_passwd = '\0';
 else {
  if ((VAR_2 = FUNC_2(VAR_2 + 1, ':')) == ((void*)0))
   return (0);
  *VAR_2 = '\0';
 }
 if (FUNC_1(VAR_2 + 1, "%u", &VAR_1->gr_gid) != 1)
  return (0);


 if ((VAR_2 = FUNC_2(VAR_2 + 1, ':')) == ((void*)0))
  return (0);
 VAR_0 = VAR_2 + 1;
 VAR_1->gr_mem = ((void*)0);
 VAR_3 = 0;
 do {
  VAR_1->gr_mem = FUNC_0(VAR_1->gr_mem, sizeof(*VAR_1->gr_mem) *
      (VAR_3 + 1));
  if (VAR_1->gr_mem == ((void*)0))
   return (0);


  do {
   VAR_1->gr_mem[VAR_3] = FUNC_3(&VAR_0, ",");
  } while (VAR_1->gr_mem[VAR_3] != ((void*)0) && *VAR_1->gr_mem[VAR_3] == '\0');
 } while (VAR_1->gr_mem[VAR_3++] != ((void*)0));

 return (1);
}
