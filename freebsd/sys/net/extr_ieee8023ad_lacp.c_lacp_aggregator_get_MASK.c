
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lacp_softc {int lsc_aggregators; } ;
struct lacp_port {int dummy; } ;
struct lacp_aggregator {int la_refcnt; scalar_t__ la_pending; int la_ports; scalar_t__ la_nports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lacp_aggregator*,int ) ;
 int VAR_2 ;
 struct lacp_aggregator* FUNC_2 (int,int ,int ) ;

__attribute__((used)) static struct lacp_aggregator *
FUNC_3(struct lacp_softc *VAR_3, struct lacp_port *VAR_4)
{
 struct lacp_aggregator *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0, VAR_1);
 if (VAR_5) {
  VAR_5->la_refcnt = 1;
  VAR_5->la_nports = 0;
  FUNC_0(&VAR_5->la_ports);
  VAR_5->la_pending = 0;
  FUNC_1(&VAR_3->lsc_aggregators, VAR_5, VAR_2);
 }

 return (VAR_5);
}
