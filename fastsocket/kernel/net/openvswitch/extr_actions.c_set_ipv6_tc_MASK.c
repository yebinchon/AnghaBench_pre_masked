
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipv6hdr {int priority; int* flow_lbl; } ;



__attribute__((used)) static void FUNC_0(struct ipv6hdr *VAR_0, u8 VAR_1)
{
 VAR_0->priority = VAR_1 >> 4;
 VAR_0->flow_lbl[0] = (VAR_0->flow_lbl[0] & 0x0F) | ((VAR_1 & 0x0F) << 4);
}
