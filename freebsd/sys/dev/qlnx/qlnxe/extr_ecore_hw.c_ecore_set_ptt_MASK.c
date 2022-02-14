
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {scalar_t__ hwfn_id; int idx; } ;
struct ecore_hwfn {scalar_t__ my_id; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct ecore_ptt*) ;
 scalar_t__ FUNC_2 (struct ecore_ptt*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_4(struct ecore_hwfn *VAR_1,
    struct ecore_ptt *VAR_2,
    u32 VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_2);
 u32 VAR_5;

 VAR_5 = VAR_3 - VAR_4;

 if (VAR_2->hwfn_id != VAR_1->my_id)
  FUNC_0(VAR_1, 1,
     "ptt[%d] of hwfn[%02x] is used by hwfn[%02x]!\n",
     VAR_2->idx, VAR_2->hwfn_id, VAR_1->my_id);


 if (VAR_3 < VAR_4 ||
     VAR_5 >= VAR_0) {
  FUNC_3(VAR_1, VAR_2, VAR_3);
  VAR_5 = 0;
 }

 return FUNC_1(VAR_2) + VAR_5;
}
