
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_3__ {size_t dtpq_last; void** dtpq_items; } ;
typedef TYPE_1__ dt_pq_t ;



void *
FUNC_0(dt_pq_t *VAR_0, uint_t *VAR_1)
{
 (*VAR_1)++;
 if (*VAR_1 >= VAR_0->dtpq_last)
  return (((void*)0));

 return (VAR_0->dtpq_items[*VAR_1]);
}
