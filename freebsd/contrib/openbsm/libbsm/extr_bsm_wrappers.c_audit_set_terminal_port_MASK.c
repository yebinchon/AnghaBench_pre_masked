
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_rdev; } ;
typedef int dev_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct stat*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int ) ;

int
FUNC_4(dev_t *VAR_8)
{
 struct stat VAR_9;

 if (VAR_8 == ((void*)0))
  return (VAR_5);




 *VAR_8 = -1;



 if (FUNC_0(VAR_3, &VAR_9) != 0) {
  if (VAR_4 != VAR_0) {
   FUNC_3(VAR_1, "fstat() failed (%s)",
       FUNC_2(VAR_4));
   return (VAR_7);
  }
  if (FUNC_1("/dev/console", &VAR_9) != 0) {
   FUNC_3(VAR_1, "stat() failed (%s)",
       FUNC_2(VAR_4));
   return (VAR_7);
  }
 }
 *VAR_8 = VAR_9.st_rdev;
 return (VAR_6);
}
