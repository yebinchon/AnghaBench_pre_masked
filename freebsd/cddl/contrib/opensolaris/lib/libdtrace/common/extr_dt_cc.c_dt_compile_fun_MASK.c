
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_28__ {TYPE_4__* dn_expr; } ;
typedef TYPE_2__ dt_node_t ;
struct TYPE_29__ {TYPE_1__* dn_ident; } ;
struct TYPE_27__ {int di_id; int di_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_4__*,int ,char*,int ) ;
 int FUNC_1 (int *,TYPE_4__*,int *) ;
 int FUNC_2 (int *,TYPE_4__*,int *) ;
 int FUNC_3 (int *,TYPE_4__*,int *) ;
 int FUNC_4 (int *,TYPE_4__*,int *) ;
 int FUNC_5 (int *,TYPE_4__*,int *) ;
 int FUNC_6 (int *,TYPE_4__*,int *) ;
 int FUNC_7 (int *,TYPE_4__*,int *) ;
 int FUNC_8 (int *,TYPE_4__*,int *) ;
 int FUNC_9 (int *,TYPE_4__*,int *) ;
 int FUNC_10 (int *,TYPE_4__*,int *) ;
 int FUNC_11 (int *,TYPE_4__*,int *,int ) ;
 int FUNC_12 (int *,TYPE_4__*,int *) ;
 int FUNC_13 (int *,TYPE_4__*,int *) ;
 int FUNC_14 (int *,TYPE_4__*,int *) ;
 int FUNC_15 (int *,TYPE_4__*,int *) ;
 int FUNC_16 (int *,TYPE_4__*,int *) ;
 int FUNC_17 (int *,TYPE_4__*,int *) ;
 int FUNC_18 (int *,TYPE_4__*,int *,int ) ;
 int FUNC_19 (int *,TYPE_4__*,int *) ;
 int FUNC_20 (int *,TYPE_4__*,int *) ;
 int FUNC_21 (int *,TYPE_4__*,int *) ;
 int FUNC_22 (int *,TYPE_4__*,int *) ;

__attribute__((used)) static void
FUNC_23(dtrace_hdl_t *VAR_9, dt_node_t *VAR_10, dtrace_stmtdesc_t *VAR_11)
{
 switch (VAR_10->dn_expr->dn_ident->di_id) {
 case 158:
  FUNC_1(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 157:
  FUNC_2(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 156:
  FUNC_3(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 155:
  FUNC_4(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 154:
  FUNC_8(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 153:
  FUNC_5(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 152:
  FUNC_6(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 151:
  FUNC_11(VAR_9, VAR_10->dn_expr, VAR_11, VAR_0);
  break;
 case 150:
  FUNC_7(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 148:
  FUNC_18(VAR_9, VAR_10->dn_expr, VAR_11, VAR_1);
  break;
 case 147:
  FUNC_8(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 146:
  FUNC_9(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 145:
  FUNC_19(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 144:
  FUNC_10(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 143:
  FUNC_11(VAR_9, VAR_10->dn_expr, VAR_11, VAR_2);
  break;
 case 142:
  FUNC_12(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 141:
  FUNC_13(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 140:
  FUNC_14(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 139:
  FUNC_15(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 138:
  FUNC_16(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 137:
  FUNC_17(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 136:
  FUNC_18(VAR_9, VAR_10->dn_expr, VAR_11, VAR_3);
  break;
 case 135:
  FUNC_11(VAR_9, VAR_10->dn_expr, VAR_11, VAR_4);
  break;
 case 134:
  FUNC_19(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 133:
  FUNC_20(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 132:
  FUNC_21(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 case 131:
  FUNC_18(VAR_9, VAR_10->dn_expr, VAR_11, VAR_5);
  break;
 case 130:
  FUNC_18(VAR_9, VAR_10->dn_expr, VAR_11, VAR_6);
  break;
 case 128:
  FUNC_18(VAR_9, VAR_10->dn_expr, VAR_11, VAR_7);
  break;
 case 129:
 case 149:
  FUNC_22(VAR_9, VAR_10->dn_expr, VAR_11);
  break;
 default:
  FUNC_0(VAR_10->dn_expr, VAR_8, "tracing function %s( ) is "
      "not yet supported\n", VAR_10->dn_expr->dn_ident->di_name);
 }
}
