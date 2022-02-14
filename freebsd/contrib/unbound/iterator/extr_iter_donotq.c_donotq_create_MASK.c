
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_donotq {int region; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct iter_donotq*) ;
 int FUNC_2 () ;

struct iter_donotq*
FUNC_3(void)
{
 struct iter_donotq* VAR_0 = (struct iter_donotq*)FUNC_0(1,
  sizeof(struct iter_donotq));
 if(!VAR_0)
  return ((void*)0);
 VAR_0->region = FUNC_2();
 if(!VAR_0->region) {
  FUNC_1(VAR_0);
  return ((void*)0);
 }
 return VAR_0;
}
