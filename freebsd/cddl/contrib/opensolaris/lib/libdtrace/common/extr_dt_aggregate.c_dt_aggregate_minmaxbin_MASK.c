
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_14__ {int dtrd_size; int dtrd_action; scalar_t__ dtrd_offset; } ;
typedef TYPE_1__ dtrace_recdesc_t ;
struct TYPE_19__ {TYPE_5__* dtah_all; } ;
struct TYPE_20__ {TYPE_6__ dtat_hash; } ;
struct TYPE_15__ {TYPE_7__ dt_aggregate; } ;
typedef TYPE_2__ dtrace_hdl_t ;
typedef int dtrace_aggid_t ;
struct TYPE_16__ {int dtagd_nrecs; size_t dtagd_varid; TYPE_1__* dtagd_rec; } ;
typedef TYPE_3__ dtrace_aggdesc_t ;
struct TYPE_17__ {int dtada_minbin; int dtada_maxbin; int dtada_flags; TYPE_3__* dtada_desc; scalar_t__ dtada_data; } ;
typedef TYPE_4__ dtrace_aggdata_t ;
struct TYPE_18__ {TYPE_4__ dtahe_data; struct TYPE_18__* dtahe_nextall; } ;
typedef TYPE_5__ dt_ahashent_t ;
typedef TYPE_6__ dt_ahash_t ;
typedef TYPE_7__ dt_aggregate_t ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ boolean_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__**) ;
 TYPE_4__** FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_3(dtrace_hdl_t *VAR_3, boolean_t VAR_4)
{
 dt_ahashent_t *VAR_5;
 dtrace_aggdata_t **VAR_6;
 dtrace_aggid_t VAR_7 = VAR_0, VAR_8;
 dt_aggregate_t *VAR_9 = &VAR_3->dt_aggregate;
 dt_ahash_t *VAR_10 = &VAR_9->dtat_hash;

 for (VAR_5 = VAR_10->dtah_all; VAR_5 != ((void*)0); VAR_5 = VAR_5->dtahe_nextall) {
  dtrace_aggdata_t *VAR_11 = &VAR_5->dtahe_data;

  if ((VAR_8 = FUNC_0(VAR_5)) > VAR_7)
   VAR_7 = VAR_8;

  VAR_11->dtada_minbin = 0;
  VAR_11->dtada_maxbin = 0;
  VAR_11->dtada_flags &= ~VAR_1;
 }

 if (VAR_4 || VAR_7 == VAR_0)
  return (0);

 VAR_6 = FUNC_2(VAR_3, (VAR_7 + 1) * sizeof (dtrace_aggdata_t *));

 if (VAR_6 == ((void*)0))
  return (-1);

 for (VAR_5 = VAR_10->dtah_all; VAR_5 != ((void*)0); VAR_5 = VAR_5->dtahe_nextall) {
  dtrace_aggdata_t *VAR_12 = &VAR_5->dtahe_data;
  dtrace_aggdesc_t *VAR_13 = VAR_12->dtada_desc;
  dtrace_recdesc_t *VAR_14;
  caddr_t VAR_15;
  int64_t *VAR_16;
  int VAR_17 = -1, VAR_18 = -1, VAR_19;
  int VAR_20 = 0, VAR_21;

  VAR_14 = &VAR_13->dtagd_rec[VAR_13->dtagd_nrecs - 1];
  VAR_21 = VAR_14->dtrd_size / sizeof (int64_t);
  VAR_15 = VAR_12->dtada_data;
  VAR_16 = (int64_t *)(uintptr_t)(VAR_15 + VAR_14->dtrd_offset);

  switch (VAR_14->dtrd_action) {
  case 129:




   VAR_20 = 1;
   VAR_17 = VAR_20;
   VAR_18 = VAR_21 - 1 - VAR_20;
   break;

  case 128:
   for (VAR_19 = VAR_20; VAR_19 < VAR_21; VAR_19++) {
    if (!VAR_16[VAR_19])
     continue;

    if (VAR_17 == -1)
     VAR_17 = VAR_19 - VAR_20;

    VAR_18 = VAR_19 - VAR_20;
   }

   if (VAR_17 == -1) {





    VAR_17 = VAR_18 = VAR_2;
   }

   break;

  default:
   continue;
  }

  if (VAR_6[VAR_13->dtagd_varid] == ((void*)0)) {
   VAR_6[VAR_13->dtagd_varid] = VAR_12;
   VAR_12->dtada_flags |= VAR_1;
   VAR_12->dtada_minbin = VAR_17;
   VAR_12->dtada_maxbin = VAR_18;
   continue;
  }

  if (VAR_17 < VAR_6[VAR_13->dtagd_varid]->dtada_minbin)
   VAR_6[VAR_13->dtagd_varid]->dtada_minbin = VAR_17;

  if (VAR_18 > VAR_6[VAR_13->dtagd_varid]->dtada_maxbin)
   VAR_6[VAR_13->dtagd_varid]->dtada_maxbin = VAR_18;
 }




 for (VAR_5 = VAR_10->dtah_all; VAR_5 != ((void*)0); VAR_5 = VAR_5->dtahe_nextall) {
  dtrace_aggdata_t *VAR_22 = &VAR_5->dtahe_data, *VAR_23;
  dtrace_aggdesc_t *VAR_24 = VAR_22->dtada_desc;

  if ((VAR_23 = VAR_6[VAR_24->dtagd_varid]) == ((void*)0) || VAR_22 == VAR_23)
   continue;

  VAR_22->dtada_minbin = VAR_23->dtada_minbin;
  VAR_22->dtada_maxbin = VAR_23->dtada_maxbin;
  VAR_22->dtada_flags |= VAR_1;
 }

 FUNC_1(VAR_3, VAR_6);

 return (0);
}
