
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int ether_vtag; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ qnqid; scalar_t__ pvid; } ;
typedef TYPE_2__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf*) ;
 struct mbuf* FUNC_2 (struct mbuf*,scalar_t__) ;

__attribute__((used)) static struct mbuf *
FUNC_3(POCE_SOFTC VAR_2, struct mbuf *VAR_3, boolean_t *VAR_4)
{
 uint16_t VAR_5 = 0;

 if(!FUNC_1(VAR_3))
  return ((void*)0);


 if(VAR_3->m_flags & VAR_1) {
  VAR_5 = FUNC_0(VAR_3->m_pkthdr.ether_vtag);
  VAR_3->m_flags &= ~VAR_1;
 }


 if(VAR_2->pvid) {
  if(!VAR_5)
   VAR_5 = VAR_2->pvid;
  if (VAR_4)
   *VAR_4 = VAR_0;
 }

 if(VAR_5) {
  VAR_3 = FUNC_2(VAR_3, VAR_5);
 }

 if(VAR_2->qnqid) {
  VAR_3 = FUNC_2(VAR_3, VAR_2->qnqid);

  if (VAR_4)
   *VAR_4 = VAR_0;
 }
 return VAR_3;
}
