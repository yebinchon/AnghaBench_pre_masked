
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int ssize_t ;
typedef int dt_regset_t ;
struct TYPE_8__ {int dn_type; int * dn_ctfp; } ;
typedef TYPE_2__ dt_node_t ;
typedef int dt_irlist_t ;
typedef int dif_instr_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_9__ {int ctr_contents; } ;
typedef TYPE_3__ ctf_arinfo_t ;
struct TYPE_10__ {int pcb_jmpbuf; TYPE_1__* pcb_hdl; } ;
struct TYPE_7__ {int dt_ctferr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int ,int ) ;
 TYPE_4__* VAR_4 ;

__attribute__((used)) static void
FUNC_14(dt_node_t *VAR_5, dt_irlist_t *VAR_6, dt_regset_t *VAR_7,
    uint_t VAR_8, int VAR_9)
{
 ctf_file_t *VAR_10 = VAR_5->dn_ctfp;
 ctf_arinfo_t VAR_11;
 dif_instr_t VAR_12;
 ctf_id_t VAR_13;
 uint_t VAR_14;
 ssize_t VAR_15;
 int VAR_16;

 VAR_13 = FUNC_6(VAR_10, VAR_5->dn_type);
 VAR_14 = FUNC_4(VAR_10, VAR_13);
 FUNC_1(VAR_14 == VAR_1 || VAR_14 == VAR_0);

 if (VAR_14 == VAR_0) {
  if (FUNC_2(VAR_10, VAR_13, &VAR_11) != 0) {
   VAR_4->pcb_hdl->dt_ctferr = FUNC_3(VAR_10);
   FUNC_13(VAR_4->pcb_jmpbuf, VAR_3);
  }
  VAR_13 = VAR_11.ctr_contents;
 } else
  VAR_13 = FUNC_5(VAR_10, VAR_13);

 if ((VAR_15 = FUNC_7(VAR_10, VAR_13)) == 1)
  return;

 VAR_16 = FUNC_11(VAR_7);
 FUNC_9(VAR_6, VAR_16, VAR_15);
 VAR_12 = FUNC_0(VAR_8, VAR_9, VAR_16, VAR_9);
 FUNC_10(VAR_6, FUNC_8(VAR_2, VAR_12));
 FUNC_12(VAR_7, VAR_16);
}
