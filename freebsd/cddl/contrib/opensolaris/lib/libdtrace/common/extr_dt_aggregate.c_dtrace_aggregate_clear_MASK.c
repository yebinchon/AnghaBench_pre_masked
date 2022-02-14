
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t dtrd_offset; int dtrd_size; } ;
typedef TYPE_1__ dtrace_recdesc_t ;
struct TYPE_14__ {TYPE_5__* dtah_all; } ;
struct TYPE_15__ {int dtat_maxcpu; TYPE_6__ dtat_hash; } ;
struct TYPE_10__ {TYPE_7__ dt_aggregate; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_11__ {int dtagd_nrecs; TYPE_1__* dtagd_rec; } ;
typedef TYPE_3__ dtrace_aggdesc_t ;
struct TYPE_12__ {int ** dtada_percpu; int * dtada_data; TYPE_3__* dtada_desc; } ;
typedef TYPE_4__ dtrace_aggdata_t ;
struct TYPE_13__ {TYPE_4__ dtahe_data; struct TYPE_13__* dtahe_nextall; } ;
typedef TYPE_5__ dt_ahashent_t ;
typedef TYPE_6__ dt_ahash_t ;
typedef TYPE_7__ dt_aggregate_t ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(dtrace_hdl_t *VAR_0)
{
 dt_aggregate_t *VAR_1 = &VAR_0->dt_aggregate;
 dt_ahash_t *VAR_2 = &VAR_1->dtat_hash;
 dt_ahashent_t *VAR_3;
 dtrace_aggdata_t *VAR_4;
 dtrace_aggdesc_t *VAR_5;
 dtrace_recdesc_t *VAR_6;
 int VAR_7, VAR_8 = VAR_1->dtat_maxcpu;

 for (VAR_3 = VAR_2->dtah_all; VAR_3 != ((void*)0); VAR_3 = VAR_3->dtahe_nextall) {
  VAR_5 = VAR_3->dtahe_data.dtada_desc;
  VAR_6 = &VAR_5->dtagd_rec[VAR_5->dtagd_nrecs - 1];
  VAR_4 = &VAR_3->dtahe_data;

  FUNC_0(&VAR_4->dtada_data[VAR_6->dtrd_offset], VAR_6->dtrd_size);

  if (VAR_4->dtada_percpu == ((void*)0))
   continue;

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   FUNC_0(VAR_4->dtada_percpu[VAR_7], VAR_6->dtrd_size);
 }
}
