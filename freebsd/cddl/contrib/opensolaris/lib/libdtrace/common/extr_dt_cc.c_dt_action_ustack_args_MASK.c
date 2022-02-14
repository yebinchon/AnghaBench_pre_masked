
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {scalar_t__* dt_options; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_12__ {int dtad_arg; int dtad_kind; } ;
typedef TYPE_3__ dtrace_actdesc_t ;
struct TYPE_13__ {scalar_t__ dn_kind; int dn_flags; scalar_t__ dn_value; struct TYPE_13__* dn_list; TYPE_1__* dn_ident; struct TYPE_13__* dn_args; } ;
typedef TYPE_4__ dt_node_t ;
struct TYPE_10__ {scalar_t__ di_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_4(dtrace_hdl_t *VAR_13, dtrace_actdesc_t *VAR_14, dt_node_t *VAR_15)
{
 uint32_t VAR_16 = 0;
 uint32_t VAR_17 = 0;
 dt_node_t *VAR_18 = VAR_15->dn_args;
 dt_node_t *VAR_19 = VAR_18 != ((void*)0) ? VAR_18->dn_list : ((void*)0);

 FUNC_1(VAR_15->dn_ident->di_id == VAR_6 ||
     VAR_15->dn_ident->di_id == VAR_7);

 if (VAR_15->dn_ident->di_id == VAR_6) {
  if (VAR_13->dt_options[VAR_2] != VAR_4)
   VAR_16 = VAR_13->dt_options[VAR_2];

  if (VAR_13->dt_options[VAR_3] != VAR_4)
   VAR_17 = VAR_13->dt_options[VAR_3];

  VAR_14->dtad_kind = VAR_0;
 } else {
  FUNC_1(VAR_15->dn_ident->di_id == VAR_7);

  if (VAR_13->dt_options[VAR_5] != VAR_4)
   VAR_16 = VAR_13->dt_options[VAR_5];

  VAR_14->dtad_kind = VAR_1;
 }

 if (VAR_18 != ((void*)0)) {
  if (!FUNC_3(VAR_18)) {
   FUNC_2(VAR_18, VAR_10, "ustack( ) argument #1 "
       "must be a non-zero positive integer constant\n");
  }
  VAR_16 = (uint32_t)VAR_18->dn_value;
 }

 if (VAR_19 != ((void*)0)) {
  if (VAR_19->dn_kind != VAR_9 ||
      ((VAR_19->dn_flags & VAR_8) &&
      (int64_t)VAR_19->dn_value < 0)) {
   FUNC_2(VAR_19, VAR_12, "ustack( ) argument #2 "
       "must be a positive integer constant\n");
  }

  if (VAR_19->dn_list != ((void*)0)) {
   FUNC_2(VAR_19, VAR_11, "ustack( ) prototype "
       "mismatch: too many arguments\n");
  }

  VAR_17 = (uint32_t)VAR_19->dn_value;
 }

 VAR_14->dtad_arg = FUNC_0(VAR_16, VAR_17);
}
