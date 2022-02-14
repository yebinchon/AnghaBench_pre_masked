
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ KeyAccT ;


 int FUNC_0 (TYPE_1__*) ;

KeyAccT*
FUNC_1(
 KeyAccT *VAR_0
 )
{
 KeyAccT * VAR_1 = ((void*)0);
 if (VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0);
 }
 return VAR_1;
}
