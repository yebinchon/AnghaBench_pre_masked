
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {int entsize; int sz; int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int
FUNC_1(struct section *VAR_1, int *VAR_2)
{
 if (VAR_1->entsize == 0) {
  FUNC_0("section %s has entry size 0", VAR_1->name);
  return (0);
 } else if (VAR_1->sz / VAR_1->entsize > VAR_0) {
  FUNC_0("section %s has invalid section count", VAR_1->name);
  return (0);
 }
 *VAR_2 = (int)(VAR_1->sz / VAR_1->entsize);
 return (1);
}
