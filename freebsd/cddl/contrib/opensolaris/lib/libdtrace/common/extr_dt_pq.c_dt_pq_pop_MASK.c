
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int dtpq_last; int ** dtpq_items; } ;
typedef TYPE_1__ dt_pq_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

void *
FUNC_2(dt_pq_t *VAR_0)
{
 uint_t VAR_1 = 1;
 void *VAR_2;

 FUNC_0(VAR_0->dtpq_last > 0);

 if (VAR_0->dtpq_last == 1)
  return (((void*)0));

 VAR_2 = VAR_0->dtpq_items[1];

 VAR_0->dtpq_last--;
 VAR_0->dtpq_items[1] = VAR_0->dtpq_items[VAR_0->dtpq_last];
 VAR_0->dtpq_items[VAR_0->dtpq_last] = ((void*)0);

 for (;;) {
  uint_t VAR_3 = VAR_1 * 2;
  uint_t VAR_4 = VAR_1 * 2 + 1;
  uint_t VAR_5;
  uint64_t VAR_6;
  void *VAR_7;

  if (VAR_3 >= VAR_0->dtpq_last)
   break;

  if (VAR_4 >= VAR_0->dtpq_last) {
   VAR_5 = VAR_3;
   VAR_6 = FUNC_1(VAR_0, VAR_3);
  } else {
   uint64_t VAR_8 = FUNC_1(VAR_0, VAR_3);
   uint64_t VAR_9 = FUNC_1(VAR_0, VAR_4);

   if (VAR_8 < VAR_9) {
    VAR_5 = VAR_3;
    VAR_6 = VAR_8;
   } else {
    VAR_5 = VAR_4;
    VAR_6 = VAR_9;
   }
  }

  if (VAR_6 >= FUNC_1(VAR_0, VAR_1))
   break;

  VAR_7 = VAR_0->dtpq_items[VAR_1];
  VAR_0->dtpq_items[VAR_1] = VAR_0->dtpq_items[VAR_5];
  VAR_0->dtpq_items[VAR_5] = VAR_7;

  VAR_1 = VAR_5;
 }

 return (VAR_2);
}
