
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_ll2_info; } ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct ecore_hwfn *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->p_ll2_info[VAR_2].mutex);
}
