
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ecore_ll2_info {int mutex; scalar_t__ b_active; } ;
struct ecore_hwfn {struct ecore_ll2_info* p_ll2_info; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ecore_ll2_info* VAR_1 ;

__attribute__((used)) static struct ecore_ll2_info *
FUNC_2(struct ecore_hwfn *VAR_2,
     u8 VAR_3,
     bool VAR_4, bool VAR_5)
{
 struct ecore_ll2_info *VAR_6, *VAR_7 = VAR_1;

 if (VAR_3 >= VAR_0)
  return VAR_1;

 if (!VAR_2->p_ll2_info)
  return VAR_1;




 VAR_6 = &VAR_2->p_ll2_info[VAR_3];

 if (VAR_5) {
  if (VAR_4)
   FUNC_0(&VAR_6->mutex);
  if (VAR_6->b_active)
   VAR_7 = VAR_6;
  if (VAR_4)
   FUNC_1(&VAR_6->mutex);
 } else {
  VAR_7 = VAR_6;
 }

 return VAR_7;
}
