
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dba_array {size_t ea; size_t eu; int flags; scalar_t__* em; void** ep; } ;
typedef size_t int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*) ;

void
FUNC_2(struct dba_array *VAR_1, int32_t VAR_2, void *VAR_3)
{
 FUNC_0(VAR_2 >= 0);
 FUNC_0(VAR_2 < VAR_1->ea);
 FUNC_0(VAR_2 <= VAR_1->eu);
 if (VAR_2 == VAR_1->eu)
  VAR_1->eu++;
 if (VAR_1->flags & VAR_0)
  VAR_3 = FUNC_1(VAR_3);
 VAR_1->ep[VAR_2] = VAR_3;
 VAR_1->em[VAR_2] = 0;
}
