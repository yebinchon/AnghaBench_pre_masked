
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct pt_last_ip {unsigned long long ip; scalar_t__ suppressed; int have_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(uint64_t *VAR_3, const struct pt_last_ip *VAR_4)
{
 if (!VAR_4)
  return -VAR_0;

 if (!VAR_4->have_ip) {
  if (VAR_3)
   *VAR_3 = 0ull;
  return -VAR_2;
 }

 if (VAR_4->suppressed) {
  if (VAR_3)
   *VAR_3 = 0ull;
  return -VAR_1;
 }

 if (VAR_3)
  *VAR_3 = VAR_4->ip;

 return 0;
}
