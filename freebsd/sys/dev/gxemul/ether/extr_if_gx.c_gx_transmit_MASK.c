
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; struct gx_softc* if_softc; } ;
struct gx_softc {int dummy; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct gx_softc*) ;
 int FUNC_4 (struct gx_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (struct mbuf*,int ,int,void*) ;
 int FUNC_7 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_7, struct mbuf *VAR_8)
{
 struct gx_softc *VAR_9;

 VAR_9 = VAR_7->if_softc;

 if ((VAR_7->if_drv_flags & VAR_6) != VAR_6) {
  FUNC_7(VAR_8);
  return (0);
 }

 FUNC_3(VAR_9);
 FUNC_2(VAR_3, VAR_8->m_pkthdr.len);
 FUNC_6(VAR_8, 0, VAR_8->m_pkthdr.len, (void *)(uintptr_t)FUNC_1(VAR_0));
 FUNC_2(VAR_1, VAR_2);
 FUNC_4(VAR_9);

 FUNC_0(VAR_7, VAR_8);

 FUNC_5(VAR_7, VAR_5, 1);
 FUNC_5(VAR_7, VAR_4, VAR_8->m_pkthdr.len);

 FUNC_7(VAR_8);

 return (0);
}
