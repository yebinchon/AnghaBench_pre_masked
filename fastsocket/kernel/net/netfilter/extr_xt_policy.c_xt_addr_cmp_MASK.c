
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; int in6; } ;




 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static inline bool
FUNC_1(const union nf_inet_addr *VAR_0, const union nf_inet_addr *VAR_1,
     const union nf_inet_addr *VAR_2, unsigned short VAR_3)
{
 switch (VAR_3) {
 case 129:
  return ((VAR_0->ip ^ VAR_2->ip) & VAR_1->ip) == 0;
 case 128:
  return FUNC_0(&VAR_0->in6, &VAR_1->in6, &VAR_2->in6) == 0;
 }
 return 0;
}
