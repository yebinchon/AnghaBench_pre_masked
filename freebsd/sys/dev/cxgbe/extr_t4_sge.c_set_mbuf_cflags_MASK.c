
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * eight; } ;
struct TYPE_4__ {TYPE_1__ PH_loc; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;


 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static inline void
FUNC_1(struct mbuf *VAR_0, uint8_t VAR_1)
{

 FUNC_0(VAR_0);
 VAR_0->m_pkthdr.PH_loc.eight[4] = VAR_1;
}
