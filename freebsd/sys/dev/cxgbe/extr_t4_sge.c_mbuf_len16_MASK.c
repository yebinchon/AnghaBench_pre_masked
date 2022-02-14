
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* eight; } ;
struct TYPE_4__ {TYPE_1__ PH_loc; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_2(struct mbuf *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1);
 VAR_2 = VAR_1->m_pkthdr.PH_loc.eight[0];
 FUNC_0(VAR_2 > 0 && VAR_2 <= VAR_0 / 16);

 return (VAR_2);
}
