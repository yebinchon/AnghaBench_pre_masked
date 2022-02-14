
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_20__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t processorid_t ;
typedef int dtrace_xcall_t ;
struct TYPE_28__ {int dcr_visible; TYPE_3__* dcr_cred; int dcr_destructive; } ;
struct TYPE_24__ {int dtvs_dynvars; } ;
struct TYPE_29__ {int* dts_options; scalar_t__ dts_activity; int dts_nspeculations; scalar_t__ dts_necbs; int dts_needed; scalar_t__ dts_getf; TYPE_6__* dts_speculations; TYPE_6__* dts_aggbuffer; TYPE_6__* dts_buffer; TYPE_4__ dts_cred; void* dts_deadman; void* dts_cleaner; int dts_laststatus; int dts_alive; TYPE_1__ dts_vstate; int * dts_aggregations; scalar_t__ dts_speculates; struct TYPE_29__* dts_anon; scalar_t__ dts_destructive; } ;
typedef TYPE_5__ dtrace_state_t ;
struct TYPE_30__ {int dtb_flags; struct TYPE_30__* dtsp_buffer; } ;
typedef TYPE_6__ dtrace_speculation_t ;
typedef int dtrace_optval_t ;
typedef int dtrace_icookie_t ;
typedef TYPE_6__ dtrace_buffer_t ;
struct TYPE_31__ {int cyt_interval; scalar_t__ cyt_when; } ;
typedef TYPE_8__ cyc_time_t ;
struct TYPE_32__ {void* cyh_level; TYPE_5__* cyh_arg; void* cyh_func; } ;
typedef TYPE_9__ cyc_handler_t ;
typedef void* cyc_func_t ;
struct TYPE_27__ {TYPE_2__* cr_zone; } ;
struct TYPE_26__ {int zone_dtrace_getf; } ;
struct TYPE_25__ {size_t dta_beganon; TYPE_5__* dta_state; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (void**,int,scalar_t__,TYPE_5__*) ;
 int VAR_30 ;
 size_t VAR_31 ;
 void* FUNC_2 (TYPE_9__*,TYPE_8__*) ;
 TYPE_20__ VAR_32 ;
 TYPE_5__* FUNC_3 () ;
 scalar_t__ VAR_33 ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (TYPE_6__*) ;
 int VAR_34 ;
 int VAR_35 ;
 int * VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_5__*) ;
 int VAR_39 ;
 int * VAR_40 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int VAR_41 ;
 int FUNC_11 (int ,int ,int ,int ,int ,int ) ;
 int VAR_42 ;
 int FUNC_12 (TYPE_5__*) ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int FUNC_13 (TYPE_5__*) ;
 int VAR_45 ;
 int FUNC_14 (int ,int ,TYPE_5__*) ;
 int VAR_46 ;
 int FUNC_15 (TYPE_6__*,int) ;
 TYPE_6__* FUNC_16 (int,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int
FUNC_19(dtrace_state_t *VAR_47, processorid_t *VAR_48)
{
 dtrace_optval_t *VAR_49 = VAR_47->dts_options, VAR_50, VAR_51;
 dtrace_speculation_t *VAR_52;
 dtrace_buffer_t *VAR_53;




 int VAR_54 = 0, VAR_55, VAR_56 = VAR_29 * sizeof (dtrace_buffer_t);
 dtrace_icookie_t VAR_57;

 FUNC_17(&VAR_30);
 FUNC_17(&VAR_41);

 if (VAR_47->dts_activity != VAR_15) {
  VAR_54 = VAR_21;
  goto out;
 }





 FUNC_7(VAR_47);

 if (VAR_47->dts_destructive && !VAR_47->dts_cred.dcr_destructive) {
  VAR_54 = VAR_19;
  goto out;
 }

 FUNC_13(VAR_47);






 VAR_51 = VAR_49[VAR_9];
 FUNC_0(VAR_51 != VAR_12);

 if (VAR_51 > VAR_25) {
  VAR_54 = VAR_23;
  goto out;
 }

 VAR_52 = FUNC_16(VAR_51 * sizeof (dtrace_speculation_t),
     VAR_27 | VAR_26);

 if (VAR_52 == ((void*)0)) {
  VAR_54 = VAR_23;
  goto out;
 }

 VAR_47->dts_speculations = VAR_52;
 VAR_47->dts_nspeculations = (int)VAR_51;

 for (VAR_55 = 0; VAR_55 < VAR_51; VAR_55++) {
  if ((VAR_53 = FUNC_16(VAR_56,
      VAR_27 | VAR_26)) == ((void*)0)) {
   VAR_54 = VAR_23;
   goto err;
  }

  VAR_52[VAR_55].dtsp_buffer = VAR_53;
 }

 if (VAR_49[VAR_8] != VAR_12) {
  if (VAR_32.dta_state == ((void*)0)) {
   VAR_54 = VAR_22;
   goto out;
  }

  if (VAR_47->dts_necbs != 0) {
   VAR_54 = VAR_20;
   goto out;
  }

  VAR_47->dts_anon = FUNC_3();
  FUNC_0(VAR_47->dts_anon != ((void*)0));
  VAR_47 = VAR_47->dts_anon;






  VAR_47->dts_options[VAR_8] =
      VAR_49[VAR_8];

  *VAR_48 = VAR_32.dta_beganon;







  if (VAR_47->dts_activity != VAR_15)
   goto out;
 }

 if (VAR_49[VAR_2] != VAR_12 &&
     VAR_49[VAR_2] != 0) {
  if (VAR_47->dts_aggregations == ((void*)0)) {





   VAR_49[VAR_2] = 0;
  } else {




   if (VAR_49[VAR_5] == VAR_12 ||
       VAR_49[VAR_5] < VAR_47->dts_needed) {
    VAR_49[VAR_5] = VAR_47->dts_needed;
   }
  }
 }

 if (VAR_49[VAR_10] != VAR_12 &&
     VAR_49[VAR_10] != 0) {
  if (!VAR_47->dts_speculates) {





   VAR_49[VAR_10] = 0;
  }
 }





 VAR_50 = sizeof (uint64_t);

 if ((VAR_47->dts_needed != 0 && VAR_49[VAR_5] < VAR_50) ||
     (VAR_47->dts_speculates && VAR_49[VAR_10] < VAR_50) ||
     (VAR_47->dts_aggregations != ((void*)0) && VAR_49[VAR_2] < VAR_50)) {







  VAR_54 = VAR_24;
  goto out;
 }

 if ((VAR_54 = FUNC_12(VAR_47)) != 0)
  goto err;

 if ((VAR_50 = VAR_49[VAR_7]) == VAR_12)
  VAR_50 = VAR_38;

 do {
  VAR_54 = FUNC_6(&VAR_47->dts_vstate.dtvs_dynvars, VAR_50);

  if (VAR_54 == 0)
   break;

  if (VAR_49[VAR_3] == VAR_4)
   goto err;
 } while (VAR_50 >>= 1);

 VAR_49[VAR_7] = VAR_50;

 if (VAR_54 != 0)
  goto err;

 if (VAR_49[VAR_11] > VAR_45)
  VAR_49[VAR_11] = VAR_45;

 if (VAR_49[VAR_6] == 0)
  VAR_49[VAR_6] = VAR_34;

 if (VAR_49[VAR_6] < VAR_35)
  VAR_49[VAR_6] = VAR_35;

 if (VAR_49[VAR_6] > VAR_34)
  VAR_49[VAR_6] = VAR_34;

 VAR_47->dts_alive = VAR_47->dts_laststatus = FUNC_8();
 FUNC_1(&VAR_47->dts_cleaner, VAR_46 * VAR_49[VAR_6] / VAR_28,
     VAR_43, VAR_47);
 FUNC_1(&VAR_47->dts_deadman, VAR_46 * VAR_37 / VAR_28,
     VAR_44, VAR_47);


 VAR_47->dts_activity = VAR_16;
 VAR_57 = FUNC_9();
 *VAR_48 = VAR_31;
 FUNC_0(VAR_47->dts_buffer[*VAR_48].dtb_flags & VAR_1);
 VAR_47->dts_buffer[*VAR_48].dtb_flags &= ~VAR_1;

 FUNC_11(VAR_42,
     (uint64_t)(uintptr_t)VAR_47, 0, 0, 0, 0);
 FUNC_10(VAR_57);




 FUNC_0(VAR_47->dts_activity == VAR_16 ||
     VAR_47->dts_activity == VAR_14);

 if (VAR_47->dts_activity == VAR_16)
  VAR_47->dts_activity = VAR_13;
 FUNC_14(VAR_17,
     (dtrace_xcall_t)VAR_33, VAR_47);

 goto out;

err:
 FUNC_5(VAR_47->dts_buffer);
 FUNC_5(VAR_47->dts_aggbuffer);

 if ((VAR_51 = VAR_47->dts_nspeculations) == 0) {
  FUNC_0(VAR_47->dts_speculations == ((void*)0));
  goto out;
 }

 VAR_52 = VAR_47->dts_speculations;
 FUNC_0(VAR_52 != ((void*)0));

 for (VAR_55 = 0; VAR_55 < VAR_47->dts_nspeculations; VAR_55++) {
  if ((VAR_53 = VAR_52[VAR_55].dtsp_buffer) == ((void*)0))
   break;

  FUNC_5(VAR_53);
  FUNC_15(VAR_53, VAR_56);
 }

 FUNC_15(VAR_52, VAR_51 * sizeof (dtrace_speculation_t));
 VAR_47->dts_nspeculations = 0;
 VAR_47->dts_speculations = ((void*)0);

out:
 FUNC_18(&VAR_41);
 FUNC_18(&VAR_30);

 return (VAR_54);
}
