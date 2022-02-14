
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mist {int key; } ;



__attribute__((used)) static int
FUNC_0(struct mist *VAR_0, struct mist *VAR_1)
{



 if (VAR_1->key > VAR_0->key)
  return 1;
 else if (VAR_1->key < VAR_0->key)
  return (-1);
 else
  return 0;

}
