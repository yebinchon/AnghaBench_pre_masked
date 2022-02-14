
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* p_ptt_pool; } ;
typedef enum reserved_ptts { ____Placeholder_reserved_ptts } reserved_ptts ;
struct TYPE_2__ {struct ecore_ptt* ptts; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int) ;
 struct ecore_ptt* VAR_0 ;
 int VAR_1 ;

struct ecore_ptt *FUNC_1(struct ecore_hwfn *VAR_2,
      enum reserved_ptts VAR_3)
{
 if (VAR_3 >= VAR_1) {
  FUNC_0(VAR_2, 1,
     "Requested PTT %d is out of range\n", VAR_3);
  return VAR_0;
 }

 return &VAR_2->p_ptt_pool->ptts[VAR_3];
}
