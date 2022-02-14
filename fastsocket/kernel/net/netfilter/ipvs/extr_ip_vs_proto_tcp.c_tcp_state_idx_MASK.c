
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {scalar_t__ ack; scalar_t__ fin; scalar_t__ syn; scalar_t__ rst; } ;



__attribute__((used)) static inline int FUNC_0(struct tcphdr *VAR_0)
{
 if (VAR_0->rst)
  return 3;
 if (VAR_0->syn)
  return 0;
 if (VAR_0->fin)
  return 1;
 if (VAR_0->ack)
  return 2;
 return -1;
}
