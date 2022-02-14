
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef int UINT32 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static UINT64 FUNC_1(UINT64 VAR_0, UINT64 VAR_1, UINT64 VAR_2)
{
    UINT32 VAR_3 = (UINT32)(VAR_1 >> 32),
           VAR_4 = (UINT32)VAR_1,
           VAR_5 = (UINT32)(VAR_0 >> 32),
           VAR_6 = (UINT32)VAR_0,
           VAR_7,
           VAR_8;
    UINT64 VAR_9,VAR_10,VAR_11;

    VAR_9 = FUNC_0(VAR_3, VAR_6) + FUNC_0(VAR_5, VAR_4);
    VAR_7 = (UINT32)VAR_9;
    VAR_8 = (UINT32)(VAR_9 >> 32);

    VAR_11 = (FUNC_0(VAR_3, VAR_5) + VAR_8) * 59 + FUNC_0(VAR_4, VAR_6);

    VAR_10 = ((UINT64)VAR_7 << 32);
    VAR_11 += VAR_10;
    if (VAR_11 < VAR_10)
        VAR_11 += 59;

    VAR_11 += VAR_2;
    if (VAR_11 < VAR_2)
        VAR_11 += 59;

    return VAR_11;
}
