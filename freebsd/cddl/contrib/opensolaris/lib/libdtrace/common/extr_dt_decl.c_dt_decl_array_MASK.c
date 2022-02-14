
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* ds_decl; } ;
typedef TYPE_1__ dt_scope_t ;
struct TYPE_14__ {scalar_t__ dn_kind; scalar_t__ dn_value; } ;
typedef TYPE_2__ dt_node_t ;
struct TYPE_15__ {scalar_t__ dd_kind; TYPE_2__* dd_node; int * dd_name; struct TYPE_15__* dd_next; } ;
typedef TYPE_3__ dt_decl_t ;
struct TYPE_16__ {TYPE_1__ pcb_dstack; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,char*,int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,char*) ;
 TYPE_4__* VAR_9 ;

dt_decl_t *
FUNC_7(dt_node_t *VAR_10)
{
 dt_decl_t *VAR_11 = FUNC_2(FUNC_0(VAR_0, ((void*)0)));
 dt_scope_t *VAR_12 = &VAR_9->pcb_dstack;
 dt_decl_t *VAR_13 = VAR_11;







 while (VAR_13->dd_next != ((void*)0) && VAR_13->dd_next->dd_kind == VAR_0)
  VAR_13 = VAR_13->dd_next;

 if (VAR_13 != VAR_11) {
  if (VAR_10 != ((void*)0) && VAR_10->dn_kind == VAR_3) {
   FUNC_6(VAR_6,
       "cannot declare array of associative arrays\n");
  }
  VAR_12->ds_decl = VAR_11->dd_next;
  VAR_11->dd_next = VAR_13->dd_next;
  VAR_13->dd_next = VAR_11;
 }

 if (VAR_11->dd_next->dd_name != ((void*)0) &&
     FUNC_5(VAR_11->dd_next->dd_name, "void") == 0)
  FUNC_6(VAR_7, "cannot declare array of void\n");

 if (VAR_10 != ((void*)0) && VAR_10->dn_kind != VAR_3) {
  VAR_10 = VAR_11->dd_node = FUNC_3(VAR_10, VAR_2);

  if (FUNC_4(VAR_10) == 0) {
   FUNC_6(VAR_5, "positive integral constant "
       "expression or tuple signature expected as "
       "array declaration subscript\n");
  }

  if (VAR_10->dn_value > VAR_8)
   FUNC_6(VAR_4, "array dimension too big\n");

 } else if (VAR_10 != ((void*)0)) {
  VAR_11->dd_node = VAR_10;
  (void) FUNC_1(VAR_10, VAR_10, "array", VAR_1);
 }

 return (VAR_11);
}
