
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int,struct stat*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,int ,unsigned int*) ;
 int FUNC_5 (int ) ;

unsigned
FUNC_6(int VAR_2)
{
 unsigned VAR_3;
 struct stat VAR_4;

 if (FUNC_2(VAR_2, &VAR_4) == -1)
  FUNC_3("fstat(): %s.", FUNC_5(VAR_1));
 if (FUNC_0(VAR_4.st_mode)) {
  if (FUNC_4(VAR_2, VAR_0, &VAR_3) == -1) {
   FUNC_3("Can't get sector size: %s.",
       FUNC_5(VAR_1));
  }
 } else if (FUNC_1(VAR_4.st_mode)) {
  VAR_3 = 512;
 } else {
  FUNC_3("Unsupported file system object.");
 }
 return (VAR_3);
}
