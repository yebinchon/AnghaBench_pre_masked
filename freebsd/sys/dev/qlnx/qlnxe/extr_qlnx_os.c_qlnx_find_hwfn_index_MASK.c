
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {struct ecore_dev* p_dev; } ;
struct ecore_dev {int num_hwfns; struct ecore_hwfn* hwfns; } ;



__attribute__((used)) static int
FUNC_0(struct ecore_hwfn *VAR_0)
{
 int VAR_1;
 struct ecore_dev *VAR_2;

 VAR_2 = VAR_0->p_dev;

 for (VAR_1 = 0; VAR_1 < VAR_2->num_hwfns; VAR_1++) {
  if (&VAR_2->hwfns[VAR_1] == VAR_0)
   break;
 }

 if (VAR_1 >= VAR_2->num_hwfns)
  return (-1);

 return (VAR_1);
}
