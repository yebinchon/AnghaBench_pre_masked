
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int,int ,char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

int
FUNC_5(char *VAR_3, int VAR_4)
{
 struct stat VAR_5;




 if (FUNC_1(VAR_3, &VAR_5) < 0)
  return(0);
 if (VAR_2)
  return(-1);

 if (FUNC_0(VAR_5.st_mode)) {




  if (FUNC_2(VAR_3) < 0) {
   if (VAR_4 == VAR_0)
    return(1);
   FUNC_3(1,VAR_1,"Unable to remove directory %s", VAR_3);
   return(-1);
  }
  return(0);
 }




 if (FUNC_4(VAR_3) < 0) {
  FUNC_3(1, VAR_1, "Could not unlink %s", VAR_3);
  return(-1);
 }
 return(0);
}
