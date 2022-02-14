
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

void FUNC_4(struct ecore_hwfn *VAR_10,
                             struct ecore_ptt *VAR_11,
                             bool VAR_12,
                             bool VAR_13)
{
 u32 VAR_14;


 VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_6);
 FUNC_1(VAR_14, VAR_7, VAR_12);
 FUNC_1(VAR_14, VAR_8, VAR_13);
 FUNC_3(VAR_10, VAR_11, VAR_6, VAR_14);
    if (VAR_14)
    {
        VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_9);


        if (VAR_14 == (u32)VAR_4)
        {
            FUNC_3(VAR_10, VAR_11, VAR_9, (u32)VAR_5);
        }
    }


 FUNC_3(VAR_10, VAR_11, VAR_2, VAR_12 ? 1 : 0);
 FUNC_3(VAR_10, VAR_11, VAR_3, VAR_13 ? 1 : 0);


 if (FUNC_0(VAR_10->p_dev))
  return;


 FUNC_3(VAR_10, VAR_11, VAR_0, VAR_12 ? 1 : 0);
 FUNC_3(VAR_10, VAR_11, VAR_1, VAR_13 ? 1 : 0);
}
