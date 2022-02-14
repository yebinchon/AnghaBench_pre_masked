
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* cvmx_zone_t ;
struct TYPE_3__ {unsigned long num_elem; unsigned long elem_size; int lock; void* freelist; int * baseptr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(cvmx_zone_t VAR_0, void *VAR_1)
{

    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_0->baseptr != ((void*)0));
    FUNC_0((unsigned long)VAR_1 - (unsigned long)VAR_0->baseptr < VAR_0->num_elem * VAR_0->elem_size);

    FUNC_1(&VAR_0->lock);
 *(void **)VAR_1 = VAR_0->freelist;
 VAR_0->freelist = VAR_1;
    FUNC_2(&VAR_0->lock);
}
