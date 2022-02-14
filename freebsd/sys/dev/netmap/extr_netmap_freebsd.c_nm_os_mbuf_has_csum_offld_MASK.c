
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_0(struct mbuf *VAR_6)
{
 return VAR_6->m_pkthdr.csum_flags & (VAR_2 | VAR_4 | VAR_0 |
      VAR_3 | VAR_5 |
      VAR_1);
}
