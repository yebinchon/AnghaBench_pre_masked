
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char** gr_mem; char* gr_name; char* gr_passwd; int gr_gid; } ;


 char* FUNC_0 (char*,char const*) ;

__attribute__((used)) static struct group *
FUNC_1(const struct group *VAR_0, char *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4;
 struct group *VAR_5;

 VAR_5 = (struct group *)(void *)VAR_1;
 VAR_1 += sizeof(*VAR_5);
 if (VAR_3 != 0) {
  VAR_5->gr_mem = (char **)(void *)(VAR_1);
  VAR_1 += (VAR_3 + 1) * sizeof(*VAR_5->gr_mem);
 } else
  VAR_5->gr_mem = ((void*)0);
 if (VAR_0->gr_name != ((void*)0)) {
  VAR_5->gr_name = VAR_1;
  VAR_1 = FUNC_0(VAR_1, VAR_0->gr_name) + 1;
 } else
  VAR_5->gr_name = ((void*)0);
 if (VAR_0->gr_passwd != ((void*)0)) {
  VAR_5->gr_passwd = VAR_1;
  VAR_1 = FUNC_0(VAR_1, VAR_0->gr_passwd) + 1;
 } else
  VAR_5->gr_passwd = ((void*)0);
 VAR_5->gr_gid = VAR_0->gr_gid;
 VAR_4 = 0;

 if (VAR_0->gr_mem != ((void*)0)) {
  for (; VAR_0->gr_mem[VAR_4] != ((void*)0); VAR_4++) {
   VAR_5->gr_mem[VAR_4] = VAR_1;
   VAR_1 = FUNC_0(VAR_1, VAR_0->gr_mem[VAR_4]) + 1;
  }
 }

 if (VAR_2 != ((void*)0)) {
  VAR_5->gr_mem[VAR_4++] = VAR_1;
  VAR_1 = FUNC_0(VAR_1, VAR_2) + 1;
 }

 if (VAR_5->gr_mem != ((void*)0))
  VAR_5->gr_mem[VAR_4] = ((void*)0);

 return (VAR_5);
}
