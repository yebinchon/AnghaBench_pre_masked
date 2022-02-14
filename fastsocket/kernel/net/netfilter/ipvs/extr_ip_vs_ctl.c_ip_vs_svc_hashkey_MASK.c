
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; int* ip6; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static __inline__ unsigned
FUNC_2(int VAR_3, unsigned VAR_4, const union nf_inet_addr *VAR_5,
    __be16 VAR_6)
{
 register unsigned VAR_7 = FUNC_1(VAR_6);
 __be32 VAR_8 = VAR_5->ip;







 return (VAR_4^FUNC_0(VAR_8)^(VAR_7>>VAR_1)^VAR_7)
  & VAR_2;
}
