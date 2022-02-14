
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int,int,int) ;
 int FUNC_1 (struct ecore_hwfn*,int*,int,char const*,int,int,int,int,char const*,int,char) ;

__attribute__((used)) static u32 FUNC_2(struct ecore_hwfn *VAR_0,
         struct ecore_ptt *VAR_1,
         u32 *VAR_2,
         bool VAR_3,
         const char *VAR_4,
         u32 VAR_5,
         u32 VAR_6,
         bool VAR_7,
         u32 VAR_8,
         bool VAR_9,
         const char *VAR_10,
         bool VAR_11,
         char VAR_12)
{
 u32 VAR_13 = 0;

 VAR_13 += FUNC_1(VAR_0, VAR_2 + VAR_13, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 VAR_13 += FUNC_0(VAR_0, VAR_1, VAR_2 + VAR_13, VAR_3, VAR_5, VAR_6, VAR_7);

 return VAR_13;
}
