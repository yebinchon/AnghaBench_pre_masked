
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_8__ {scalar_t__ dtc_difversion; scalar_t__ dtc_difintregs; scalar_t__ dtc_diftupregs; scalar_t__ dtc_ctfmodel; } ;
struct TYPE_9__ {TYPE_1__ dt_conf; } ;
typedef TYPE_2__ dtrace_hdl_t ;
typedef int dof_sec_t ;
struct TYPE_10__ {scalar_t__* dofh_ident; int dofh_hdrsize; int dofh_secsize; int dofh_secoff; } ;
typedef TYPE_3__ dof_hdr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_2(dtrace_hdl_t *VAR_20, uint8_t VAR_21, dof_hdr_t *VAR_22)
{





 if (VAR_20->dt_conf.dtc_difversion > VAR_19 ||
     VAR_20->dt_conf.dtc_difintregs > VAR_19 ||
     VAR_20->dt_conf.dtc_diftupregs > VAR_19)
  return (FUNC_1(VAR_20, VAR_18));

 FUNC_0(VAR_22, sizeof (dof_hdr_t));

 VAR_22->dofh_ident[VAR_6] = VAR_12;
 VAR_22->dofh_ident[VAR_7] = VAR_13;
 VAR_22->dofh_ident[VAR_8] = VAR_14;
 VAR_22->dofh_ident[VAR_9] = VAR_15;

 if (VAR_20->dt_conf.dtc_ctfmodel == VAR_0)
  VAR_22->dofh_ident[VAR_10] = VAR_17;
 else
  VAR_22->dofh_ident[VAR_10] = VAR_16;

 VAR_22->dofh_ident[VAR_5] = VAR_1;
 VAR_22->dofh_ident[VAR_11] = VAR_21;
 VAR_22->dofh_ident[VAR_4] = VAR_20->dt_conf.dtc_difversion;
 VAR_22->dofh_ident[VAR_2] = VAR_20->dt_conf.dtc_difintregs;
 VAR_22->dofh_ident[VAR_3] = VAR_20->dt_conf.dtc_diftupregs;

 VAR_22->dofh_hdrsize = sizeof (dof_hdr_t);
 VAR_22->dofh_secsize = sizeof (dof_sec_t);
 VAR_22->dofh_secoff = sizeof (dof_hdr_t);

 return (0);
}
