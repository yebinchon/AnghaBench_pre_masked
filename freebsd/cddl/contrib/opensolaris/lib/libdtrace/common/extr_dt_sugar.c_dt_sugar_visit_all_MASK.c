
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int dtsp_num_ifs; } ;
typedef TYPE_2__ dt_sugar_parse_t ;
struct TYPE_10__ {int dn_kind; struct TYPE_10__* dn_list; struct TYPE_10__* dn_alternate_body; struct TYPE_10__* dn_body; struct TYPE_10__* dn_conditional; struct TYPE_10__* dn_probes; struct TYPE_10__* dn_members; struct TYPE_10__* dn_membexpr; TYPE_1__* dn_ident; struct TYPE_10__* dn_acts; struct TYPE_10__* dn_pred; struct TYPE_10__* dn_pdescs; struct TYPE_10__* dn_aggfun; struct TYPE_10__* dn_aggtup; struct TYPE_10__* dn_expr; struct TYPE_10__* dn_right; struct TYPE_10__* dn_left; int dn_op; struct TYPE_10__* dn_child; struct TYPE_10__* dn_args; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_11__ {TYPE_3__* din_root; } ;
typedef TYPE_4__ dt_idnode_t ;
struct TYPE_8__ {TYPE_4__* di_iarg; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*,void*,int) ;

__attribute__((used)) static void
FUNC_1(dt_sugar_parse_t *VAR_2, dt_node_t *VAR_3)
{
 dt_node_t *VAR_4;

 switch (VAR_3->dn_kind) {
 case 145:
 case 140:
 case 131:
 case 130:
 case 129:
 case 134:
 case 135:
 case 143:
  break;

 case 144:
  for (VAR_4 = VAR_3->dn_args; VAR_4 != ((void*)0); VAR_4 = VAR_4->dn_list)
   FUNC_1(VAR_2, VAR_4);
  break;

 case 138:
  FUNC_1(VAR_2, VAR_3->dn_child);
  break;

 case 137:
  FUNC_1(VAR_2, VAR_3->dn_left);
  FUNC_1(VAR_2, VAR_3->dn_right);
  if (VAR_3->dn_op == VAR_0) {
   dt_node_t *VAR_5 = VAR_3->dn_right;
   while (VAR_5->dn_list != ((void*)0)) {
    FUNC_1(VAR_2, VAR_5->dn_list);
    VAR_5 = VAR_5->dn_list;
   }
  }
  break;

 case 136:
  FUNC_1(VAR_2, VAR_3->dn_expr);
  FUNC_1(VAR_2, VAR_3->dn_left);
  FUNC_1(VAR_2, VAR_3->dn_right);
  break;

 case 147:
 case 146:
  FUNC_1(VAR_2, VAR_3->dn_expr);
  break;

 case 149:
  for (VAR_4 = VAR_3->dn_aggtup; VAR_4 != ((void*)0); VAR_4 = VAR_4->dn_list)
   FUNC_1(VAR_2, VAR_4);

  if (VAR_3->dn_aggfun)
   FUNC_1(VAR_2, VAR_3->dn_aggfun);
  break;

 case 148:
  for (VAR_4 = VAR_3->dn_pdescs; VAR_4 != ((void*)0); VAR_4 = VAR_4->dn_list)
   FUNC_1(VAR_2, VAR_4);

  if (VAR_3->dn_pred != ((void*)0))
   FUNC_1(VAR_2, VAR_3->dn_pred);

  for (VAR_4 = VAR_3->dn_acts; VAR_4 != ((void*)0); VAR_4 = VAR_4->dn_list)
   FUNC_1(VAR_2, VAR_4);
  break;

 case 141: {
  const dt_idnode_t *VAR_6 = VAR_3->dn_ident->di_iarg;

  FUNC_1(VAR_2, VAR_6->din_root);
  break;
 }
 case 139:
  if (VAR_3->dn_membexpr)
   FUNC_1(VAR_2, VAR_3->dn_membexpr);
  break;

 case 128:
  for (VAR_4 = VAR_3->dn_members; VAR_4 != ((void*)0); VAR_4 = VAR_4->dn_list)
   FUNC_1(VAR_2, VAR_4);
  break;

 case 132:
  for (VAR_4 = VAR_3->dn_probes; VAR_4 != ((void*)0); VAR_4 = VAR_4->dn_list)
   FUNC_1(VAR_2, VAR_4);
  break;

 case 133:
  for (VAR_4 = VAR_3->dn_list; VAR_4 != ((void*)0); VAR_4 = VAR_4->dn_list)
   FUNC_1(VAR_2, VAR_4);
  break;

 case 142:
  VAR_2->dtsp_num_ifs++;
  FUNC_1(VAR_2, VAR_3->dn_conditional);

  for (VAR_4 = VAR_3->dn_body; VAR_4 != ((void*)0); VAR_4 = VAR_4->dn_list)
   FUNC_1(VAR_2, VAR_4);
  for (VAR_4 = VAR_3->dn_alternate_body; VAR_4 != ((void*)0);
      VAR_4 = VAR_4->dn_list)
   FUNC_1(VAR_2, VAR_4);

  break;

 default:
  (void) FUNC_0(VAR_3, VAR_1, "bad node %p, kind %d\n",
      (void *)VAR_3, VAR_3->dn_kind);
 }
}
