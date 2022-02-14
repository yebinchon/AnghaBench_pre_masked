
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lagg_softc {size_t sc_proto; } ;
struct lagg_port {int dummy; } ;
struct TYPE_2__ {int (* pr_portreq ) (struct lagg_port*,void*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct lagg_port*,void*) ;

__attribute__((used)) static void
FUNC_1(struct lagg_softc *VAR_1, struct lagg_port *VAR_2, void *VAR_3)
{

 if (VAR_0[VAR_1->sc_proto].pr_portreq != ((void*)0))
  VAR_0[VAR_1->sc_proto].pr_portreq(VAR_2, VAR_3);
}
