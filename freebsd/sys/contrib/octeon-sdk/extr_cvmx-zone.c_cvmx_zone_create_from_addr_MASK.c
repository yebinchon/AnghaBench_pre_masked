
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct cvmx_zone {int dummy; } ;
typedef TYPE_2__* cvmx_zone_t ;
struct TYPE_4__ {int value; } ;
struct TYPE_5__ {int elem_size; int num_elem; char* name; char* baseptr; int * freelist; TYPE_1__ lock; scalar_t__ align; } ;


 int VAR_0 ;

cvmx_zone_t FUNC_0(char *VAR_1, uint32_t VAR_2, uint32_t VAR_3,
                             void* VAR_4, uint64_t VAR_5, uint32_t VAR_6)
{
    cvmx_zone_t VAR_7;
    unsigned int VAR_8;

    if ((unsigned long)VAR_4 & (sizeof(void *) -1))
    {
        return(((void*)0));
    }
    if (VAR_5 < sizeof(struct cvmx_zone) + VAR_2 * VAR_3)
    {
        return(((void*)0));
    }

    VAR_7 = (cvmx_zone_t) ((char *)VAR_4 + VAR_2 * VAR_3);
    VAR_7->elem_size = VAR_2;
    VAR_7->num_elem = VAR_3;
    VAR_7->name = VAR_1;
    VAR_7->align = 0;
    VAR_7->baseptr = ((void*)0);
    VAR_7->freelist = ((void*)0);
    VAR_7->lock.value = VAR_0;

    VAR_7->baseptr = (char *)VAR_4;

    for(VAR_8=0;VAR_8<VAR_3;VAR_8++)
    {
        *(void **)(VAR_7->baseptr + (VAR_8*VAR_2)) = VAR_7->freelist;
        VAR_7->freelist = (void *)(VAR_7->baseptr + (VAR_8*VAR_2));
    }

    return(VAR_7);

}
