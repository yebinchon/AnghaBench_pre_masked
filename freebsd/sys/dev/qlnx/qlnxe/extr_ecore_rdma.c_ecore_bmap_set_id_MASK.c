
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_hwfn {int dummy; } ;
struct ecore_bmap {scalar_t__ max_count; int name; int bitmap; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3(struct ecore_hwfn *VAR_1,
         struct ecore_bmap *VAR_2,
         u32 VAR_3)
{
 if (VAR_3 >= VAR_2->max_count) {
  FUNC_0(VAR_1, 1,
     "%s bitmap: cannot set id %d max is %d\n",
     VAR_2->name, VAR_3, VAR_2->max_count);

  return;
 }

 FUNC_2(VAR_3, VAR_2->bitmap);

 FUNC_1(VAR_1, VAR_0, "%s bitmap: set id %d\n",
     VAR_2->name, VAR_3);
}
