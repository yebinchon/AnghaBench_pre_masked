
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octm_softc {int sc_port; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; struct octm_softc* if_softc; } ;
typedef int cvmx_mgmt_port_result_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,struct mbuf*) ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_9, struct mbuf *VAR_10)
{
 struct octm_softc *VAR_11;
 cvmx_mgmt_port_result_t VAR_12;

 VAR_11 = VAR_9->if_softc;

 if ((VAR_9->if_drv_flags & (VAR_8 | VAR_7)) !=
     VAR_8) {
  FUNC_3(VAR_10);
  return (0);
 }

 VAR_12 = FUNC_1(VAR_11->sc_port, VAR_10);

 if (VAR_12 == 128) {
  FUNC_0(VAR_9, VAR_10);

  FUNC_2(VAR_9, VAR_6, 1);
  FUNC_2(VAR_9, VAR_4, VAR_10->m_pkthdr.len);
 } else
  FUNC_2(VAR_9, VAR_5, 1);

 FUNC_3(VAR_10);

 switch (VAR_12) {
 case 128:
  return (0);
 case 129:
  return (VAR_2);
 case 130:
  return (VAR_3);
 case 131:
  return (VAR_1);
 default:
  return (VAR_0);
 }
}
