
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uchar_t ;
struct TYPE_4__ {int dn_kind; int dn_list; int * dn_provname; int dn_probes; struct TYPE_4__* dn_membexpr; int * dn_membname; int dn_acts; int dn_pdescs; int * dn_locals; struct TYPE_4__* dn_pred; int * dn_desc; int * dn_spec; int dn_aggtup; struct TYPE_4__* dn_aggfun; struct TYPE_4__* dn_expr; struct TYPE_4__* dn_right; struct TYPE_4__* dn_left; struct TYPE_4__* dn_child; int dn_args; TYPE_3__* dn_ident; int * dn_string; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_5__ {int di_flags; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(dt_node_t *VAR_2)
{
 uchar_t VAR_3 = VAR_2->dn_kind;

 VAR_2->dn_kind = VAR_1;

 switch (VAR_3) {
 case 130:
 case 139:
 case 129:
  FUNC_3(VAR_2->dn_string);
  VAR_2->dn_string = ((void*)0);
  break;

 case 128:
 case 140:
 case 133:
  if (VAR_2->dn_ident != ((void*)0)) {
   if (VAR_2->dn_ident->di_flags & VAR_0)
    FUNC_0(VAR_2->dn_ident);
   VAR_2->dn_ident = ((void*)0);
  }
  FUNC_2(&VAR_2->dn_args);
  break;

 case 137:
  if (VAR_2->dn_child != ((void*)0)) {
   FUNC_4(VAR_2->dn_child);
   VAR_2->dn_child = ((void*)0);
  }
  break;

 case 135:
  if (VAR_2->dn_expr != ((void*)0)) {
   FUNC_4(VAR_2->dn_expr);
   VAR_2->dn_expr = ((void*)0);
  }

 case 136:
  if (VAR_2->dn_left != ((void*)0)) {
   FUNC_4(VAR_2->dn_left);
   VAR_2->dn_left = ((void*)0);
  }
  if (VAR_2->dn_right != ((void*)0)) {
   FUNC_4(VAR_2->dn_right);
   VAR_2->dn_right = ((void*)0);
  }
  break;

 case 142:
 case 141:
  if (VAR_2->dn_expr != ((void*)0)) {
   FUNC_4(VAR_2->dn_expr);
   VAR_2->dn_expr = ((void*)0);
  }
  break;

 case 144:
  if (VAR_2->dn_aggfun != ((void*)0)) {
   FUNC_4(VAR_2->dn_aggfun);
   VAR_2->dn_aggfun = ((void*)0);
  }
  FUNC_2(&VAR_2->dn_aggtup);
  break;

 case 134:
  FUNC_3(VAR_2->dn_spec);
  VAR_2->dn_spec = ((void*)0);
  FUNC_3(VAR_2->dn_desc);
  VAR_2->dn_desc = ((void*)0);
  break;

 case 143:
  if (VAR_2->dn_pred != ((void*)0))
   FUNC_4(VAR_2->dn_pred);
  if (VAR_2->dn_locals != ((void*)0))
   FUNC_1(VAR_2->dn_locals);
  FUNC_2(&VAR_2->dn_pdescs);
  FUNC_2(&VAR_2->dn_acts);
  break;

 case 138:
  FUNC_3(VAR_2->dn_membname);
  VAR_2->dn_membname = ((void*)0);
  if (VAR_2->dn_membexpr != ((void*)0)) {
   FUNC_4(VAR_2->dn_membexpr);
   VAR_2->dn_membexpr = ((void*)0);
  }
  break;

 case 131:
  FUNC_2(&VAR_2->dn_probes);
  FUNC_3(VAR_2->dn_provname);
  VAR_2->dn_provname = ((void*)0);
  break;

 case 132:
  FUNC_2(&VAR_2->dn_list);
  break;
 }
}
