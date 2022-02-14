
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mtime; scalar_t__ st_ctime; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char const*,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int ,char const*) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;

int
FUNC_5(
 const char * VAR_3,
 struct stat * VAR_4,
 int VAR_5,
 int VAR_6)
{
 FILE * VAR_7;
 struct stat VAR_8;
 int VAR_9;


 if ( !(VAR_3 && *VAR_3) )
  return VAR_0;


 if (0 != FUNC_4(VAR_3, &VAR_8)) {
  if (VAR_6)
   FUNC_3(VAR_1, "%s ('%s'): stat failed: %m",
    VAR_2, VAR_3);
  return VAR_0;
 }


 if (((void*)0) != VAR_4) {
  if (!VAR_5
   && VAR_4->st_mtime == VAR_8.st_mtime
   && VAR_4->st_ctime == VAR_8.st_ctime
     )
   return VAR_0;
  *VAR_4 = VAR_8;
 }
 if ((VAR_7 = FUNC_1(VAR_3, "r")) == ((void*)0)) {
  if (VAR_6)
   FUNC_3(VAR_1,
    "%s ('%s'): open failed: %m",
    VAR_2, VAR_3);
  return VAR_0;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_3, VAR_6);
 FUNC_0(VAR_7);
 return VAR_9;
}
