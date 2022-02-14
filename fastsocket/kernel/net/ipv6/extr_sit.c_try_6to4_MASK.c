
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int * s6_addr16; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static inline __be32 FUNC_2(struct in6_addr *VAR_0)
{
 __be32 VAR_1 = 0;

 if (VAR_0->s6_addr16[0] == FUNC_0(0x2002)) {

  FUNC_1(&VAR_1, &VAR_0->s6_addr16[1], 4);
 }
 return VAR_1;
}
