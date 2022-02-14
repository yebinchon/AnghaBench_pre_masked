
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int p_igu_info; } ;
struct ecore_hwfn {TYPE_1__ hw_info; int p_dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_1)
{
 FUNC_1(VAR_1);
 FUNC_0(VAR_1->p_dev, VAR_1->hw_info.p_igu_info);
 VAR_1->hw_info.p_igu_info = VAR_0;
}
