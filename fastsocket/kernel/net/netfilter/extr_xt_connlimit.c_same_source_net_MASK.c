
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; int* ip6; } ;
typedef scalar_t__ u_int8_t ;


 unsigned int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int**,int**,int) ;

__attribute__((used)) static inline unsigned int
FUNC_2(const union nf_inet_addr *VAR_1,
  const union nf_inet_addr *VAR_2,
  const union nf_inet_addr *VAR_3, u_int8_t VAR_4)
{
 if (VAR_4 == VAR_0) {
  return (VAR_1->ip & VAR_2->ip) == (VAR_3->ip & VAR_2->ip);
 } else {
  union nf_inet_addr VAR_5, VAR_6;
  unsigned int VAR_7;

  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1->ip6); ++VAR_7) {
   VAR_5.ip6[VAR_7] = VAR_1->ip6[VAR_7] & VAR_2->ip6[VAR_7];
   VAR_6.ip6[VAR_7] = VAR_3->ip6[VAR_7] & VAR_2->ip6[VAR_7];
  }

  return FUNC_1(&VAR_5.ip6, &VAR_6.ip6, sizeof(VAR_5.ip6)) == 0;
 }
}
