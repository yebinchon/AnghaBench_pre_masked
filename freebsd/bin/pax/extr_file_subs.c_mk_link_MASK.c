
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; int st_gid; int st_uid; int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 int VAR_2 ;
 int FUNC_4 (int,char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int,int,char*,char*,...) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(char *VAR_3, struct stat *VAR_4, char *VAR_5,
 int VAR_6)
{
 struct stat VAR_7;
 int VAR_8;





 if (FUNC_3(VAR_5, &VAR_7) == 0) {
  if (VAR_1)
   return(0);




  if ((VAR_4->st_dev==VAR_7.st_dev)&&(VAR_4->st_ino == VAR_7.st_ino)) {
   FUNC_4(1, "Unable to link file %s to itself", VAR_3);
   return(-1);
  }




  if (FUNC_0(VAR_7.st_mode)) {
   if (FUNC_5(VAR_5) < 0) {
    FUNC_6(1, VAR_0, "Unable to remove %s", VAR_5);
    return(-1);
   }
  } else if (FUNC_7(VAR_5) < 0) {
   if (!VAR_6) {
    FUNC_6(1, VAR_0, "Unable to remove %s", VAR_5);
    return(-1);
   }
   return(1);
  }
 }






 for (;;) {
  if (FUNC_2(VAR_3, VAR_5) == 0)
   break;
  VAR_8 = VAR_0;
  if (!VAR_2 && FUNC_1(VAR_5, VAR_4->st_uid, VAR_4->st_gid) == 0)
   continue;
  if (!VAR_6) {
   FUNC_6(1, VAR_8, "Could not link to %s from %s", VAR_3,
       VAR_5);
   return(-1);
  }
  return(1);
 }




 return(0);
}
