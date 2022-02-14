
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct magic_set {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct magic_set*) ;

__attribute__((used)) static int
FUNC_1(struct magic_set *VAR_1, int *VAR_2)
{
 if ((VAR_1->flags & VAR_0) == 0)
  return 1;
 if (FUNC_0(VAR_1) == -1)
  *VAR_2 = -1;
 return 0;
}
