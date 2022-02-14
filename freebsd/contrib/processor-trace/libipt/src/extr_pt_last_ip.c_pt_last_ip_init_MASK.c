
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_last_ip {unsigned long long ip; scalar_t__ suppressed; scalar_t__ have_ip; } ;



void FUNC_0(struct pt_last_ip *VAR_0)
{
 if (!VAR_0)
  return;

 VAR_0->ip = 0ull;
 VAR_0->have_ip = 0;
 VAR_0->suppressed = 0;
}
