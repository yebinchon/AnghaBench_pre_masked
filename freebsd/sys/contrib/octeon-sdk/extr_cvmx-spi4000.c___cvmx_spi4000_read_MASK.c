
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int,int,int *) ;
 int FUNC_4 (int ,int ,int ,int,int,int) ;

__attribute__((used)) static uint32_t FUNC_5(int VAR_4, int VAR_5)
{
    int VAR_6;
    uint64_t VAR_7;

    FUNC_4(0, FUNC_0(VAR_4), VAR_2, 2, 1, VAR_5);

    VAR_6 = FUNC_2(FUNC_0(VAR_4), VAR_0);
    while ((VAR_6 == 1) || (VAR_6 == 0xff))
        VAR_6 = FUNC_2(FUNC_0(VAR_4), VAR_1);

    if (VAR_6)
    {
        FUNC_1("SPI4000: read failed with %d\n", VAR_6);
        return 0;
    }

    VAR_6 = FUNC_3(0, FUNC_0(VAR_4), VAR_3, 4, 1, &VAR_7);
    if (VAR_6 != 4)
    {
        FUNC_1("SPI4000: read failed with %d\n", VAR_6);
        return 0;
    }

    return VAR_7;
}
