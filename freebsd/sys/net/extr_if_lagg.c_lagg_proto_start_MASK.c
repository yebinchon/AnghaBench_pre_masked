
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct lagg_softc {size_t sc_proto; } ;
struct TYPE_2__ {int (* pr_start ) (struct lagg_softc*,struct mbuf*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct lagg_softc*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_1(struct lagg_softc *VAR_1, struct mbuf *VAR_2)
{

 return (VAR_0[VAR_1->sc_proto].pr_start(VAR_1, VAR_2));
}
