
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewma {scalar_t__ internal; void* factor; void* weight; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

void FUNC_3(struct ewma *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 FUNC_0(!FUNC_2(VAR_2) || !FUNC_2(VAR_1));

 VAR_0->weight = FUNC_1(VAR_2);
 VAR_0->factor = FUNC_1(VAR_1);
 VAR_0->internal = 0;
}
