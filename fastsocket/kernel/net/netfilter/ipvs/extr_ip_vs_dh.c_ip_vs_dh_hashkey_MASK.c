
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; int* ip6; } ;
typedef int __be32 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;

__attribute__((used)) static inline unsigned FUNC_1(int VAR_2, const union nf_inet_addr *VAR_3)
{
 __be32 VAR_4 = VAR_3->ip;






 return (FUNC_0(VAR_4)*2654435761UL) & VAR_1;
}
