
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int rx_buffer ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,int,int*) ;
 int FUNC_7 (int,int ,int) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int,int ,int,int ,int,int,int,int,int,int) ;
 int FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (int,char*,int) ;

int FUNC_15(int VAR_7, int VAR_8, int VAR_9,
                            int VAR_10, uint8_t VAR_11, uint32_t VAR_12,
                            uint32_t *VAR_13)
{
    if (VAR_9 == -1)
    {
        int VAR_14 = FUNC_6(VAR_7, VAR_12, VAR_13);

        if ((VAR_14 == 0) && (VAR_6[VAR_7].flags & VAR_2))
            FUNC_10("SRIO%d: Local read [0x%06x] <= 0x%08x\n", VAR_7, (unsigned int)VAR_12, (unsigned int)*VAR_13);

        return VAR_14;
    }
    else
    {
        if (FUNC_5(VAR_5))
        {
            int VAR_15;
            uint32_t VAR_16 = 0;
            uint32_t VAR_17;
            uint64_t VAR_18;
            char VAR_19[64];


            if (VAR_6[VAR_7].flags & VAR_2)
                FUNC_10("SRIO%d: Remote read [id=0x%04x hop=%3d offset=0x%06x] <= ", VAR_7, VAR_9, VAR_11, (unsigned int)VAR_12);


            if (VAR_8)
                FUNC_6(VAR_7, FUNC_4(VAR_7), &VAR_17);
            else
                FUNC_6(VAR_7, FUNC_3(VAR_7), &VAR_17);

            if (VAR_10)
            {

                VAR_17 &= 0xffff;


                FUNC_7(VAR_7, FUNC_1(VAR_7), 11<<16);

                VAR_16 |= VAR_1 << 30;
                VAR_16 |= 1 << 28;
                VAR_16 |= 0x8 << 24;
                VAR_16 |= VAR_9 << 8;
                VAR_16 |= VAR_17 >> 8;
                FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_16);
                VAR_16 = 0;
                VAR_16 |= VAR_17 << 24;
                VAR_16 |= 0 << 20;
                VAR_16 |= 8 << 16;
                VAR_16 |= 0xc0 << 8;
                VAR_16 |= VAR_11;
                FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_16);
                VAR_16 = 0;
                VAR_16 |= VAR_12 << 8;
                FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_16);
            }
            else
            {

                VAR_17 = (VAR_17 >> 16) & 0xff;


                FUNC_7(VAR_7, FUNC_1(VAR_7), 9<<16);

                VAR_16 |= VAR_1 << 30;
                VAR_16 |= 0 << 28;
                VAR_16 |= 0x8 << 24;
                VAR_16 |= VAR_9 << 16;
                VAR_16 |= VAR_17 << 8;
                VAR_16 |= 0 << 4;
                VAR_16 |= 8 << 0;
                FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_16);
                VAR_16 = 0;
                VAR_16 |= 0xc0 << 24;
                VAR_16 |= VAR_11 << 16;
                VAR_16 |= VAR_12 >> 8;
                FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_16);
                VAR_16 = 0;
                VAR_16 |= VAR_12 << 24;
                FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_16);
            }

            VAR_18 = FUNC_9(VAR_0)/10 + FUNC_8(VAR_0);
            do
            {
                VAR_15 = FUNC_14(VAR_7, VAR_19, sizeof(VAR_19));
                if ((VAR_15 == 0) && (FUNC_8(VAR_0) > VAR_18))
                {
                    if (VAR_6[VAR_7].flags & VAR_2)
                        FUNC_10("timeout\n");
                    VAR_15 = -1;
                }
            } while (VAR_15 == 0);

            if (VAR_15 == ((VAR_10) ? 23 : 19))
            {
                if (VAR_10)
                {
                    if (VAR_12 & 4)
                        *VAR_13 = *(uint32_t*)(VAR_19 + 15);
                    else
                        *VAR_13 = *(uint32_t*)(VAR_19 + 11);
                }
                else
                {
                    if (VAR_12 & 4)
                        *VAR_13 = *(uint32_t*)(VAR_19 + 13);
                    else
                        *VAR_13 = *(uint32_t*)(VAR_19 + 9);
                }
                if (VAR_6[VAR_7].flags & VAR_2)
                    FUNC_10("0x%08x\n", (unsigned int)*VAR_13);
                VAR_15 = 0;
            }
            else
            {
                *VAR_13 = 0xffffffff;
                VAR_15 = -1;
            }

            return VAR_15;
        }
        else
        {

            uint64_t VAR_20;
            VAR_20 = FUNC_12(VAR_7,
                VAR_4, VAR_1,
                VAR_3, VAR_1,
                VAR_8, VAR_9, VAR_10, VAR_12 + (VAR_11<<24), 4);
            if (!VAR_20)
                return -1;

            if (VAR_6[VAR_7].flags & VAR_2)
                FUNC_10("SRIO%d: Remote read [id=0x%04x hop=%3d offset=0x%06x] <= ", VAR_7, VAR_9, VAR_11, (unsigned int)VAR_12);


            *VAR_13 = FUNC_11(FUNC_0(VAR_20));
            FUNC_13(VAR_20, 4);

            if (VAR_6[VAR_7].flags & VAR_2)
                FUNC_10("0x%08x\n", (unsigned int)*VAR_13);

            return 0;



        }
    }
}
