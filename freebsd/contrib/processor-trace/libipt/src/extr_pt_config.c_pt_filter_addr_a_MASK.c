
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned long long uint64_t ;
struct pt_conf_addr_filter {unsigned long long addr0_a; } ;


 int FUNC_0 () ;

uint64_t FUNC_1(const struct pt_conf_addr_filter *VAR_0, uint8_t VAR_1)
{
 const uint64_t *VAR_2;

 if (!VAR_0)
  return 0ull;

 if (FUNC_0() <= VAR_1)
  return 0ull;

 VAR_2 = &VAR_0->addr0_a;
 return VAR_2[2 * VAR_1];
}
