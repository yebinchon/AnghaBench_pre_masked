
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lacp_softc {int dummy; } ;
struct lacp_port {struct lacp_aggregator* lp_aggregator; struct lacp_softc* lp_lsc; } ;
struct lacp_aggregator {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct lacp_port*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct lacp_softc*,struct lacp_aggregator*) ;

__attribute__((used)) static void
FUNC_3(struct lacp_port *VAR_1)
{
 struct lacp_softc *VAR_2 = VAR_1->lp_lsc;
 struct lacp_aggregator *VAR_3 = VAR_1->lp_aggregator;

 FUNC_0(!FUNC_1(VAR_1, VAR_0),
     ("timer_wait_while still active"));

 if (VAR_3 == ((void*)0)) {
  return;
 }

 VAR_1->lp_aggregator = ((void*)0);
 FUNC_2(VAR_2, VAR_3);
}
