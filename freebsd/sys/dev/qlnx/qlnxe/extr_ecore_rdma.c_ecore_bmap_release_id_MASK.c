
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_hwfn {int dummy; } ;
struct ecore_bmap {scalar_t__ max_count; int name; int bitmap; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int ,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3(struct ecore_hwfn *VAR_1,
      struct ecore_bmap *VAR_2,
      u32 VAR_3)
{
 bool VAR_4;

 if (VAR_3 >= VAR_2->max_count)
  return;

 VAR_4 = FUNC_2(VAR_3, VAR_2->bitmap);
 if (!VAR_4)
 {
  FUNC_0(VAR_1, 0, "%s bitmap: id %d already released\n",
     VAR_2->name, VAR_3);
  return;
 }

 FUNC_1(VAR_1, VAR_0, "%s bitmap: released id %d\n",
     VAR_2->name, VAR_3);
}
