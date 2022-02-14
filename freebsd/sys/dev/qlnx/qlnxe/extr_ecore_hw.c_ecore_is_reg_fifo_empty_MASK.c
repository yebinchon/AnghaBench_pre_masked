
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* p_dev; } ;
struct TYPE_2__ {int chk_reg_fifo; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static bool FUNC_4(struct ecore_hwfn *VAR_1,
        struct ecore_ptt *VAR_2)
{
 bool VAR_3 = 1;
 u32 VAR_4;

 if (!VAR_1->p_dev->chk_reg_fifo)
  goto out;


 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_0);
 VAR_3 = FUNC_2(VAR_1, VAR_4) == 0;


 if (FUNC_0(VAR_1->p_dev))
  FUNC_1(100);


out:
 return VAR_3;
}
