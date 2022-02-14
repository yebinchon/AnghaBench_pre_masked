
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int) ;

__attribute__((used)) static u32 FUNC_2(struct ecore_hwfn *VAR_3,
          struct ecore_ptt *VAR_4,
          u32 *VAR_5,
          bool VAR_6,
          u32 VAR_7,
          u32 VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12 = 0;

 if (!VAR_6)
  return (VAR_8 - VAR_7 + 1) * VAR_2;

 for (VAR_9 = VAR_7, VAR_10 = VAR_1 + FUNC_0(VAR_7 * VAR_2);
  VAR_9 <= VAR_8;
  VAR_9++, VAR_12 += VAR_2)
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++, VAR_10 += VAR_0)
   VAR_5[VAR_12 + VAR_2 - 1 - VAR_11] = FUNC_1(VAR_3, VAR_4, VAR_10);

 return VAR_12;
}
