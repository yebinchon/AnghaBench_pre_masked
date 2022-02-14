
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char* gr_name; char* gr_passwd; int gr_gid; char** gr_mem; } ;


 int FUNC_0 (char*,size_t,char*,...) ;

__attribute__((used)) static void
FUNC_1(struct group *VAR_0, char *VAR_1, size_t VAR_2)
{
 char **VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, "%s:%s:%d:",
  VAR_0->gr_name, VAR_0->gr_passwd, VAR_0->gr_gid);
 VAR_1 += VAR_4;
 if (VAR_4 > (int)VAR_2)
  return;
 VAR_2 -= VAR_4;

 if (VAR_0->gr_mem != ((void*)0)) {
  if (*(VAR_0->gr_mem) != ((void*)0)) {
   for (VAR_3 = VAR_0->gr_mem; *VAR_3; ++VAR_3) {
    VAR_4 = FUNC_0(VAR_1, VAR_2, "%s%s",
        VAR_3 == VAR_0->gr_mem ? "" : ",", *VAR_3);
    VAR_1 += VAR_4;
    if (VAR_4 > (int)VAR_2)
     return;
    VAR_2 -= VAR_4;

    if (VAR_2 == 0)
     return;
   }
  } else
   FUNC_0(VAR_1, VAR_2, "nomem");
 } else
  FUNC_0(VAR_1, VAR_2, "(null)");
}
