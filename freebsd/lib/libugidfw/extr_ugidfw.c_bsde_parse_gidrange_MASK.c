
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {unsigned long gr_gid; } ;
typedef unsigned long gid_t ;


 struct group* FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t,char*,char*) ;
 char* FUNC_2 (char**,char*) ;
 unsigned long FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_0, gid_t *VAR_1, gid_t *VAR_2,
    size_t VAR_3, char *VAR_4){
 struct group *VAR_5;
 gid_t VAR_6, VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;
 unsigned long VAR_11;

 VAR_9 = VAR_0;
 VAR_8 = FUNC_2(&VAR_9, ":");

 VAR_5 = FUNC_0(VAR_8);
 if (VAR_5 != ((void*)0))
  VAR_6 = VAR_5->gr_gid;
 else {
  VAR_11 = FUNC_3(VAR_8, &VAR_10, 10);
  if (*VAR_10 != '\0') {
   FUNC_1(VAR_4, VAR_3, "invalid gid: '%s'", VAR_8);
   return (-1);
  }
  VAR_6 = VAR_11;
 }

 if (VAR_9 == ((void*)0)) {
  *VAR_2 = *VAR_1 = VAR_6;
  return (0);
 }

 VAR_5 = FUNC_0(VAR_9);
 if (VAR_5 != ((void*)0))
  VAR_7 = VAR_5->gr_gid;
 else {
  VAR_11 = FUNC_3(VAR_9, &VAR_10, 10);
  if (*VAR_10 != '\0') {
   FUNC_1(VAR_4, VAR_3, "invalid gid: '%s'", VAR_9);
   return (-1);
  }
  VAR_7 = VAR_11;
 }

 *VAR_1 = VAR_6;
 *VAR_2 = VAR_7;

 return (0);
}
