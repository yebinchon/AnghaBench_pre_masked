
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


typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_14__ {int dtrd_action; scalar_t__ dtrd_offset; } ;
typedef TYPE_1__ dtrace_recdesc_t ;
struct TYPE_19__ {TYPE_5__* dtah_all; } ;
struct TYPE_20__ {TYPE_6__ dtat_hash; } ;
struct TYPE_15__ {scalar_t__* dt_options; TYPE_7__ dt_aggregate; } ;
typedef TYPE_2__ dtrace_hdl_t ;
typedef int dtrace_aggid_t ;
struct TYPE_16__ {int dtagd_nrecs; size_t dtagd_varid; TYPE_1__* dtagd_rec; } ;
typedef TYPE_3__ dtrace_aggdesc_t ;
struct TYPE_17__ {int dtada_total; int dtada_flags; TYPE_3__* dtada_desc; scalar_t__ dtada_data; } ;
typedef TYPE_4__ dtrace_aggdata_t ;
struct TYPE_18__ {TYPE_4__ dtahe_data; struct TYPE_18__* dtahe_nextall; } ;
typedef TYPE_5__ dt_ahashent_t ;
typedef TYPE_6__ dt_ahash_t ;
typedef TYPE_7__ dt_aggregate_t ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ boolean_t ;






 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__**) ;
 int FUNC_2 (int *,int) ;
 TYPE_4__** FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_4(dtrace_hdl_t *VAR_7, boolean_t VAR_8)
{
 dt_ahashent_t *VAR_9;
 dtrace_aggdata_t **VAR_10;
 dtrace_aggid_t VAR_11 = VAR_2, VAR_12;
 dt_aggregate_t *VAR_13 = &VAR_7->dt_aggregate;
 dt_ahash_t *VAR_14 = &VAR_13->dtat_hash;
 uint32_t VAR_15;

 VAR_15 = VAR_6 | VAR_4 | VAR_5;
 for (VAR_9 = VAR_14->dtah_all; VAR_9 != ((void*)0); VAR_9 = VAR_9->dtahe_nextall) {
  dtrace_aggdata_t *VAR_16 = &VAR_9->dtahe_data;

  if ((VAR_12 = FUNC_0(VAR_9)) > VAR_11)
   VAR_11 = VAR_12;

  VAR_16->dtada_total = 0;
  VAR_16->dtada_flags &= ~VAR_15;
 }

 if (VAR_8 || VAR_11 == VAR_2)
  return (0);

 VAR_10 = FUNC_3(VAR_7, (VAR_11 + 1) * sizeof (dtrace_aggdata_t *));

 if (VAR_10 == ((void*)0))
  return (-1);

 for (VAR_9 = VAR_14->dtah_all; VAR_9 != ((void*)0); VAR_9 = VAR_9->dtahe_nextall) {
  dtrace_aggdata_t *VAR_17 = &VAR_9->dtahe_data;
  dtrace_aggdesc_t *VAR_18 = VAR_17->dtada_desc;
  dtrace_recdesc_t *VAR_19;
  caddr_t VAR_20;
  int64_t VAR_21, *VAR_22;

  VAR_19 = &VAR_18->dtagd_rec[VAR_18->dtagd_nrecs - 1];
  VAR_20 = VAR_17->dtada_data;
  VAR_22 = (int64_t *)(uintptr_t)(VAR_20 + VAR_19->dtrd_offset);

  switch (VAR_19->dtrd_action) {
  case 129:
   VAR_21 = FUNC_2((uint64_t *)VAR_22, 1);
   break;

  case 128:
  case 130:
   VAR_21 = *VAR_22;
   break;

  case 131:
   VAR_21 = VAR_22[0] ? (VAR_22[1] / VAR_22[0]) : 0;
   break;

  default:
   continue;
  }

  if (VAR_10[VAR_18->dtagd_varid] == ((void*)0)) {
   VAR_10[VAR_18->dtagd_varid] = VAR_17;
   VAR_17->dtada_flags |= VAR_6;
  } else {
   VAR_17 = VAR_10[VAR_18->dtagd_varid];
  }

  if (VAR_21 > 0)
   VAR_17->dtada_flags |= VAR_5;

  if (VAR_21 < 0) {
   VAR_17->dtada_flags |= VAR_4;
   VAR_21 = -VAR_21;
  }

  if (VAR_7->dt_options[VAR_0] != VAR_1) {
   VAR_21 = (int64_t)((long double)VAR_21 *
       (1 / VAR_3));

   if (VAR_21 > VAR_17->dtada_total)
    VAR_17->dtada_total = VAR_21;
  } else {
   VAR_17->dtada_total += VAR_21;
  }
 }




 for (VAR_9 = VAR_14->dtah_all; VAR_9 != ((void*)0); VAR_9 = VAR_9->dtahe_nextall) {
  dtrace_aggdata_t *VAR_23 = &VAR_9->dtahe_data, *VAR_24;
  dtrace_aggdesc_t *VAR_25 = VAR_23->dtada_desc;

  if ((VAR_24 = VAR_10[VAR_25->dtagd_varid]) == ((void*)0) || VAR_23 == VAR_24)
   continue;

  VAR_23->dtada_total = VAR_24->dtada_total;
  VAR_23->dtada_flags |= (VAR_24->dtada_flags & VAR_15);
 }

 FUNC_1(VAR_7, VAR_10);

 return (0);
}
