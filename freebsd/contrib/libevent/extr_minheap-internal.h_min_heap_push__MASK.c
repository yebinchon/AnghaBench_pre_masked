
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct event {int dummy; } ;
struct TYPE_5__ {scalar_t__ n; } ;
typedef TYPE_1__ min_heap_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,struct event*) ;

int FUNC_2(min_heap_t* VAR_0, struct event* VAR_1)
{
 if (FUNC_0(VAR_0, VAR_0->n + 1))
  return -1;
 FUNC_1(VAR_0, VAR_0->n++, VAR_1);
 return 0;
}
