
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
 int FUNC_6 (int,int ,int*) ;
 int FUNC_7 (int,int,int) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (int,int ,int,int ,int,int,int,int,int,int) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (int ,int) ;

int FUNC_15(int VAR_7, int VAR_8, int VAR_9,
                             int VAR_10, uint8_t VAR_11, uint32_t VAR_12,
                             uint32_t VAR_13)
{
    if (VAR_9 == -1)
    {
        if (VAR_6[VAR_7].flags & VAR_2)
            FUNC_10("SRIO%d: Local write[0x%06x] => 0x%08x\n", VAR_7, (unsigned int)VAR_12, (unsigned int)VAR_13);

        return FUNC_7(VAR_7, VAR_12, VAR_13);
    }
    else
    {
        if (FUNC_5(VAR_5))
        {
            int VAR_14;
            uint32_t VAR_15 = 0;
            uint32_t VAR_16;
            uint64_t VAR_17;
            char VAR_18[64];


            if (VAR_6[VAR_7].flags & VAR_2)
                FUNC_10("SRIO%d: Remote write[id=0x%04x hop=%3d offset=0x%06x] => 0x%08x\n", VAR_7, VAR_9, VAR_11, (unsigned int)VAR_12, (unsigned int)VAR_13);


            if (VAR_8)
                FUNC_6(VAR_7, FUNC_4(VAR_7), &VAR_16);
            else
                FUNC_6(VAR_7, FUNC_3(VAR_7), &VAR_16);

            if (VAR_10)
            {

                VAR_16 &= 0xffff;


                FUNC_7(VAR_7, FUNC_1(VAR_7), 19<<16);

                VAR_15 |= VAR_1 << 30;
                VAR_15 |= 1 << 28;
                VAR_15 |= 0x8 << 24;
                VAR_15 |= VAR_9 << 8;
                VAR_15 |= VAR_16 >> 8;
                FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                VAR_15 = 0;
                VAR_15 |= VAR_16 << 24;
                VAR_15 |= 1 << 20;
                VAR_15 |= 8 << 16;
                VAR_15 |= 0xc0 << 8;
                VAR_15 |= VAR_11;
                FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                VAR_15 = 0;
                VAR_15 |= VAR_12 << 8;
                if ((VAR_12 & 4) == 0)
                    VAR_15 |= 0xff & (VAR_13 >> 24);
                FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                if (VAR_12 & 4)
                {
                    VAR_15 = 0xff & (VAR_13 >> 24);
                    FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                    VAR_15 = VAR_13 << 8;
                    FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                }
                else
                {
                    VAR_15 = VAR_13 << 8;
                    FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                    FUNC_7(VAR_7, FUNC_2(VAR_7), 0);
                }
            }
            else
            {

                VAR_16 = (VAR_16 >> 16) & 0xff;


                FUNC_7(VAR_7, FUNC_1(VAR_7), 17<<16);

                VAR_15 |= VAR_1 << 30;
                VAR_15 |= 0 << 28;
                VAR_15 |= 0x8 << 24;
                VAR_15 |= VAR_9 << 16;
                VAR_15 |= VAR_16 << 8;
                VAR_15 |= 1 << 4;
                VAR_15 |= 8 << 0;
                FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                VAR_15 = 0;
                VAR_15 |= 0xc0 << 24;
                VAR_15 |= VAR_11 << 16;
                VAR_15 |= VAR_12 >> 8;
                FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                VAR_15 = 0;
                VAR_15 |= VAR_12 << 24;
                if (VAR_12 & 4)
                {
                    FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                    VAR_15 = VAR_13 >> 8;
                    FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                    VAR_15 = VAR_13 << 24;
                    FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                }
                else
                {
                    VAR_15 |= VAR_13 >> 8;
                    FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                    VAR_15 = VAR_13 << 24;
                    FUNC_7(VAR_7, FUNC_2(VAR_7), VAR_15);
                    FUNC_7(VAR_7, FUNC_2(VAR_7), 0);
                }
            }

            VAR_17 = FUNC_9(VAR_0)/10 + FUNC_8(VAR_0);
            do
            {
                VAR_14 = FUNC_13(VAR_7, VAR_18, sizeof(VAR_18));
                if ((VAR_14 == 0) && (FUNC_8(VAR_0) > VAR_17))
                {
                    if (VAR_6[VAR_7].flags & VAR_2)
                        FUNC_10("timeout\n");
                    VAR_14 = -1;
                }
            } while (VAR_14 == 0);

            if (VAR_14 == ((VAR_10) ? 15 : 11))
                VAR_14 = 0;
            else
            {
                FUNC_10("SRIO%d: Remote write failed\n", VAR_7);
                VAR_14 = -1;
            }

            return VAR_14;
        }
        else
        {

            uint64_t VAR_19 = FUNC_11(VAR_7,
                    VAR_4, VAR_1,
                    VAR_3, VAR_1,
                    VAR_8, VAR_9, VAR_10, VAR_12 + (VAR_11<<24), 4);
            if (!VAR_19)
                return -1;

            if (VAR_6[VAR_7].flags & VAR_2)
                FUNC_10("SRIO%d: Remote write[id=0x%04x hop=%3d offset=0x%06x] => 0x%08x\n", VAR_7, VAR_9, VAR_11, (unsigned int)VAR_12, (unsigned int)VAR_13);


            FUNC_14(FUNC_0(VAR_19), VAR_13);
            return FUNC_12(VAR_19, 4);



        }
    }
}
