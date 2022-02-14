
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_dev; int st_ino; } ;
typedef int key_t ;


 scalar_t__ FUNC_0 (char const*,struct stat*) ;

key_t
FUNC_1(const char *VAR_0, int VAR_1)
{
 struct stat VAR_2;

 if (FUNC_0(VAR_0, &VAR_2) < 0)
  return (key_t)-1;

 return ((key_t)((unsigned int)VAR_1 << 24 | (VAR_2.st_dev & 0xff) << 16 |
     (VAR_2.st_ino & 0xffff)));
}
