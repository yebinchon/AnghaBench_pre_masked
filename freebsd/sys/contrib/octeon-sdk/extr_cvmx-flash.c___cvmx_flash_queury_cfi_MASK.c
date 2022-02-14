
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct TYPE_4__ {int is_16bit; int vendor; unsigned long long write_timeout; unsigned long long erase_timeout; int size; int num_regions; TYPE_2__* region; int * base_ptr; } ;
typedef TYPE_1__ cvmx_flash_t ;
struct TYPE_5__ {int start_offset; unsigned int num_blocks; int block_size; } ;
typedef TYPE_2__ cvmx_flash_region_t ;





 int VAR_0 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int,int,int,...) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_5(int VAR_2, void *VAR_3)
{
    int VAR_4;
    cvmx_flash_t *VAR_5 = VAR_1 + VAR_2;


    VAR_5->base_ptr = VAR_3;
    VAR_5->is_16bit = 1;


    FUNC_2(VAR_2, 0x00, 0xf0);
    FUNC_2(VAR_2, 0x55, 0x98);


    if ((FUNC_0(VAR_2, 0x10) != 'Q') ||
        (FUNC_0(VAR_2, 0x11) != 'R') ||
        (FUNC_0(VAR_2, 0x12) != 'Y'))
    {
        VAR_5->base_ptr = ((void*)0);
        return -1;
    }


    VAR_5->vendor = FUNC_1(VAR_2, 0x13);



    VAR_5->write_timeout = 1ull << (FUNC_0(VAR_2, 0x1f) +
                                    FUNC_0(VAR_2, 0x23));



    VAR_5->erase_timeout = 1ull << (FUNC_0(VAR_2, 0x21) +
                                    FUNC_0(VAR_2, 0x25));


    VAR_5->size = 1<<FUNC_0(VAR_2, 0x27);


    VAR_5->num_regions = FUNC_0(VAR_2, 0x2c);

    int VAR_6 = 0;

    for (VAR_4=0; VAR_4<VAR_5->num_regions; VAR_4++)
    {
        cvmx_flash_region_t *VAR_7 = VAR_5->region + VAR_4;
        VAR_7->start_offset = VAR_6;



        uint16_t VAR_8 = FUNC_1(VAR_2, 0x2d + VAR_4*4);
        VAR_7->num_blocks = 1u + VAR_8;




        uint16_t VAR_9 = FUNC_1(VAR_2, 0x2d + VAR_4*4 + 2);
        if (VAR_9 == 0)
            VAR_7->block_size = 128;
        else
            VAR_7->block_size = 256u * VAR_9;

        VAR_6 += VAR_7->block_size * VAR_7->num_blocks;
    }


    switch (VAR_1[VAR_2].vendor)
    {
        case 130:
            FUNC_2(VAR_2, 0x00, 0xf0);
        case 128:
        case 129:
            FUNC_2(VAR_2, 0x00, 0xff);
            break;
    }


    VAR_5->write_timeout *= FUNC_3(VAR_0) / 1000000;
    VAR_5->erase_timeout *= FUNC_3(VAR_0) / 1000;
    return 0;
}
