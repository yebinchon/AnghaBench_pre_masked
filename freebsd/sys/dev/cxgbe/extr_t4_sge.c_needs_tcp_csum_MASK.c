
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static inline int
FUNC_1(struct mbuf *VAR_3)
{

 FUNC_0(VAR_3);
 return (VAR_3->m_pkthdr.csum_flags & (VAR_0 | VAR_1 | VAR_2));
}
