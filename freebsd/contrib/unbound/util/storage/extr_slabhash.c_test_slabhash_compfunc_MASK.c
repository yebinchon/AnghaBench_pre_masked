
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabhash_testkey {scalar_t__ id; } ;



int FUNC_0(void* VAR_0, void* VAR_1)
{
 struct slabhash_testkey* VAR_2 = (struct slabhash_testkey*)VAR_0;
 struct slabhash_testkey* VAR_3 = (struct slabhash_testkey*)VAR_1;
 if(VAR_2->id == VAR_3->id)
  return 0;
 if(VAR_2->id > VAR_3->id)
  return 1;
 return -1;
}
