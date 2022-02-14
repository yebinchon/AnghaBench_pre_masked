
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {scalar_t__ index; TYPE_1__* dst; } ;
struct TYPE_2__ {scalar_t__ cpu_switch; int cpu_port; } ;



__attribute__((used)) static inline bool FUNC_0(struct dsa_switch *VAR_0, int VAR_1)
{
 return !!(VAR_0->index == VAR_0->dst->cpu_switch && VAR_1 == VAR_0->dst->cpu_port);
}
