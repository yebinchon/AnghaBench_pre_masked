
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int vendor; scalar_t__ erase_timeout; TYPE_1__* region; } ;
struct TYPE_3__ {int start_offset; int block_size; } ;





 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

int FUNC_7(int VAR_2, int VAR_3, int VAR_4)
{
    FUNC_5(&VAR_1);





    int VAR_5 = VAR_0[VAR_2].region[VAR_3].start_offset +
                VAR_4 * VAR_0[VAR_2].region[VAR_3].block_size;

    switch (VAR_0[VAR_2].vendor)
    {
        case 130:
        {

            FUNC_2(VAR_2, 0x00, 0xf0);
            FUNC_2(VAR_2, 0x555, 0xaa);
            FUNC_2(VAR_2, 0x2aa, 0x55);
            FUNC_2(VAR_2, 0x555, 0x80);
            FUNC_2(VAR_2, 0x555, 0xaa);
            FUNC_2(VAR_2, 0x2aa, 0x55);
            FUNC_1(VAR_2, VAR_5, 0x30);


            uint8_t VAR_6 = FUNC_0(VAR_2, VAR_5);
            uint64_t VAR_7 = FUNC_4();
            while (1)
            {


                uint8_t VAR_8 = VAR_6;
                VAR_6 = FUNC_0(VAR_2, VAR_5);
                uint8_t VAR_9 = VAR_6 ^ VAR_8;


                if (VAR_9 & (1<<6))
                {

                    if (VAR_6 & (1<<5))
                    {

                        VAR_8 = FUNC_0(VAR_2, VAR_5);
                        VAR_6 = FUNC_0(VAR_2, VAR_5);
                        VAR_9 = VAR_6 ^ VAR_8;


                        if (VAR_9 & (1<<6))
                        {
                            FUNC_3("cvmx-flash: Hardware timeout erasing block\n");
                            FUNC_6(&VAR_1);
                            return -1;
                        }
                        else
                            break;
                    }
                }
                else
                    break;

                if (FUNC_4() > VAR_7 + VAR_0[VAR_2].erase_timeout)
                {
                    FUNC_3("cvmx-flash: Timeout erasing block\n");
                    FUNC_6(&VAR_1);
                    return -1;
                }
            }

            FUNC_2(VAR_2, 0x00, 0xf0);
            FUNC_6(&VAR_1);
            return 0;
        }
        case 128:
        case 129:
        {

            FUNC_2(VAR_2, 0x00, 0xff);
            FUNC_1(VAR_2, VAR_5, 0x20);
            FUNC_1(VAR_2, VAR_5, 0xd0);


            uint8_t VAR_10 = FUNC_0(VAR_2, VAR_5);
            uint64_t VAR_11 = FUNC_4();
            while ((VAR_10 & 0x80) == 0)
            {
                if (FUNC_4() > VAR_11 + VAR_0[VAR_2].erase_timeout)
                {
                    FUNC_3("cvmx-flash: Timeout erasing block\n");
                    FUNC_6(&VAR_1);
                    return -1;
                }
                VAR_10 = FUNC_0(VAR_2, VAR_5);
            }


            if (VAR_10 & 0x7f)
            {
                FUNC_3("cvmx-flash: Hardware failure erasing block\n");
                FUNC_6(&VAR_1);
                return -1;
            }

            FUNC_2(VAR_2, 0x00, 0xff);
            FUNC_6(&VAR_1);
            return 0;
        }
    }

    FUNC_3("cvmx-flash: Unsupported flash vendor\n");
    FUNC_6(&VAR_1);
    return -1;
}
