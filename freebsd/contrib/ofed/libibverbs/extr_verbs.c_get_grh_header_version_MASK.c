
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ip {int ip_v; int ip_hl; scalar_t__ ip_sum; } ;
struct ibv_grh {int version_tclass_flow; } ;
typedef int ip4h_checked ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (struct ip*,struct ip*,int) ;

__attribute__((used)) static inline int FUNC_3(struct ibv_grh *VAR_2)
{
 int VAR_3 = (FUNC_0(VAR_2->version_tclass_flow) >> 28) & 0xf;
 struct ip *VAR_4 = (struct ip *)((void *)VAR_2 + 20);
 struct ip VAR_5;

 if (VAR_3 != 6) {
  if (VAR_4->ip_v == 4)
   return 4;
  VAR_1 = VAR_0;
  return -1;
 }

 if (VAR_4->ip_hl != 5)
  return 6;





 FUNC_2(&VAR_5, VAR_4, sizeof(VAR_5));



 VAR_5.ip_sum = 0;
 VAR_5.ip_sum = FUNC_1((uint16_t *)&VAR_5, 10);

 if (VAR_4->ip_sum == VAR_5.ip_sum)
  return 4;
 return 6;
}
