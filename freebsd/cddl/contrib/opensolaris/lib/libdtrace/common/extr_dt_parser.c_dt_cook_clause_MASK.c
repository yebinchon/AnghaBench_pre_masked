
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint_t ;
typedef int jmp_buf ;
struct TYPE_13__ {int dn_acts; TYPE_5__* dn_pred; int dn_attr; int dn_ctxattr; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_15__ {int dn_attr; } ;
struct TYPE_11__ {int dtp_attr; } ;
struct TYPE_14__ {int pcb_jmpbuf; TYPE_2__* pcb_hdl; TYPE_1__ pcb_pinfo; } ;
struct TYPE_12__ {scalar_t__ dt_errtag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int volatile VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int volatile) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 TYPE_4__* VAR_4 ;

__attribute__((used)) static dt_node_t *
FUNC_11(dt_node_t *VAR_5, uint_t VAR_6)
{
 volatile int VAR_7, VAR_8;
 jmp_buf VAR_9;





 FUNC_3(VAR_5, VAR_4->pcb_pinfo.dtp_attr);
 VAR_5->dn_ctxattr = VAR_4->pcb_pinfo.dtp_attr;

 FUNC_0(VAR_4->pcb_jmpbuf, VAR_9, sizeof (jmp_buf));
 VAR_8 = 0;

 if (VAR_5->dn_pred != ((void*)0) && (VAR_7 = FUNC_8(VAR_4->pcb_jmpbuf)) != 0) {
  FUNC_0(VAR_9, VAR_4->pcb_jmpbuf, sizeof (jmp_buf));
  if (VAR_8++ != 0 || VAR_7 != VAR_3 || (
      VAR_4->pcb_hdl->dt_errtag != FUNC_2(VAR_0) &&
      VAR_4->pcb_hdl->dt_errtag != FUNC_2(VAR_2)))
   FUNC_7(VAR_4->pcb_jmpbuf, VAR_7);
 }

 if (VAR_8 == 0) {
  FUNC_10("action list");

  FUNC_3(VAR_5,
      FUNC_6(&VAR_5->dn_acts, VAR_6));

  FUNC_0(VAR_9, VAR_4->pcb_jmpbuf, sizeof (jmp_buf));
  FUNC_10(((void*)0));
 }

 if (VAR_5->dn_pred != ((void*)0)) {
  FUNC_10("predicate");

  VAR_5->dn_pred = FUNC_4(VAR_5->dn_pred, VAR_6);
  FUNC_3(VAR_5,
      FUNC_1(VAR_5->dn_attr, VAR_5->dn_pred->dn_attr));

  if (!FUNC_5(VAR_5->dn_pred)) {
   FUNC_9(VAR_1,
       "predicate result must be of scalar type\n");
  }

  FUNC_10(((void*)0));
 }

 if (VAR_8 != 0) {
  FUNC_10("action list");

  FUNC_3(VAR_5,
      FUNC_6(&VAR_5->dn_acts, VAR_6));

  FUNC_10(((void*)0));
 }

 return (VAR_5);
}
