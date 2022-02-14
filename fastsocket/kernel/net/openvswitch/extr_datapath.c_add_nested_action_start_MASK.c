
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_actions {int actions_len; } ;


 int FUNC_0 (struct sw_flow_actions**,int,int *,int ) ;

__attribute__((used)) static inline int FUNC_1(struct sw_flow_actions **VAR_0, int VAR_1)
{
 int VAR_2 = (*VAR_0)->actions_len;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, ((void*)0), 0);
 if (VAR_3)
  return VAR_3;

 return VAR_2;
}
