
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_5,
        struct ecore_ptt *VAR_6,
        u32 VAR_7,
        u64 VAR_8,
        u8 VAR_9,
        u8 VAR_10)
{
 FUNC_0(VAR_5, VAR_3,
     "CMD: %08x, ADDR: 0x%08x, DATA: %08x:%08x\n",
     FUNC_1(VAR_5, VAR_6, VAR_1) |
     (8 << VAR_4),
     (VAR_9 << 25) | (VAR_7 << 8) | VAR_10,
     (u32)((VAR_8 >> 32) & 0xffffffff),
     (u32)(VAR_8 & 0xffffffff));

 FUNC_2(VAR_5, VAR_6, VAR_1,
   (FUNC_1(VAR_5, VAR_6, VAR_1) &
    0xffff00fe) |
   (8 << VAR_4));
 FUNC_2(VAR_5, VAR_6, VAR_0,
   (VAR_9 << 25) | (VAR_7 << 8) | VAR_10);
 FUNC_2(VAR_5, VAR_6, VAR_2, VAR_8 & 0xffffffff);
 FUNC_2(VAR_5, VAR_6, VAR_2,
   (VAR_8 >> 32) & 0xffffffff);
}
