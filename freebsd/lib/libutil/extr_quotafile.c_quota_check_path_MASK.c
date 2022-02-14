
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; } ;
struct quotafile {scalar_t__ dev; } ;


 int FUNC_0 (char const*,struct stat*) ;

int
FUNC_1(const struct quotafile *VAR_0, const char *VAR_1)
{
 struct stat VAR_2;

 if (FUNC_0(VAR_1, &VAR_2) == -1)
  return (-1);
 return (VAR_2.st_dev == VAR_0->dev);
}
