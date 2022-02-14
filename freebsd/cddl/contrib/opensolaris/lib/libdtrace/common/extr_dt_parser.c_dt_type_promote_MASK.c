
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_10__ {void* dt_ctferr; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_11__ {scalar_t__ dn_type; int * dn_ctfp; } ;
typedef TYPE_2__ dt_node_t ;
typedef scalar_t__ ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_12__ {scalar_t__ cte_bits; int cte_format; } ;
typedef TYPE_3__ ctf_encoding_t ;
struct TYPE_13__ {int pcb_jmpbuf; TYPE_1__* pcb_hdl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 TYPE_4__* VAR_5 ;

__attribute__((used)) static void
FUNC_8(dt_node_t *VAR_6, dt_node_t *VAR_7, ctf_file_t **VAR_8, ctf_id_t *VAR_9)
{
 ctf_file_t *VAR_10 = VAR_6->dn_ctfp;
 ctf_id_t VAR_11 = VAR_6->dn_type;

 ctf_file_t *VAR_12 = VAR_7->dn_ctfp;
 ctf_id_t VAR_13 = VAR_7->dn_type;

 ctf_id_t VAR_14 = FUNC_6(VAR_10, VAR_11);
 uint_t VAR_15 = FUNC_5(VAR_10, VAR_14);

 ctf_id_t VAR_16 = FUNC_6(VAR_12, VAR_13);
 uint_t VAR_17 = FUNC_5(VAR_12, VAR_16);

 dtrace_hdl_t *VAR_18 = VAR_5->pcb_hdl;
 ctf_encoding_t VAR_19, VAR_20;
 uint_t VAR_21, VAR_22;

 FUNC_2(VAR_15 == VAR_3 || VAR_15 == VAR_2);
 FUNC_2(VAR_17 == VAR_3 || VAR_17 == VAR_2);

 if (VAR_15 == VAR_2) {
  VAR_10 = FUNC_0(VAR_18);
  VAR_11 = VAR_14 = FUNC_1(VAR_18);
 }

 if (VAR_17 == VAR_2) {
  VAR_12 = FUNC_0(VAR_18);
  VAR_13 = VAR_16 = FUNC_1(VAR_18);
 }

 if (FUNC_4(VAR_10, VAR_14, &VAR_19) == VAR_0) {
  VAR_5->pcb_hdl->dt_ctferr = FUNC_3(VAR_10);
  FUNC_7(VAR_5->pcb_jmpbuf, VAR_4);
 }

 if (FUNC_4(VAR_12, VAR_16, &VAR_20) == VAR_0) {
  VAR_5->pcb_hdl->dt_ctferr = FUNC_3(VAR_12);
  FUNC_7(VAR_5->pcb_jmpbuf, VAR_4);
 }







 VAR_21 = VAR_19.cte_bits + ((VAR_19.cte_format & VAR_1) == 0);
 VAR_22 = VAR_20.cte_bits + ((VAR_20.cte_format & VAR_1) == 0);

 if (VAR_21 == VAR_22) {
  if (VAR_14 - VAR_16 < 0)
   goto return_rtype;
  else
   goto return_ltype;
 } else if (VAR_21 > VAR_22) {
  goto return_ltype;
 } else
  goto return_rtype;

return_ltype:
 *VAR_8 = VAR_10;
 *VAR_9 = VAR_11;
 return;

return_rtype:
 *VAR_8 = VAR_12;
 *VAR_9 = VAR_13;
}
