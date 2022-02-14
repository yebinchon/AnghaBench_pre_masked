
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct ecore_hwfn *VAR_14,
         struct ecore_ptt *VAR_15,
         u16 VAR_16,
         bool VAR_17,
         u16 VAR_18)
{
 u32 VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;
 u32 VAR_24 = VAR_4 + VAR_16;
 u32 VAR_25 = VAR_3;
 u8 VAR_26 = 0;

 FUNC_2((VAR_11 -
      VAR_10) != 0x200);






 FUNC_5(VAR_23, VAR_0, VAR_17 ? 1 : 0);
 FUNC_5(VAR_23, VAR_1, VAR_26);
 FUNC_5(VAR_23, VAR_2, VAR_5);


 FUNC_5(VAR_19, VAR_8, VAR_24);
 FUNC_5(VAR_19, VAR_7, VAR_18);
 FUNC_5(VAR_19, VAR_9, VAR_6);

 FUNC_7(VAR_14, VAR_15, VAR_12, VAR_23);

 FUNC_1(VAR_14->p_dev);

 FUNC_7(VAR_14, VAR_15, VAR_13, VAR_19);


 FUNC_3(VAR_14->p_dev);


 VAR_21 = 1 << (VAR_16 % 32);
 VAR_22 = VAR_16 / 32 * sizeof(u32);

 VAR_22 += VAR_10 + (0x80 * VAR_26);


 while (--VAR_25) {
  VAR_20 = FUNC_6(VAR_14, VAR_15, VAR_22);
  if ((VAR_20 & VAR_21) == (VAR_17 ? VAR_21 : 0))
   break;
  FUNC_4(5);
 }

 if (!VAR_25)
  FUNC_0(VAR_14, 1,
     "Timeout waiting for clear status 0x%08x [for sb %d]\n",
     VAR_20, VAR_16);
}
