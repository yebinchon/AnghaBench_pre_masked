
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

void FUNC_3(struct ecore_hwfn *VAR_11,
 struct ecore_ptt *VAR_12,
 bool VAR_13,
 bool VAR_14)
{
 u32 VAR_15;


 VAR_15 = FUNC_1(VAR_11, VAR_12, VAR_7);
 FUNC_0(VAR_15, VAR_8, VAR_13);
 FUNC_0(VAR_15, VAR_9, VAR_14);
 FUNC_2(VAR_11, VAR_12, VAR_7, VAR_15);
    if (VAR_15)
    {
        VAR_15 = FUNC_1(VAR_11, VAR_12, VAR_10);


        if (VAR_15 == (u32)VAR_5)
        {
            FUNC_2(VAR_11, VAR_12, VAR_10, (u32)VAR_6);
        }
    }


 VAR_15 = FUNC_1(VAR_11, VAR_12, VAR_2);
 FUNC_0(VAR_15, VAR_3, VAR_13);
 FUNC_0(VAR_15, VAR_4, VAR_14);
 FUNC_2(VAR_11, VAR_12, VAR_2, VAR_15);


 FUNC_2(VAR_11, VAR_12, VAR_0, VAR_13 ? 1 : 0);
 FUNC_2(VAR_11, VAR_12, VAR_1, VAR_14 ? 1 : 0);
}
