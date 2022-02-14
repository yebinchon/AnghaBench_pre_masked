
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char* gr_name; char** gr_mem; scalar_t__ gr_gid; int * gr_passwd; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (struct group*,int ,int) ;
 void* FUNC_2 (char**,char*) ;
 unsigned long FUNC_3 (char*,char**,int) ;

int
FUNC_4(char *VAR_4, size_t VAR_5, struct group *VAR_6, char *VAR_7,
    size_t VAR_8, int *VAR_9)
{
 char *VAR_10, *VAR_11, *VAR_12, **VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 VAR_13 = (char **)FUNC_0(VAR_7);
 VAR_8 -= (char *)VAR_13 - VAR_7;
 VAR_15 = VAR_8 / sizeof(*VAR_13);
 if (VAR_15 <= 0 ||
     (VAR_6->gr_name = FUNC_2(&VAR_4, ":")) == ((void*)0) ||
     VAR_6->gr_name[0] == '\0' ||
     (VAR_6->gr_passwd = FUNC_2(&VAR_4, ":")) == ((void*)0) ||
     (VAR_10 = FUNC_2(&VAR_4, ":")) == ((void*)0) ||
     VAR_10[0] == '\0')
  return (VAR_1);
 VAR_11 = VAR_4;
 VAR_14 = FUNC_3(VAR_10, &VAR_10, 10);
 if (VAR_10[0] != '\0')
  return (VAR_1);
 VAR_6->gr_gid = (gid_t)VAR_14;
 VAR_6->gr_mem = VAR_13;
 while (VAR_15 > 1 && VAR_11 != ((void*)0)) {
  VAR_12 = FUNC_2(&VAR_11, ",");
  if (VAR_12 != ((void*)0) && *VAR_12 != '\0') {
   *VAR_13++ = VAR_12;
   VAR_15--;
  }
 }
 *VAR_13 = ((void*)0);
 if (VAR_11 == ((void*)0))
  return (VAR_3);
 else {
  *VAR_9 = VAR_0;
  return (VAR_2);
 }
}
