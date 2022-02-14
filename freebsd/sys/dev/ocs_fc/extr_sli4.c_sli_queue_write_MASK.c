
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sli4_t ;
struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ sli4_queue_t ;
typedef int int32_t ;


 int FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int32_t
FUNC_3(sli4_t *VAR_0, sli4_queue_t *VAR_1, uint8_t *VAR_2)
{
 int32_t VAR_3;

 FUNC_1(&VAR_1->lock);
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_1->lock);

 return VAR_3;
}
