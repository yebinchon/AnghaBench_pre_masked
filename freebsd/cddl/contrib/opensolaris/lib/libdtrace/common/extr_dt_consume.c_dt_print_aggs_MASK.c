
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {size_t dtrd_size; scalar_t__ dtrd_offset; int dtrd_action; } ;
typedef TYPE_1__ dtrace_recdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_12__ {int dtagd_nrecs; int dtagd_flags; TYPE_1__* dtagd_rec; } ;
typedef TYPE_2__ dtrace_aggdesc_t ;
struct TYPE_13__ {int dtada_flags; int dtada_normal; scalar_t__ dtada_data; TYPE_2__* dtada_desc; } ;
typedef TYPE_3__ dtrace_aggdata_t ;
typedef int dtrace_actkind_t ;
struct TYPE_14__ {int dtpa_agghist; int dtpa_aggpack; int dtpa_allunprint; int * dtpa_dtp; int * dtpa_fp; } ;
typedef TYPE_4__ dt_print_aggdata_t ;
typedef scalar_t__ caddr_t ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *,TYPE_1__*,TYPE_3__ const*,int) ;
 scalar_t__ FUNC_3 (int *,int *,TYPE_1__*,scalar_t__,size_t,TYPE_3__ const*,int,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *,int *,char*) ;

int
FUNC_5(const dtrace_aggdata_t **VAR_7, int VAR_8, void *VAR_9)
{
 int VAR_10, VAR_11 = 0;
 dt_print_aggdata_t *VAR_12 = VAR_9;
 const dtrace_aggdata_t *VAR_13 = VAR_7[0];
 dtrace_aggdesc_t *VAR_14 = VAR_13->dtada_desc;
 FILE *VAR_15 = VAR_12->dtpa_fp;
 dtrace_hdl_t *VAR_16 = VAR_12->dtpa_dtp;
 dtrace_recdesc_t *VAR_17;
 dtrace_actkind_t VAR_18;
 caddr_t VAR_19;
 size_t VAR_20;

 VAR_12->dtpa_agghist = (VAR_13->dtada_flags & VAR_2);
 VAR_12->dtpa_aggpack = (VAR_13->dtada_flags & VAR_1);






 for (VAR_10 = 1; VAR_10 < VAR_14->dtagd_nrecs; VAR_10++) {
  VAR_17 = &VAR_14->dtagd_rec[VAR_10];
  VAR_18 = VAR_17->dtrd_action;
  VAR_19 = VAR_13->dtada_data + VAR_17->dtrd_offset;
  VAR_20 = VAR_17->dtrd_size;

  if (FUNC_0(VAR_18)) {
   VAR_11 = VAR_10;
   break;
  }

  if (FUNC_3(VAR_16, VAR_15, VAR_17, VAR_19,
      VAR_20, VAR_13, 1, VAR_12) < 0)
   return (-1);

  if (FUNC_2(VAR_16, ((void*)0), VAR_17, VAR_13,
      VAR_4) < 0)
   return (-1);
 }

 FUNC_1(VAR_11 != 0);

 for (VAR_10 = (VAR_8 == 1 ? 0 : 1); VAR_10 < VAR_8; VAR_10++) {
  uint64_t VAR_21;

  VAR_13 = VAR_7[VAR_10];
  VAR_14 = VAR_13->dtada_desc;
  VAR_17 = &VAR_14->dtagd_rec[VAR_11];
  VAR_18 = VAR_17->dtrd_action;
  VAR_19 = VAR_13->dtada_data + VAR_17->dtrd_offset;
  VAR_20 = VAR_17->dtrd_size;

  FUNC_1(FUNC_0(VAR_18));
  VAR_21 = VAR_13->dtada_normal;

  if (FUNC_3(VAR_16, VAR_15, VAR_17, VAR_19,
      VAR_20, VAR_13, VAR_21, VAR_12) < 0)
   return (-1);

  if (FUNC_2(VAR_16, ((void*)0), VAR_17, VAR_13,
      VAR_6) < 0)
   return (-1);

  if (!VAR_12->dtpa_allunprint)
   VAR_14->dtagd_flags |= VAR_0;
 }

 if (!VAR_12->dtpa_agghist && !VAR_12->dtpa_aggpack) {
  if (FUNC_4(VAR_16, VAR_15, "\n") < 0)
   return (-1);
 }

 if (FUNC_2(VAR_16, ((void*)0), ((void*)0), VAR_13,
     VAR_3 | VAR_5) < 0)
  return (-1);

 return (0);
}
