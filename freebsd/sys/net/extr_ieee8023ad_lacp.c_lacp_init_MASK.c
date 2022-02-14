
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_softc {int dummy; } ;
struct lacp_softc {int lsc_callout; } ;


 int FUNC_0 (struct lacp_softc*) ;
 struct lacp_softc* FUNC_1 (struct lagg_softc*) ;
 int FUNC_2 (struct lacp_softc*) ;
 int FUNC_3 (int *,int ,int ,struct lacp_softc*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_4(struct lagg_softc *VAR_2)
{
 struct lacp_softc *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3);
 FUNC_3(&VAR_3->lsc_callout, VAR_0, VAR_1, VAR_3);
 FUNC_2(VAR_3);
}
