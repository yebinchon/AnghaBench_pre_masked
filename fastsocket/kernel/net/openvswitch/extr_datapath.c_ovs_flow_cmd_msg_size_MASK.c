
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_actions {int actions_len; } ;
struct ovs_header {int dummy; } ;
struct ovs_flow_stats {int dummy; } ;


 size_t FUNC_0 (int) ;
 int FUNC_1 () ;
 size_t FUNC_2 (int) ;

__attribute__((used)) static size_t FUNC_3(const struct sw_flow_actions *VAR_0)
{
 return FUNC_0(sizeof(struct ovs_header))
  + FUNC_2(FUNC_1())
  + FUNC_2(sizeof(struct ovs_flow_stats))
  + FUNC_2(1)
  + FUNC_2(8)
  + FUNC_2(VAR_0->actions_len);
}
