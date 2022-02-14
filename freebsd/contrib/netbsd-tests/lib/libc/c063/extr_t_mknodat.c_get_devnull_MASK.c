
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_rdev; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct stat*) ;

__attribute__((used)) static dev_t
FUNC_1(void)
{
 struct stat VAR_2;

 if (FUNC_0(VAR_1, &VAR_2) != 0)
  return VAR_0;

 return VAR_2.st_rdev;
}
