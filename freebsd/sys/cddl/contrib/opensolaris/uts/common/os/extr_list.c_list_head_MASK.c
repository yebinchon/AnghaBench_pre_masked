
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int list_next; } ;
struct TYPE_7__ {TYPE_1__ list_head; } ;
typedef TYPE_2__ list_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (TYPE_2__*,int ) ;

void *
FUNC_2(list_t *VAR_0)
{
 if (FUNC_0(VAR_0))
  return (((void*)0));
 return (FUNC_1(VAR_0, VAR_0->list_head.list_next));
}
