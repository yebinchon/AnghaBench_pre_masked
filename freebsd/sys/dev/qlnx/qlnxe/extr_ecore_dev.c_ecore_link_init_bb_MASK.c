
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_13,
          struct ecore_ptt *VAR_14, u8 VAR_15)
{
 int VAR_16 = VAR_15 ? 0x800 : 0;
 u32 VAR_17 = 0;



 FUNC_3(VAR_13, VAR_14, VAR_0 + 2*sizeof(u32),
   VAR_1);
 FUNC_1(1);
 FUNC_3(VAR_13, VAR_14, VAR_0 + sizeof(u32),
   VAR_1);

 FUNC_3(VAR_13, VAR_14, VAR_3, 1);


 FUNC_3(VAR_13, VAR_14, VAR_4, 3);


 FUNC_3(VAR_13, VAR_14, VAR_0 + 2 * sizeof(u32),
   VAR_2);
 FUNC_1(1);
 FUNC_3(VAR_13, VAR_14, VAR_0 + sizeof(u32),
   VAR_2);


 if (FUNC_0(VAR_13->p_dev))
  FUNC_3(VAR_13, VAR_14, VAR_8 + VAR_16, 0x20);


 FUNC_3(VAR_13, VAR_14, VAR_11 + VAR_16, 0x2710);


 FUNC_3(VAR_13, VAR_14, VAR_12 + VAR_16, 0xC800);


 FUNC_3(VAR_13, VAR_14, VAR_5 + VAR_16,
   VAR_7 | VAR_6);
 VAR_17 = FUNC_2(VAR_13, VAR_14,
          VAR_9 + VAR_16);
 VAR_17 |= VAR_10;
 FUNC_3(VAR_13, VAR_14, VAR_9 + VAR_16, VAR_17);
}
