
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t tail; size_t head; int* q; int qcount; } ;
typedef TYPE_1__ kqueue ;


 size_t FUNC_0 (size_t) ;

__attribute__((used)) static int
FUNC_1(kqueue *VAR_0)
{
    int VAR_1;

    if (VAR_0->tail != VAR_0->head) {
 VAR_1 = VAR_0->q[VAR_0->head];
 VAR_0->head = FUNC_0(VAR_0->head);



 return VAR_1;
    }
    return -1;
}
