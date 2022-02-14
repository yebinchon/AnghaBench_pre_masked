
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {unsigned int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,struct stat*) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, unsigned int VAR_3)
{
 struct stat VAR_4;

 if (FUNC_0(VAR_2, &VAR_4) < 0)
  return VAR_1;

 if ((VAR_4.st_mode & VAR_3) == 0)
  return VAR_0;

 return 0;
}
