
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbni_softc {struct mbuf* rx_buf_p; int ifp; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {scalar_t__ m_len; TYPE_1__ m_pkthdr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mbuf*,int ) ;
 int FUNC_1 (struct mbuf*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mbuf*,int) ;
 int FUNC_4 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_5(struct sbni_softc *VAR_4)
{
 struct mbuf *VAR_5;

 FUNC_1(VAR_5, VAR_3, VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_4->ifp, "cannot allocate header mbuf\n");
  return (0);
 }







 if (VAR_0 + 2 > VAR_1) {

  if (!(FUNC_0(VAR_5, VAR_3))) {
   FUNC_4(VAR_5);
   return (0);
  }
 }
 VAR_5->m_pkthdr.len = VAR_5->m_len = VAR_0 + 2;






 FUNC_3(VAR_5, 2);
 VAR_4->rx_buf_p = VAR_5;
 return (1);
}
