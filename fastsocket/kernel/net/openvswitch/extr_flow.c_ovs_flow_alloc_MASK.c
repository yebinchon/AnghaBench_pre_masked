
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow {int * sf_acts; int lock; } ;


 int VAR_0 ;
 struct sw_flow* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sw_flow* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

struct sw_flow *FUNC_3(void)
{
 struct sw_flow *VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_3->lock);
 VAR_3->sf_acts = ((void*)0);

 return VAR_3;
}
