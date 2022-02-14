
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_port {int lp_detaching; } ;
struct lacp_softc {int dummy; } ;
struct lacp_port {int lp_ifma; struct lacp_softc* lp_lsc; } ;


 int FUNC_0 (struct lacp_softc*) ;
 int VAR_0 ;
 struct lacp_port* FUNC_1 (struct lagg_port*) ;
 int FUNC_2 (struct lacp_port*,int) ;
 int FUNC_3 (struct lacp_softc*) ;
 int FUNC_4 (struct lacp_port*,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct lacp_port*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct lacp_port*) ;
 int FUNC_8 (struct lacp_port*) ;
 int FUNC_9 (struct lacp_port*) ;
 int VAR_2 ;

void
FUNC_10(struct lagg_port *VAR_3)
{
 struct lacp_port *VAR_4 = FUNC_1(VAR_3);
 struct lacp_softc *VAR_5 = VAR_4->lp_lsc;
 int VAR_6;

 FUNC_0(VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_2(VAR_4, VAR_6);
 }

 FUNC_7(VAR_4);
 FUNC_8(VAR_4);
 FUNC_9(VAR_4);

 FUNC_4(VAR_4, VAR_2);
 FUNC_3(VAR_5);


 if (!VAR_3->lp_detaching)
  FUNC_6(VAR_4->lp_ifma);

 FUNC_5(VAR_4, VAR_1);
}
