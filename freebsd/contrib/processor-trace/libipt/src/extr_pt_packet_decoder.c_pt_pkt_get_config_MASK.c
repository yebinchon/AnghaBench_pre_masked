
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_config {int dummy; } ;
struct pt_packet_decoder {struct pt_config const config; } ;



const struct pt_config *
FUNC_0(const struct pt_packet_decoder *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 return &VAR_0->config;
}
