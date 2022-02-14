
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint16_t ;
struct sw_zone_info {int zone; } ;
struct cluster_layout {size_t zidx; uintptr_t hwidx; scalar_t__ region1; } ;
struct sge_fl {int hw_cidx; int sidx; int pidx; int dbidx; int flags; int * desc; struct fl_sdesc* sdesc; int cl_allocated; struct cluster_layout cll_alt; struct cluster_layout cll_def; int cl_recycled; int cl_fast_recycled; } ;
struct fl_sdesc {scalar_t__ nmbuf; struct cluster_layout cll; int * cl; } ;
struct cluster_metadata {int refcount; struct fl_sdesc* sd; } ;
struct TYPE_2__ {struct sw_zone_info* sw_zone_info; } ;
struct adapter {TYPE_1__ sge; } ;
typedef int * caddr_t ;
typedef int __be64 ;


 int FUNC_0 (struct sge_fl*) ;
 scalar_t__ FUNC_1 (struct sge_fl*) ;
 int VAR_0 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int*,int) ;
 struct cluster_metadata* FUNC_6 (struct adapter*,struct sge_fl*,struct cluster_layout*,int *) ;
 int FUNC_7 (int ,int) ;
 int VAR_2 ;
 int FUNC_8 (uintptr_t) ;
 uintptr_t FUNC_9 (int ) ;
 int FUNC_10 (struct adapter*,struct sge_fl*) ;
 int * FUNC_11 (int ,int ) ;

__attribute__((used)) static int
FUNC_12(struct adapter *VAR_3, struct sge_fl *VAR_4, int VAR_5)
{
 __be64 *VAR_6;
 struct fl_sdesc *VAR_7;
 uintptr_t VAR_8;
 caddr_t VAR_9;
 struct cluster_layout *VAR_10;
 struct sw_zone_info *VAR_11;
 struct cluster_metadata *VAR_12;
 uint16_t VAR_13;
 uint16_t VAR_14 = VAR_4->hw_cidx;

 FUNC_0(VAR_4);






 VAR_13 = FUNC_4(VAR_14 == 0) ? VAR_4->sidx - 1 : VAR_14 - 1;
 if (VAR_4->pidx == VAR_13 * 8)
  return (0);

 VAR_6 = &VAR_4->desc[VAR_4->pidx];
 VAR_7 = &VAR_4->sdesc[VAR_4->pidx];
 VAR_10 = &VAR_4->cll_def;
 VAR_11 = &VAR_3->sge.sw_zone_info[VAR_10->zidx];

 while (VAR_5 > 0) {

  if (VAR_7->cl != ((void*)0)) {

   if (VAR_7->nmbuf == 0) {







    VAR_4->cl_fast_recycled++;





    goto recycled_fast;
   }






   VAR_12 = FUNC_6(VAR_3, VAR_4, &VAR_7->cll, VAR_7->cl);
   FUNC_3(VAR_12 != ((void*)0));

   if (FUNC_5(&VAR_12->refcount, -1) == 1) {
    VAR_4->cl_recycled++;
    FUNC_7(VAR_2, 1);
    goto recycled;
   }
   VAR_7->cl = ((void*)0);
  }
  FUNC_3(VAR_7->cl == ((void*)0));
alloc:
  VAR_9 = FUNC_11(VAR_11->zone, VAR_1);
  if (FUNC_4(VAR_9 == ((void*)0))) {
   if (VAR_10 == &VAR_4->cll_alt || VAR_4->cll_alt.zidx == -1 ||
       VAR_4->cll_def.zidx == VAR_4->cll_alt.zidx)
    break;


   VAR_10 = &VAR_4->cll_alt;
   VAR_11 = &VAR_3->sge.sw_zone_info[VAR_10->zidx];
   goto alloc;
  }
  VAR_4->cl_allocated++;
  VAR_5--;

  VAR_8 = FUNC_9((vm_offset_t)VAR_9);
  VAR_8 += VAR_10->region1;
  VAR_7->cl = VAR_9;
  VAR_7->cll = *VAR_10;
  *VAR_6 = FUNC_8(VAR_8 | VAR_10->hwidx);
  VAR_12 = FUNC_6(VAR_3, VAR_4, VAR_10, VAR_9);
  if (VAR_12 != ((void*)0)) {
recycled:



   VAR_12->refcount = 1;
  }
  VAR_7->nmbuf = 0;
recycled_fast:
  VAR_6++;
  VAR_7++;
  if (FUNC_4(++VAR_4->pidx % 8 == 0)) {
   uint16_t VAR_15 = VAR_4->pidx / 8;

   if (FUNC_4(VAR_15 == VAR_4->sidx)) {
    VAR_4->pidx = 0;
    VAR_15 = 0;
    VAR_7 = VAR_4->sdesc;
    VAR_6 = VAR_4->desc;
   }
   if (VAR_15 == VAR_13)
    break;

   if (FUNC_2(VAR_15, VAR_4->dbidx, VAR_4->sidx) >= 4)
    FUNC_10(VAR_3, VAR_4);
  }
 }

 if (VAR_4->pidx / 8 != VAR_4->dbidx)
  FUNC_10(VAR_3, VAR_4);

 return (FUNC_1(VAR_4) && !(VAR_4->flags & VAR_0));
}
