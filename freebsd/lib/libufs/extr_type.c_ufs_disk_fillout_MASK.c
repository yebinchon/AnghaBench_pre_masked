
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uufsd {int dummy; } ;


 int FUNC_0 (struct uufsd*,char*) ;
 int FUNC_1 (struct uufsd*) ;
 int FUNC_2 (struct uufsd*) ;
 int FUNC_3 (struct uufsd*,char const*) ;

int
FUNC_4(struct uufsd *VAR_0, const char *VAR_1)
{
 if (FUNC_3(VAR_0, VAR_1) == -1) {
  return (-1);
 }
 if (FUNC_1(VAR_0) == -1) {
  FUNC_0(VAR_0, "could not read superblock to fill out disk");
  FUNC_2(VAR_0);
  return (-1);
 }
 return (0);
}
