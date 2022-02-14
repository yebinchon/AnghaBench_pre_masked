
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* base_ptr; int size; TYPE_1__* region; } ;
typedef TYPE_2__ cvmx_flash_t ;
struct TYPE_4__ {int num_blocks; int block_size; int start_offset; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int,int,int) ;
 scalar_t__ FUNC_2 (int,int,int,void const*) ;
 TYPE_2__* VAR_1 ;

int FUNC_3(void *VAR_2, const void *VAR_3, int VAR_4)
{
    int VAR_5;



    for (VAR_5=0; VAR_5<VAR_0; VAR_5++)
    {
        if ((VAR_1[VAR_5].base_ptr <= VAR_2) &&
            (VAR_1[VAR_5].base_ptr + VAR_1[VAR_5].size >= VAR_2 + VAR_4))
            break;
    }

    if (VAR_5 == VAR_0)
    {
        FUNC_0("cvmx-flash: Unable to find chip that contains address %p\n", VAR_2);
        return -1;
    }

    cvmx_flash_t *VAR_6 = VAR_1 + VAR_5;


    void *VAR_7 = VAR_6->base_ptr;
    int VAR_8 = 0;
    while (VAR_7 + VAR_6->region[VAR_8].num_blocks * VAR_6->region[VAR_8].block_size <= VAR_2)
    {
        VAR_8++;
        VAR_7 = VAR_6->base_ptr + VAR_6->region[VAR_8].start_offset;
    }


    int VAR_9 = (VAR_2 - VAR_7) / VAR_6->region[VAR_8].block_size;


    if (VAR_2 != VAR_7 + VAR_9*VAR_6->region[VAR_8].block_size)
    {
        FUNC_0("cvmx-flash: Write address not aligned on a block boundry\n");
        return -1;
    }


    while (VAR_4 > 0)
    {

        if (FUNC_1(VAR_5, VAR_8, VAR_9))
            return -1;

        if (FUNC_2(VAR_5, VAR_8, VAR_9, VAR_3))
            return -1;


        VAR_3 += VAR_6->region[VAR_8].block_size;
        VAR_4 -= VAR_6->region[VAR_8].block_size;
        VAR_9++;
        if (VAR_9 >= VAR_6->region[VAR_8].num_blocks)
        {
            VAR_9 = 0;
            VAR_8++;
        }
    }

    return 0;
}
