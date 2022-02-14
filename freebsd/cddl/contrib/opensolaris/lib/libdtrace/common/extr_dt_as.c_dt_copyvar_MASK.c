
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef long ssize_t ;
struct TYPE_7__ {int dtdv_type; int dtdv_flags; int dtdv_scope; int dtdv_kind; int dtdv_id; scalar_t__ dtdv_name; } ;
typedef TYPE_2__ dtrace_difv_t ;
struct TYPE_8__ {int pcb_hdl; int pcb_jmpbuf; int pcb_strtab; int pcb_asvidx; TYPE_1__* pcb_difo; } ;
typedef TYPE_3__ dt_pcb_t ;
typedef int dt_node_t ;
typedef int dt_idhash_t ;
struct TYPE_9__ {int di_flags; scalar_t__ di_kind; int di_type; int di_ctfp; int di_id; int di_name; } ;
typedef TYPE_4__ dt_ident_t ;
typedef int dn ;
struct TYPE_6__ {TYPE_2__* dtdo_vartab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 long FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(dt_idhash_t *VAR_16, dt_ident_t *VAR_17, void *VAR_18)
{
 dt_pcb_t *VAR_19 = VAR_18;
 dtrace_difv_t *VAR_20;
 ssize_t VAR_21;
 dt_node_t VAR_22;

 if (!(VAR_17->di_flags & (VAR_10 | VAR_11)))
  return (0);

 VAR_20 = &VAR_19->pcb_difo->dtdo_vartab[VAR_19->pcb_asvidx++];
 VAR_21 = FUNC_3(VAR_19->pcb_strtab, VAR_17->di_name);

 if (VAR_21 == -1L)
  FUNC_4(VAR_19->pcb_jmpbuf, VAR_14);
 if (VAR_21 > VAR_8)
  FUNC_4(VAR_19->pcb_jmpbuf, VAR_15);

 VAR_20->dtdv_name = (uint_t)VAR_21;
 VAR_20->dtdv_id = VAR_17->di_id;
 VAR_20->dtdv_flags = 0;

 VAR_20->dtdv_kind = (VAR_17->di_kind == VAR_9) ?
     VAR_3 : VAR_4;

 if (VAR_17->di_flags & VAR_12)
  VAR_20->dtdv_scope = VAR_6;
 else if (VAR_17->di_flags & VAR_13)
  VAR_20->dtdv_scope = VAR_7;
 else
  VAR_20->dtdv_scope = VAR_5;

 if (VAR_17->di_flags & VAR_10)
  VAR_20->dtdv_flags |= VAR_2;
 if (VAR_17->di_flags & VAR_11)
  VAR_20->dtdv_flags |= VAR_1;

 FUNC_0(&VAR_22, sizeof (VAR_22));
 FUNC_2(&VAR_22, VAR_17->di_ctfp, VAR_17->di_type, VAR_0);
 FUNC_1(VAR_19->pcb_hdl, &VAR_22, &VAR_20->dtdv_type);

 VAR_17->di_flags &= ~(VAR_10 | VAR_11);
 return (0);
}
