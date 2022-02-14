
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char* gr_name; char* gr_passwd; char** gr_mem; int gr_gid; } ;


 int FUNC_0 (int ) ;
 char** FUNC_1 (int,int) ;
 int FUNC_2 (struct group*,int ,int) ;
 void* FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct group *VAR_0, struct group const *VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 char **VAR_2;
 int VAR_3;

 FUNC_2(VAR_0, 0, sizeof(struct group));

 if (VAR_1->gr_name != ((void*)0)) {
  VAR_0->gr_name = FUNC_3(VAR_1->gr_name);
  FUNC_0(VAR_0->gr_name != ((void*)0));
 }

 if (VAR_1->gr_passwd != ((void*)0)) {
  VAR_0->gr_passwd = FUNC_3(VAR_1->gr_passwd);
  FUNC_0(VAR_0->gr_passwd != ((void*)0));
 }
 VAR_0->gr_gid = VAR_1->gr_gid;

 if (VAR_1->gr_mem != ((void*)0)) {
  VAR_3 = 0;
  for (VAR_2 = VAR_1->gr_mem; *VAR_2; ++VAR_2)
   ++VAR_3;

  VAR_0->gr_mem = FUNC_1(VAR_3 + 1, sizeof(char *));
  FUNC_0(VAR_0->gr_mem != ((void*)0));

  for (VAR_2 = VAR_1->gr_mem; *VAR_2; ++VAR_2) {
   VAR_0->gr_mem[VAR_2 - VAR_1->gr_mem] = FUNC_3(*VAR_2);
   FUNC_0(VAR_0->gr_mem[VAR_2 - VAR_1->gr_mem] != ((void*)0));
  }
 }
}
