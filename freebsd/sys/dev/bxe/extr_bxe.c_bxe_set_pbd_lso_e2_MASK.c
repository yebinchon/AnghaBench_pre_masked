
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int tso_segsz; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct mbuf *VAR_2,
                   uint32_t *VAR_3)
{
    *VAR_3 |= ((VAR_2->m_pkthdr.tso_segsz <<
                       VAR_1) &
                      VAR_0);


}
