
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;

void FUNC_1(struct ecore_hwfn * VAR_6,
    struct ecore_ptt *VAR_7,
    u8 VAR_8,
    u8 VAR_9,
    u16 VAR_10)
{
    u32 VAR_11, VAR_12;
    u32 * VAR_13;
    u16 VAR_14[VAR_1];
    u16 VAR_15 [VAR_1];


    VAR_12 = VAR_0 +
                VAR_2 * VAR_8 +
                VAR_9/VAR_1;


    VAR_9 %= VAR_1;

    for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11 ++)
    {
        if (VAR_11 == VAR_9)
        {
            VAR_14[VAR_11] = VAR_10;
            VAR_15[VAR_11] = 0xFFFF;
        }
        else
        {
            VAR_14[VAR_11] = 0;
            VAR_15[VAR_11] = 0;
        }
    }


    FUNC_0(VAR_6, VAR_7, VAR_3, VAR_12);

    VAR_13 = (u32*)VAR_15;
    FUNC_0(VAR_6, VAR_7, VAR_5, VAR_13[0]);
    FUNC_0(VAR_6, VAR_7, VAR_5 + 4, VAR_13[1]);
    FUNC_0(VAR_6, VAR_7, VAR_5 + 8, VAR_13[2]);
    FUNC_0(VAR_6, VAR_7, VAR_5 + 12, VAR_13[3]);

    VAR_13 = (u32*)VAR_14;
    FUNC_0(VAR_6, VAR_7, VAR_4, VAR_13[0]);
    FUNC_0(VAR_6, VAR_7, VAR_4 + 4, VAR_13[1]);
    FUNC_0(VAR_6, VAR_7, VAR_4 + 8, VAR_13[2]);
    FUNC_0(VAR_6, VAR_7, VAR_4 + 12, VAR_13[3]);
}
