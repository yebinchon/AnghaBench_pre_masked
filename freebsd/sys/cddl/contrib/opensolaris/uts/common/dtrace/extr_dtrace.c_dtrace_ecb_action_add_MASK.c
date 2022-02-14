
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
typedef int pc_t ;
struct TYPE_17__ {int* dts_options; int dts_destructive; int dts_speculates; } ;
typedef TYPE_2__ dtrace_state_t ;
typedef int dtrace_rechdr_t ;
struct TYPE_18__ {int dtrd_size; int dtrd_action; int dtrd_arg; void* dtrd_format; void* dtrd_alignment; int dtrd_uarg; } ;
typedef TYPE_3__ dtrace_recdesc_t ;
typedef int dtrace_optval_t ;
struct TYPE_19__ {int dte_size; TYPE_6__* dte_action_last; TYPE_6__* dte_action; TYPE_2__* dte_state; } ;
typedef TYPE_4__ dtrace_ecb_t ;
struct TYPE_16__ {int dtdt_size; int dtdt_flags; int dtdt_kind; } ;
struct TYPE_20__ {TYPE_1__ dtdo_rtype; scalar_t__ dtdo_destructive; } ;
typedef TYPE_5__ dtrace_difo_t ;
struct TYPE_21__ {int dta_refcnt; scalar_t__ dta_kind; struct TYPE_21__* dta_next; struct TYPE_21__* dta_prev; TYPE_5__* dta_difo; TYPE_3__ dta_rec; } ;
typedef TYPE_6__ dtrace_action_t ;
struct TYPE_22__ {int dtad_arg; int dtad_kind; int dtad_uarg; TYPE_5__* dtad_difo; } ;
typedef TYPE_7__ dtrace_actdesc_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;







 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_5__*) ;
 TYPE_6__* FUNC_9 (TYPE_4__*,TYPE_7__*) ;
 void* FUNC_10 (TYPE_2__*,char*) ;
 int VAR_10 ;
 TYPE_6__* FUNC_11 (int,int ) ;

