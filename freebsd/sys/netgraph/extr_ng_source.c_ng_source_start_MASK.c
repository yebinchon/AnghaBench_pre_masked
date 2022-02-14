
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_2__* sc_p ;
struct TYPE_8__ {int nd_flags; } ;
struct TYPE_6__ {int lastTime; int startTime; int endTime; int elapsedTime; } ;
struct TYPE_7__ {TYPE_4__* node; int intr_ch; TYPE_1__ stats; int packets; int * output_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_4__*,int *,int ,int ,TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(sc_p VAR_4, uint64_t VAR_5)
{
 if (VAR_4->output_ifp == ((void*)0)) {
  FUNC_2("ng_source: start without iface configured\n");
  return (VAR_1);
 }

 if (VAR_4->node->nd_flags & VAR_2)
  return (VAR_0);

 VAR_4->node->nd_flags |= VAR_2;

 VAR_4->packets = VAR_5;
 FUNC_3(&VAR_4->stats.elapsedTime);
 FUNC_3(&VAR_4->stats.endTime);
 FUNC_0(&VAR_4->stats.startTime);
 FUNC_0(&VAR_4->stats.lastTime);
 FUNC_1(&VAR_4->intr_ch, VAR_4->node, ((void*)0), 0,
     VAR_3, VAR_4, 0);

 return (0);
}
