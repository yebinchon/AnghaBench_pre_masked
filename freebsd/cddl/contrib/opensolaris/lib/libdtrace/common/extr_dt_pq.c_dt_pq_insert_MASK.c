
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_4__ {scalar_t__ dtpq_last; scalar_t__ dtpq_size; void** dtpq_items; } ;
typedef TYPE_1__ dt_pq_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t) ;

void
FUNC_2(dt_pq_t *VAR_0, void *VAR_1)
{
 uint_t VAR_2;

 FUNC_0(VAR_0->dtpq_last < VAR_0->dtpq_size);

 VAR_2 = VAR_0->dtpq_last++;
 VAR_0->dtpq_items[VAR_2] = VAR_1;

 while (VAR_2 > 1 && FUNC_1(VAR_0, VAR_2) < FUNC_1(VAR_0, VAR_2 / 2)) {
  void *VAR_3 = VAR_0->dtpq_items[VAR_2];
  VAR_0->dtpq_items[VAR_2] = VAR_0->dtpq_items[VAR_2 / 2];
  VAR_0->dtpq_items[VAR_2 / 2] = VAR_3;
  VAR_2 /= 2;
 }
}
