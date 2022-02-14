
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipv6hdr {int* flow_lbl; } ;



__attribute__((used)) static void FUNC_0(struct ipv6hdr *VAR_0, u32 VAR_1)
{
 VAR_0->flow_lbl[0] = (VAR_0->flow_lbl[0] & 0xF0) | (VAR_1 & 0x000F0000) >> 16;
 VAR_0->flow_lbl[1] = (VAR_1 & 0x0000FF00) >> 8;
 VAR_0->flow_lbl[2] = VAR_1 & 0x000000FF;
}
