
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct camq {TYPE_1__** queue_array; int entries; } ;
struct TYPE_3__ {scalar_t__ priority; } ;


 int FUNC_0 (TYPE_1__**,int,int ) ;
 int FUNC_1 (TYPE_1__**,int) ;

void
FUNC_2(struct camq *VAR_0, int VAR_1, u_int32_t VAR_2)
{
 if (VAR_2 > VAR_0->queue_array[VAR_1]->priority) {
  VAR_0->queue_array[VAR_1]->priority = VAR_2;
  FUNC_0(VAR_0->queue_array, VAR_1, VAR_0->entries);
 } else {

  VAR_0->queue_array[VAR_1]->priority = VAR_2;
  FUNC_1(VAR_0->queue_array, VAR_1);
 }
}
