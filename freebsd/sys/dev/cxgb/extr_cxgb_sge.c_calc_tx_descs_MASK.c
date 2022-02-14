
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static __inline unsigned int
FUNC_2(const struct mbuf *VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 if (VAR_2->m_pkthdr.len <= VAR_1)
  return 1;

 VAR_4 = FUNC_1(VAR_3) + 2;
 if (VAR_2->m_pkthdr.csum_flags & VAR_0)
  VAR_4++;

 return FUNC_0(VAR_4);
}
