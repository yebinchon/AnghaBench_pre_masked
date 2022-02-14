
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_softc {int dummy; } ;
struct lagg_port {struct lagg_softc* lp_softc; } ;


 int FUNC_0 (struct lagg_softc*,struct lagg_port*) ;

__attribute__((used)) static void
FUNC_1(struct lagg_port *VAR_0)
{
 struct lagg_softc *VAR_1 = VAR_0->lp_softc;
 FUNC_0(VAR_1, VAR_0);
}
