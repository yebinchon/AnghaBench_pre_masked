
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t tail; size_t head; int* q; scalar_t__ qcount; scalar_t__ max_qcount; int call_count; } ;
typedef TYPE_1__ kqueue ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;

__attribute__((used)) static int
FUNC_1(kqueue *VAR_2, int VAR_3)
{
    if (FUNC_0(VAR_2->tail) != VAR_2->head) {
 VAR_2->q[VAR_2->tail] = VAR_3;
 VAR_2->tail = FUNC_0(VAR_2->tail);






 return VAR_1;
    }
    return VAR_0;
}