__attribute__((used)) static int
FUNC_12(dtrace_ecb_t *VAR_11, dtrace_actdesc_t *VAR_12)
{
 dtrace_action_t *VAR_13, *VAR_14;
 dtrace_difo_t *VAR_15 = VAR_12->dtad_difo;
 uint32_t VAR_16 = 0, VAR_17 = sizeof (uint8_t), VAR_18;
 uint16_t VAR_19 = 0;
 dtrace_recdesc_t *VAR_20;
 dtrace_state_t *VAR_21 = VAR_11->dte_state;
 dtrace_optval_t *VAR_22 = VAR_21->dts_options, VAR_23 = 0, VAR_24;
 uint64_t VAR_25 = VAR_12->dtad_arg;

 FUNC_0(FUNC_6(&VAR_10));
 FUNC_0(VAR_11->dte_action == ((void*)0) || VAR_11->dte_action->dta_refcnt == 1);

 if (FUNC_1(VAR_12->dtad_kind)) {




  dtrace_action_t *VAR_26;

  for (VAR_26 = VAR_11->dte_action; VAR_26 != ((void*)0); VAR_26 = VAR_26->dta_next) {
   if (VAR_26->dta_kind == 151)
    return (VAR_7);

   if (VAR_26->dta_kind == 138)
    return (VAR_7);
  }

  VAR_13 = FUNC_9(VAR_11, VAR_12);

  if (VAR_13 == ((void*)0))
   return (VAR_7);
 } else {
  if (FUNC_2(VAR_12->dtad_kind) ||
      (VAR_12->dtad_kind == 150 &&
      VAR_15 != ((void*)0) && VAR_15->dtdo_destructive)) {
   VAR_21->dts_destructive = 1;
  }

  switch (VAR_12->dtad_kind) {
  case 141:
  case 142:
  case 134:
  case 147:
  case 150:




   if (VAR_25 == 0) {
    FUNC_0(VAR_12->dtad_kind == 142 ||
        VAR_12->dtad_kind == 150);
    VAR_19 = 0;
   } else {
    FUNC_0(VAR_25 != 0);



    VAR_19 = FUNC_10(VAR_21,
        (char *)(uintptr_t)VAR_25);
   }


  case 145:
  case 133:
  case 132:
   if (VAR_15 == ((void*)0))
    return (VAR_7);

   if ((VAR_16 = VAR_15->dtdo_rtype.dtdt_size) != 0)
    break;

   if (VAR_15->dtdo_rtype.dtdt_kind == VAR_1) {
    if (!(VAR_15->dtdo_rtype.dtdt_flags & VAR_0))
     return (VAR_7);

    VAR_16 = VAR_22[VAR_5];
   }

   break;

  case 137:
   if ((VAR_23 = VAR_25) == 0) {
    VAR_23 = VAR_22[VAR_4];
    FUNC_0(VAR_23 > 0);
    VAR_25 = VAR_23;
   }

   VAR_16 = VAR_23 * sizeof (pc_t);
   break;

  case 146:
   if ((VAR_24 = FUNC_5(VAR_25)) == 0)
    VAR_24 = VAR_22[VAR_3];

   if ((VAR_23 = FUNC_4(VAR_25)) == 0)
    VAR_23 = VAR_22[VAR_2];

   VAR_25 = FUNC_3(VAR_23, VAR_24);


  case 129:
   if (VAR_12->dtad_kind != 146 &&
       (VAR_23 = FUNC_4(VAR_25)) == 0) {
    VAR_24 = FUNC_5(VAR_25);
    VAR_23 = VAR_22[VAR_6];
    FUNC_0(VAR_23 > 0);
    VAR_25 = FUNC_3(VAR_23, VAR_24);
   }




   VAR_16 = (VAR_23 + 1) * sizeof (uint64_t);
   VAR_16 += FUNC_5(VAR_25);
   VAR_16 = FUNC_7(VAR_16, (uint32_t)(sizeof (uintptr_t)));

   break;

  case 135:
  case 144:
   if (VAR_15 == ((void*)0) || ((VAR_16 = VAR_15->dtdo_rtype.dtdt_size) !=
       sizeof (uint64_t)) ||
       (VAR_15->dtdo_rtype.dtdt_flags & VAR_0))
    return (VAR_7);
   break;

  case 128:
  case 130:
  case 131:
   if (VAR_15 == ((void*)0) ||
       (VAR_15->dtdo_rtype.dtdt_size != sizeof (uint64_t)) ||
       (VAR_15->dtdo_rtype.dtdt_flags & VAR_0))
    return (VAR_7);







   VAR_16 = 2 * sizeof (uint64_t);
   break;

  case 136:
  case 153:
  case 143:
   break;

  case 152:
  case 149:
  case 139:
   if (VAR_15 == ((void*)0))
    return (VAR_7);
   break;

  case 148:
   if (VAR_15 == ((void*)0) ||
       (VAR_16 = VAR_15->dtdo_rtype.dtdt_size) != sizeof (int) ||
       (VAR_15->dtdo_rtype.dtdt_flags & VAR_0))
    return (VAR_7);
   break;

  case 138:
   if (VAR_11->dte_size > sizeof (dtrace_rechdr_t))
    return (VAR_7);

   if (VAR_15 == ((void*)0))
    return (VAR_7);

   VAR_21->dts_speculates = 1;
   break;

  case 140:
       VAR_16 = VAR_15->dtdo_rtype.dtdt_size;
   break;

  case 151: {
   dtrace_action_t *VAR_27 = VAR_11->dte_action;

   for (; VAR_27 != ((void*)0); VAR_27 = VAR_27->dta_next) {
    if (VAR_27->dta_kind == 151)
     return (VAR_7);
   }

   if (VAR_15 == ((void*)0))
    return (VAR_7);
   break;
  }

  default:
   return (VAR_7);
  }

  if (VAR_16 != 0 || VAR_12->dtad_kind == 138) {





   dtrace_action_t *VAR_28 = VAR_11->dte_action;

   for (; VAR_28 != ((void*)0); VAR_28 = VAR_28->dta_next) {
    if (VAR_28->dta_kind == 151)
     return (VAR_7);
   }
  }

  VAR_13 = FUNC_11(sizeof (dtrace_action_t), VAR_9);
  VAR_13->dta_rec.dtrd_size = VAR_16;
 }

 VAR_13->dta_refcnt = 1;
 VAR_20 = &VAR_13->dta_rec;
 VAR_16 = VAR_20->dtrd_size;

 for (VAR_18 = sizeof (uint64_t) - 1; VAR_16 != 0 && VAR_18 > 0; VAR_18 >>= 1) {
  if (!(VAR_16 & VAR_18)) {
   VAR_17 = VAR_18 + 1;
   break;
  }
 }

 VAR_13->dta_kind = VAR_12->dtad_kind;

 if ((VAR_13->dta_difo = VAR_15) != ((void*)0))
  FUNC_8(VAR_15);

 VAR_20->dtrd_action = VAR_13->dta_kind;
 VAR_20->dtrd_arg = VAR_25;
 VAR_20->dtrd_uarg = VAR_12->dtad_uarg;
 VAR_20->dtrd_alignment = (uint16_t)VAR_17;
 VAR_20->dtrd_format = VAR_19;

 if ((VAR_14 = VAR_11->dte_action_last) != ((void*)0)) {
  FUNC_0(VAR_11->dte_action != ((void*)0));
  VAR_13->dta_prev = VAR_14;
  VAR_14->dta_next = VAR_13;
 } else {
  FUNC_0(VAR_11->dte_action == ((void*)0));
  VAR_11->dte_action = VAR_13;
 }

 VAR_11->dte_action_last = VAR_13;

 return (0);
}
