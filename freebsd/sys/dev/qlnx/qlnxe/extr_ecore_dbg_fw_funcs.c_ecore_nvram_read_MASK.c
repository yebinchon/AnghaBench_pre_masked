
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef scalar_t__ s32 ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int,int*,int*,int*,int*) ;

__attribute__((used)) static enum dbg_status FUNC_2(struct ecore_hwfn *VAR_8,
          struct ecore_ptt *VAR_9,
          u32 VAR_10,
          u32 VAR_11,
          u32 *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 s32 VAR_17 = VAR_11;
 u32 VAR_18 = 0;

 FUNC_0(VAR_8, VAR_4, "nvram_read: reading image of size %d bytes from NVRAM\n", VAR_11);

 do {
  VAR_16 = (VAR_17 > VAR_7) ? VAR_7 : VAR_17;


  if (FUNC_1(VAR_8, VAR_9, VAR_3, (VAR_10 + VAR_18) | (VAR_16 << VAR_2), &VAR_13, &VAR_14, &VAR_15, (u32 *)((u8 *)VAR_12 + VAR_18)))
   return VAR_0;


  if ((VAR_13 & VAR_5) != VAR_6)
   return VAR_0;


  VAR_18 += VAR_15;
  VAR_17 -= VAR_15;
 } while (VAR_17 > 0);

 return VAR_1;
}
