
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow {scalar_t__ byte_count; scalar_t__ packet_count; scalar_t__ tcp_flags; scalar_t__ used; } ;



__attribute__((used)) static void FUNC_0(struct sw_flow *VAR_0)
{
 VAR_0->used = 0;
 VAR_0->tcp_flags = 0;
 VAR_0->packet_count = 0;
 VAR_0->byte_count = 0;
}
