
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

int FUNC_4(void)
{
    int VAR_0;
    int VAR_1;
    FUNC_1(0x0003, 0x0001);
    FUNC_1(0x0003, 0);







    FUNC_1(0x0000, 0x4010);
    FUNC_1(0x0000, 0x4014);
    FUNC_1(0x0004, 0x0140);
    FUNC_1(0x0009, 0);
    for (VAR_0 = 0; VAR_0 < 2;VAR_0++ )
    {
        VAR_1 = 0x500 * VAR_0;
        FUNC_2(0x3100 + VAR_1, 0x47f7b);
        FUNC_1(0x3005 + VAR_1, 0x0040);
        FUNC_1(0x3006 + VAR_1, 0);
    }
    for (VAR_0 = 0; VAR_0 < 2;VAR_0++ )
    {
        VAR_1 = 0x500 * VAR_0;
        int VAR_2 = 0;

        FUNC_1(0x3007 + VAR_1, 0x81c0 | (VAR_2 << 11));
        FUNC_1(0x3008 + VAR_1, 0x3600 | (VAR_2 << 4));
        FUNC_1(0x3000 + VAR_1, 0x0060);
        FUNC_1(0x3002 + VAR_1, 0x0040);
        FUNC_1(0x3003 + VAR_1, 0x0000);
        FUNC_1(0x30c2 + VAR_1, 0x0060);
        FUNC_1(0x300a + VAR_1, 0x0000);
        FUNC_1(0x3007 + VAR_1, 0x81c0 | (VAR_2 << 11));
        FUNC_1(0x3016 + VAR_1, 0x0010);
        FUNC_1(0x3008 + VAR_1, 0x3600 | (VAR_2 << 4));
        FUNC_1(0x3012 + VAR_1, 0x0010);
        FUNC_1(0x3007 + VAR_1, 0x8180 | (VAR_2 << 11));
        FUNC_1(0x3008 + VAR_1, 0xa200 | (VAR_2 << 4));

        FUNC_1(0x3090 + VAR_1, 0x0301);
    }
    FUNC_1(0x0004, 0x1fff);
    FUNC_1(0x0009, 0x007f);
    for (VAR_0 = 0; VAR_0 < 2;VAR_0++ )
    {
        VAR_1 = 0x500 * VAR_0;
        FUNC_2(0x3100 + VAR_1, 0x47f7c);

        FUNC_2(0x3114 + VAR_1, 0x25800000);
    }


    FUNC_3(100000000);



    FUNC_0(1, 3, 0, 0x8000);
    FUNC_0(5, 3, 0, 0x8000);


    return 1;

}
