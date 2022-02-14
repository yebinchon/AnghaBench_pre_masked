
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oce_rq {scalar_t__ pending; TYPE_1__* ring; int tag; struct oce_packet_desc* pckts; } ;
struct oce_packet_desc {int * mbuf; int map; } ;
struct TYPE_2__ {size_t cidx; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct oce_rq *VAR_1)
{
 struct oce_packet_desc *VAR_2;

 while (VAR_1->pending) {

  VAR_2 = &VAR_1->pckts[VAR_1->ring->cidx];
  FUNC_1(VAR_1->tag, VAR_2->map, VAR_0);
  FUNC_2(VAR_1->tag, VAR_2->map);
  if (VAR_2->mbuf != ((void*)0)) {
   FUNC_3(VAR_2->mbuf);
   VAR_2->mbuf = ((void*)0);
  }

  FUNC_0(VAR_1->ring,1);
                VAR_1->pending--;
 }

}
