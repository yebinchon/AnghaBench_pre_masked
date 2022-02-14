
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static u32 FUNC_3(struct ecore_hwfn *VAR_4,
          struct ecore_ptt *VAR_5,
          u32 *VAR_6,
          bool VAR_7)
{
 u32 VAR_8, VAR_9 = 0;

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_1);

 if (FUNC_2(VAR_4, VAR_5, VAR_2)) {




  if (VAR_8 < VAR_3 - 1)
   VAR_9 += FUNC_1(VAR_4, VAR_5, VAR_6 + VAR_9, VAR_7, VAR_8 + 1, VAR_3 - 1);
  VAR_9 += FUNC_1(VAR_4, VAR_5, VAR_6 + VAR_9, VAR_7, 0, VAR_8);
 }
 else if (VAR_8) {




  if (!FUNC_2(VAR_4, VAR_5, VAR_0))
   VAR_9 += FUNC_1(VAR_4, VAR_5, VAR_6 + VAR_9, VAR_7, 0, VAR_8);
  else
   FUNC_0(VAR_4, 1, "Unexpected Debug Bus error: internal buffer read pointer is not zero\n");
 }

 return VAR_9;
}
