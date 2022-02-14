
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pcnt; int bcnt; } ;
struct ip6t_entry {TYPE_1__ counters; } ;
struct ip6t_counters {int dummy; } ;


 int FUNC_0 (struct ip6t_counters,int ,int ) ;

__attribute__((used)) static inline int
FUNC_1(const struct ip6t_entry *VAR_0,
       struct ip6t_counters VAR_1[],
       unsigned int *VAR_2)
{
 FUNC_0(VAR_1[*VAR_2], VAR_0->counters.bcnt, VAR_0->counters.pcnt);

 (*VAR_2)++;
 return 0;
}
