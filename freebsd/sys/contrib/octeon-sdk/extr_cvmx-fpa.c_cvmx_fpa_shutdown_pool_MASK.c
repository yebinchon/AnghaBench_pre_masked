
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_2__ {int starting_element_count; void* base; int size; int name; } ;


 int FUNC_0 (char*,unsigned long long,int,unsigned long long,...) ;
 void* FUNC_1 (size_t) ;
 TYPE_1__* VAR_0 ;
 size_t FUNC_2 (void*) ;

uint64_t FUNC_3(uint64_t VAR_1)
{
    int VAR_2 = 0;
    int VAR_3 = 0;
    int VAR_4 = VAR_0[VAR_1].starting_element_count;
    uint64_t VAR_5 = FUNC_2(VAR_0[VAR_1].base);
    uint64_t VAR_6 = VAR_5 + VAR_0[VAR_1].size * VAR_4;

    VAR_3 = 0;
    while (1)
    {
        uint64_t VAR_7;
        void *VAR_8 = FUNC_1(VAR_1);
        if (!VAR_8)
            break;

        VAR_7 = FUNC_2(VAR_8);
        if ((VAR_7 >= VAR_5) && (VAR_7 < VAR_6) &&
            (((VAR_7 - VAR_5) % VAR_0[VAR_1].size) == 0))
        {
            VAR_3++;
        }
        else
        {
            FUNC_0("ERROR: cvmx_fpa_shutdown_pool: Illegal address 0x%llx in pool %s(%d)\n",
                   (unsigned long long)VAR_7, VAR_0[VAR_1].name, (int)VAR_1);
            VAR_2++;
        }
    }

    if (VAR_3 < VAR_4)
    {
        FUNC_0("ERROR: cvmx_fpa_shutdown_pool: Pool %s(%d) missing %d buffers\n",
               VAR_0[VAR_1].name, (int)VAR_1, VAR_4 - VAR_3);
    }
    else if (VAR_3 > VAR_4)
    {
        FUNC_0("ERROR: cvmx_fpa_shutdown_pool: Pool %s(%d) had %d duplicate buffers\n",
               VAR_0[VAR_1].name, (int)VAR_1, VAR_3 - VAR_4);
    }

    if (VAR_2)
    {
        FUNC_0("ERROR: cvmx_fpa_shutdown_pool: Pool %s(%d) started at 0x%llx, ended at 0x%llx, with a step of 0x%x\n",
               VAR_0[VAR_1].name, (int)VAR_1, (unsigned long long)VAR_5, (unsigned long long)VAR_6, (int)VAR_0[VAR_1].size);
        return -VAR_2;
    }
    else
        return VAR_4 - VAR_3;
}
