
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* wait_comp ) (struct bxe_softc*,TYPE_1__*) ;int pstate; } ;
struct ecore_mcast_obj {TYPE_1__ raw; int sched_state; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bxe_softc*,int ,int ) ;
 scalar_t__ FUNC_1 (struct bxe_softc*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct bxe_softc *VAR_2,
       struct ecore_mcast_obj *VAR_3)
{
 if (FUNC_0(VAR_2, VAR_3->sched_state, VAR_3->raw.pstate) ||
   VAR_3->raw.wait_comp(VAR_2, &VAR_3->raw))
  return VAR_1;

 return VAR_0;
}
