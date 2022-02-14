
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* iflib_rxq_t ;
typedef TYPE_3__* iflib_fl_t ;
struct TYPE_9__ {TYPE_3__* ifsd_map; TYPE_3__* ifsd_ba; TYPE_3__* ifsd_cl; TYPE_3__* ifsd_m; } ;
struct TYPE_11__ {int ifl_size; TYPE_1__ ifl_sds; int * ifl_buf_tag; } ;
struct TYPE_10__ {int ifr_nfl; scalar_t__ ifr_cq_cidx; TYPE_3__* ifr_ifdi; TYPE_3__* ifr_fl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_3__) ;
 int FUNC_2 (int *,TYPE_3__,int ) ;
 int FUNC_3 (int *,TYPE_3__) ;
 int FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_5(iflib_rxq_t VAR_2)
{
 iflib_fl_t VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2->ifr_fl != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_2->ifr_nfl; VAR_4++) {
   VAR_3 = &VAR_2->ifr_fl[VAR_4];
   if (VAR_3->ifl_buf_tag != ((void*)0)) {
    if (VAR_3->ifl_sds.ifsd_map != ((void*)0)) {
     for (VAR_5 = 0; VAR_5 < VAR_3->ifl_size; VAR_5++) {
      FUNC_2(
          VAR_3->ifl_buf_tag,
          VAR_3->ifl_sds.ifsd_map[VAR_5],
          VAR_0);
      FUNC_3(
          VAR_3->ifl_buf_tag,
          VAR_3->ifl_sds.ifsd_map[VAR_5]);
      FUNC_1(
          VAR_3->ifl_buf_tag,
          VAR_3->ifl_sds.ifsd_map[VAR_5]);
     }
    }
    FUNC_0(VAR_3->ifl_buf_tag);
    VAR_3->ifl_buf_tag = ((void*)0);
   }
   FUNC_4(VAR_3->ifl_sds.ifsd_m, VAR_1);
   FUNC_4(VAR_3->ifl_sds.ifsd_cl, VAR_1);
   FUNC_4(VAR_3->ifl_sds.ifsd_ba, VAR_1);
   FUNC_4(VAR_3->ifl_sds.ifsd_map, VAR_1);
   VAR_3->ifl_sds.ifsd_m = ((void*)0);
   VAR_3->ifl_sds.ifsd_cl = ((void*)0);
   VAR_3->ifl_sds.ifsd_ba = ((void*)0);
   VAR_3->ifl_sds.ifsd_map = ((void*)0);
  }
  FUNC_4(VAR_2->ifr_fl, VAR_1);
  VAR_2->ifr_fl = ((void*)0);
  FUNC_4(VAR_2->ifr_ifdi, VAR_1);
  VAR_2->ifr_ifdi = ((void*)0);
  VAR_2->ifr_cq_cidx = 0;
 }
}
