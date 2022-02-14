
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_9__ {uintptr_t ls_time; scalar_t__ ls_count; scalar_t__* ls_hist; } ;
typedef TYPE_1__ lsrec_t ;
struct TYPE_10__ {scalar_t__ lsd_count; TYPE_1__* lsd_next; } ;
typedef TYPE_2__ lsdata_t ;
struct TYPE_11__ {int dtrd_size; scalar_t__ dtrd_offset; } ;
typedef TYPE_3__ dtrace_recdesc_t ;
struct TYPE_12__ {scalar_t__ dtagd_varid; int dtagd_nrecs; TYPE_3__* dtagd_rec; } ;
typedef TYPE_4__ dtrace_aggdesc_t ;
struct TYPE_13__ {scalar_t__ dtada_data; TYPE_4__* dtada_desc; } ;
typedef TYPE_5__ dtrace_aggdata_t ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(const dtrace_aggdata_t *VAR_7, void *VAR_8)
{
 const dtrace_aggdesc_t *VAR_9 = VAR_7->dtada_desc;
 caddr_t VAR_10 = VAR_7->dtada_data;
 lsdata_t *VAR_11 = VAR_8;
 lsrec_t *VAR_12 = VAR_11->lsd_next;
 const dtrace_recdesc_t *VAR_13;
 uint64_t *VAR_14, *VAR_15;
 int VAR_16, VAR_17;

 FUNC_0(VAR_11->lsd_count < VAR_5);
 if (VAR_9->dtagd_varid > VAR_0 + 1) {




  VAR_13 = &VAR_9->dtagd_rec[VAR_9->dtagd_nrecs - 1];

  if (VAR_9->dtagd_varid != VAR_0 + 2)
   FUNC_1(0, "bad variable ID in aggregation record");

  if (VAR_13->dtrd_size !=
      VAR_2 * sizeof (uint64_t))
   FUNC_1(0, "bad quantize size in aggregation record");


  VAR_15 = (uint64_t *)(VAR_10 + VAR_13->dtrd_offset);

  for (VAR_16 = VAR_3, VAR_17 = 0;
      VAR_16 < VAR_2; VAR_16++, VAR_17++)
   VAR_12->ls_hist[VAR_17] = VAR_15[VAR_16];

  goto out;
 }

 FUNC_2(VAR_12, &VAR_9->dtagd_rec[1],
     VAR_9->dtagd_nrecs - 1, VAR_10);

 VAR_13 = &VAR_9->dtagd_rec[VAR_9->dtagd_nrecs - 1];

 if (VAR_13->dtrd_size != 2 * sizeof (uint64_t))
  FUNC_1(0, "bad avg size in aggregation record");


 VAR_14 = (uint64_t *)(VAR_10 + VAR_13->dtrd_offset);
 VAR_12->ls_count = (uint32_t)VAR_14[0];
 VAR_12->ls_time = (uintptr_t)VAR_14[1];

 if (VAR_6 >= VAR_4)
  return (VAR_1);

out:
 VAR_11->lsd_next = (lsrec_t *)((uintptr_t)VAR_12 + VAR_6);
 VAR_11->lsd_count++;

 return (VAR_1);
}
