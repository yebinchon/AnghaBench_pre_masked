
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_actions {scalar_t__ actions_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sw_flow_actions* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sw_flow_actions* FUNC_1 (int,int ) ;

struct sw_flow_actions *FUNC_2(int VAR_4)
{
 struct sw_flow_actions *VAR_5;

 if (VAR_4 > VAR_3)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(sizeof(*VAR_5) + VAR_4, VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_5->actions_len = 0;
 return VAR_5;
}
