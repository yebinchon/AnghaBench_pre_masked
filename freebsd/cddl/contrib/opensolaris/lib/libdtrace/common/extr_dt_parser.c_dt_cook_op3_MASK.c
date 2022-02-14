
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_18__ {int dn_attr; struct TYPE_18__* dn_expr; int dn_type; int * dn_ctfp; struct TYPE_18__* dn_right; struct TYPE_18__* dn_left; } ;
typedef TYPE_1__ dt_node_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_19__ {int pcb_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 void* FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,TYPE_1__*,int **,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__*,int **,int *) ;
 int FUNC_15 (int ,char*) ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static dt_node_t *
FUNC_16(dt_node_t *VAR_7, uint_t VAR_8)
{
 dt_node_t *VAR_9, *VAR_10;
 ctf_file_t *VAR_11;
 ctf_id_t VAR_12;

 VAR_7->dn_expr = FUNC_5(VAR_7->dn_expr, VAR_1);
 VAR_9 = VAR_7->dn_left = FUNC_5(VAR_7->dn_left, VAR_1);
 VAR_10 = VAR_7->dn_right = FUNC_5(VAR_7->dn_right, VAR_1);

 if (!FUNC_10(VAR_7->dn_expr)) {
  FUNC_15(VAR_5,
      "operator ?: expression must be of scalar type\n");
 }

 if (FUNC_7(VAR_9) || FUNC_7(VAR_10)) {
  FUNC_15(VAR_3,
      "operator ?: operands cannot be of dynamic type\n");
 }






 if (FUNC_2(VAR_9->dn_ctfp, VAR_9->dn_type,
     VAR_10->dn_ctfp, VAR_10->dn_type)) {
  VAR_11 = VAR_9->dn_ctfp;
  VAR_12 = VAR_9->dn_type;
 } else if (FUNC_8(VAR_9) && FUNC_8(VAR_10)) {
  FUNC_14(VAR_9, VAR_10, &VAR_11, &VAR_12);
 } else if (FUNC_11(VAR_9) && FUNC_11(VAR_10) &&
     (FUNC_12(VAR_9) || FUNC_12(VAR_10))) {
  VAR_11 = FUNC_0(VAR_6->pcb_hdl);
  VAR_12 = FUNC_1(VAR_6->pcb_hdl);
 } else if (FUNC_9(VAR_9, VAR_10, &VAR_11, &VAR_12) == 0) {
  FUNC_15(VAR_4,
      "operator ?: operands must have compatible types\n");
 }

 if (FUNC_6(VAR_9) || FUNC_6(VAR_10)) {
  FUNC_15(VAR_2, "action cannot be "
      "used in a conditional context\n");
 }

 FUNC_13(VAR_7, VAR_11, VAR_12, VAR_0);
 FUNC_4(VAR_7, FUNC_3(VAR_7->dn_expr->dn_attr,
     FUNC_3(VAR_9->dn_attr, VAR_10->dn_attr)));

 return (VAR_7);
}
