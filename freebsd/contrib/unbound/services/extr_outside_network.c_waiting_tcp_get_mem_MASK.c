
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waiting_tcp {int pkt_len; scalar_t__ timer; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static size_t
FUNC_1(struct waiting_tcp* VAR_0)
{
 size_t VAR_1;
 if(!VAR_0) return 0;
 VAR_1 = sizeof(*VAR_0) + VAR_0->pkt_len;
 if(VAR_0->timer)
  VAR_1 += FUNC_0(VAR_0->timer);
 return VAR_1;
}
