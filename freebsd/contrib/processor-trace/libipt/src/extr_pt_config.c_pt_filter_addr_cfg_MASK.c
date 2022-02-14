
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
struct TYPE_2__ {int addr_cfg; } ;
struct pt_conf_addr_filter {TYPE_1__ config; } ;


 int FUNC_0 () ;

uint32_t FUNC_1(const struct pt_conf_addr_filter *VAR_0, uint8_t VAR_1)
{
 if (!VAR_0)
  return 0u;

 if (FUNC_0() <= VAR_1)
  return 0u;

 return (VAR_0->config.addr_cfg >> (4 * VAR_1)) & 0xf;
}
