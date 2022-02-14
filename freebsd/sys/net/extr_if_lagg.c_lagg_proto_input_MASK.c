
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct lagg_softc {size_t sc_proto; } ;
struct lagg_port {int dummy; } ;
struct TYPE_2__ {struct mbuf* (* pr_input ) (struct lagg_softc*,struct lagg_port*,struct mbuf*) ;} ;


 TYPE_1__* VAR_0 ;
 struct mbuf* FUNC_0 (struct lagg_softc*,struct lagg_port*,struct mbuf*) ;

__attribute__((used)) static struct mbuf *
FUNC_1(struct lagg_softc *VAR_1, struct lagg_port *VAR_2, struct mbuf *VAR_3)
{

 return (VAR_0[VAR_1->sc_proto].pr_input(VAR_1, VAR_2, VAR_3));
}
