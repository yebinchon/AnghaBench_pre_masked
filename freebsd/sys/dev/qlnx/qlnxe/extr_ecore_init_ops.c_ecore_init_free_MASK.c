
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* b_valid; void* init_val; } ;
struct ecore_hwfn {TYPE_1__ rt_data; int p_dev; } ;


 int FUNC_0 (int ,void*) ;
 void* VAR_0 ;

void FUNC_1(struct ecore_hwfn *VAR_1)
{
 FUNC_0(VAR_1->p_dev, VAR_1->rt_data.init_val);
 VAR_1->rt_data.init_val = VAR_0;
 FUNC_0(VAR_1->p_dev, VAR_1->rt_data.b_valid);
 VAR_1->rt_data.b_valid = VAR_0;
}
