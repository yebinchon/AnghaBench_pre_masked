
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct oce_rq {int pending; TYPE_1__* cq; } ;
struct TYPE_6__ {int enable_hwlro; } ;
struct TYPE_5__ {int cq_id; } ;
typedef TYPE_2__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oce_rq*,int) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(POCE_SOFTC VAR_2, uint32_t VAR_3, struct oce_rq *VAR_4)
{
        if (VAR_3) {
                FUNC_1(VAR_2, VAR_4->cq->cq_id, VAR_3, VAR_0);
  if(!VAR_2->enable_hwlro) {
   if((VAR_1 - VAR_4->pending) > 1)
    FUNC_0(VAR_4, ((VAR_1 - VAR_4->pending) - 1));
  }else {
                 if ((VAR_1 -1 - VAR_4->pending) > 64)
                         FUNC_0(VAR_4, 64);
         }
 }

        return;
}
