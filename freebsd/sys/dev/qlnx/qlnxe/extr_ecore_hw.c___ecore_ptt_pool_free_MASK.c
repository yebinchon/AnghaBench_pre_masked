
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {int p_ptt_pool; int p_dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_1)
{
 FUNC_0(VAR_1->p_dev, VAR_1->p_ptt_pool);
 VAR_1->p_ptt_pool = VAR_0;
}
