
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge_fl {int sidx; struct fl_sdesc* sdesc; } ;
struct cluster_layout {size_t zidx; } ;
struct fl_sdesc {scalar_t__ nmbuf; int * cl; struct cluster_layout cll; } ;
struct cluster_metadata {int refcount; } ;
struct TYPE_4__ {TYPE_1__* sw_zone_info; } ;
struct adapter {TYPE_2__ sge; } ;
struct TYPE_3__ {int zone; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct cluster_metadata* FUNC_1 (struct adapter*,struct sge_fl*,struct cluster_layout*,int *) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (struct fl_sdesc*,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct adapter *VAR_2, struct sge_fl *VAR_3)
{
 struct fl_sdesc *VAR_4;
 struct cluster_metadata *VAR_5;
 struct cluster_layout *VAR_6;
 int VAR_7;

 VAR_4 = VAR_3->sdesc;
 for (VAR_7 = 0; VAR_7 < VAR_3->sidx * 8; VAR_7++, VAR_4++) {
  if (VAR_4->cl == ((void*)0))
   continue;

  VAR_6 = &VAR_4->cll;
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_6, VAR_4->cl);
  if (VAR_4->nmbuf == 0)
   FUNC_4(VAR_2->sge.sw_zone_info[VAR_6->zidx].zone, VAR_4->cl);
  else if (VAR_5 && FUNC_0(&VAR_5->refcount, -1) == 1) {
   FUNC_4(VAR_2->sge.sw_zone_info[VAR_6->zidx].zone, VAR_4->cl);
   FUNC_2(VAR_1, 1);
  }
  VAR_4->cl = ((void*)0);
 }

 FUNC_3(VAR_3->sdesc, VAR_0);
 VAR_3->sdesc = ((void*)0);
}
