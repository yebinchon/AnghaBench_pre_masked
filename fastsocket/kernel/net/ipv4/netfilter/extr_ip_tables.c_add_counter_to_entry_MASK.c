
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_counters {int pcnt; int bcnt; } ;
struct ipt_entry {int counters; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct ipt_entry *VAR_0,
       const struct xt_counters VAR_1[],
       unsigned int *VAR_2)
{
 FUNC_0(VAR_0->counters, VAR_1[*VAR_2].bcnt, VAR_1[*VAR_2].pcnt);

 (*VAR_2)++;
 return 0;
}
