
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct cvmx_zone {int dummy; } ;
typedef TYPE_2__* cvmx_zone_t ;
typedef int cvmx_arena_list_t ;
struct TYPE_4__ {int value; } ;
struct TYPE_5__ {unsigned int elem_size; unsigned int num_elem; char* name; unsigned int align; char* baseptr; int * freelist; TYPE_1__ lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,unsigned int,unsigned int) ;

cvmx_zone_t FUNC_2(char *VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4, cvmx_arena_list_t VAR_5, uint32_t VAR_6)
{
    unsigned int VAR_7;
    cvmx_zone_t VAR_8;

    VAR_8 = (cvmx_zone_t)FUNC_0(VAR_5, sizeof(struct cvmx_zone));

    if (((void*)0) == VAR_8)
    {
        return(((void*)0));
    }
    VAR_8->elem_size = VAR_2;
    VAR_8->num_elem = VAR_3;
    VAR_8->name = VAR_1;
    VAR_8->align = VAR_4;
    VAR_8->baseptr = ((void*)0);
    VAR_8->freelist = ((void*)0);
    VAR_8->lock.value = VAR_0;

    VAR_8->baseptr = (char *)FUNC_1(VAR_5, VAR_4, VAR_3 * VAR_2);
    if (((void*)0) == VAR_8->baseptr)
    {
        return(((void*)0));
    }

    for(VAR_7=0;VAR_7<VAR_3;VAR_7++)
    {
        *(void **)(VAR_8->baseptr + (VAR_7*VAR_2)) = VAR_8->freelist;
        VAR_8->freelist = (void *)(VAR_8->baseptr + (VAR_7*VAR_2));
    }

    return(VAR_8);

}
