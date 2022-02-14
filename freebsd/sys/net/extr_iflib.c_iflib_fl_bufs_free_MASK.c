
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct mbuf {int dummy; } ;
typedef TYPE_2__* iflib_fl_t ;
typedef TYPE_3__* iflib_dma_info_t ;
typedef struct mbuf* caddr_t ;
typedef int bus_dmamap_t ;
struct TYPE_7__ {int idi_size; int idi_vaddr; } ;
struct TYPE_5__ {struct mbuf** ifsd_m; struct mbuf** ifsd_cl; int * ifsd_map; } ;
struct TYPE_6__ {size_t ifl_size; scalar_t__ ifl_fragidx; scalar_t__ ifl_gen; scalar_t__ ifl_pidx; scalar_t__ ifl_cidx; scalar_t__ ifl_credits; TYPE_1__ ifl_sds; int ifl_cl_dequeued; int ifl_m_dequeued; int ifl_zone; int ifl_buf_tag; TYPE_3__* ifl_ifdi; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mbuf*,int ,int ,int ) ;
 int FUNC_5 (int ,struct mbuf*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(iflib_fl_t VAR_4)
{
 iflib_dma_info_t VAR_5 = VAR_4->ifl_ifdi;
 bus_dmamap_t VAR_6;
 uint32_t VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->ifl_size; VAR_7++) {
  struct mbuf **VAR_8 = &VAR_4->ifl_sds.ifsd_m[VAR_7];
  caddr_t *VAR_9 = &VAR_4->ifl_sds.ifsd_cl[VAR_7];

  if (*VAR_9 != ((void*)0)) {
   VAR_6 = VAR_4->ifl_sds.ifsd_map[VAR_7];
   FUNC_1(VAR_4->ifl_buf_tag, VAR_6,
       VAR_0);
   FUNC_2(VAR_4->ifl_buf_tag, VAR_6);
   if (*VAR_9 != ((void*)0))
    FUNC_5(VAR_4->ifl_zone, *VAR_9);
   if (*VAR_8 != ((void*)0)) {
    FUNC_4(*VAR_8, VAR_2, VAR_1, 0);
    FUNC_5(VAR_3, *VAR_8);
   }
  } else {
   FUNC_0(*VAR_9 == ((void*)0));
   FUNC_0(*VAR_8 == ((void*)0));
  }




  *VAR_9 = ((void*)0);
  *VAR_8 = ((void*)0);
 }
 VAR_4->ifl_credits = VAR_4->ifl_cidx = VAR_4->ifl_pidx = VAR_4->ifl_gen = VAR_4->ifl_fragidx = 0;
 FUNC_3(VAR_5->idi_vaddr, VAR_5->idi_size);
}
