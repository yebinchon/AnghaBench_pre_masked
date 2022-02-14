
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lagg_softc {size_t sc_proto; } ;
typedef size_t lagg_proto ;
struct TYPE_2__ {int (* pr_detach ) (struct lagg_softc*) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (struct lagg_softc*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct lagg_softc*) ;

__attribute__((used)) static void
FUNC_2(struct lagg_softc *VAR_2)
{
 lagg_proto VAR_3;

 FUNC_0(VAR_2);
 VAR_3 = VAR_2->sc_proto;
 VAR_2->sc_proto = VAR_0;

 if (VAR_1[VAR_3].pr_detach != ((void*)0))
  VAR_1[VAR_3].pr_detach(VAR_2);
}
