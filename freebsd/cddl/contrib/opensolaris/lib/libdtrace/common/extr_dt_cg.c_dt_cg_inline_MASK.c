
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int dt_regset_t ;
struct TYPE_10__ {int dn_reg; struct TYPE_10__* dn_list; struct TYPE_10__* dn_args; TYPE_4__* dn_ident; } ;
typedef TYPE_2__ dt_node_t ;
typedef int dt_irlist_t ;
struct TYPE_11__ {int din_argc; TYPE_2__* din_root; TYPE_1__** din_argv; } ;
typedef TYPE_3__ dt_idnode_t ;
struct TYPE_12__ {int di_flags; scalar_t__ di_kind; int * di_ops; TYPE_3__* di_iarg; } ;
typedef TYPE_4__ dt_ident_t ;
struct TYPE_9__ {TYPE_3__* di_iarg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(dt_node_t *VAR_3, dt_irlist_t *VAR_4, dt_regset_t *VAR_5)
{
 dt_ident_t *VAR_6 = VAR_3->dn_ident;
 dt_idnode_t *VAR_7 = VAR_6->di_iarg;

 dt_idnode_t *VAR_8;
 dt_node_t *VAR_9;
 int VAR_10;

 FUNC_0(VAR_6->di_flags & VAR_1);
 FUNC_0(VAR_6->di_ops == &VAR_2);

 if (VAR_6->di_kind == VAR_0) {
  for (VAR_10 = 0, VAR_9 = VAR_3->dn_args;
      VAR_9 != ((void*)0); VAR_9 = VAR_9->dn_list, VAR_10++) {
   if (VAR_7->din_argv[VAR_10] != ((void*)0)) {
    VAR_8 = VAR_7->din_argv[VAR_10]->di_iarg;
    VAR_8->din_root = VAR_9;
   }
  }
 }

 FUNC_1(VAR_7->din_root, VAR_4, VAR_5);
 VAR_3->dn_reg = VAR_7->din_root->dn_reg;
 FUNC_2(VAR_7->din_root, VAR_3, VAR_4, VAR_5);

 if (VAR_6->di_kind == VAR_0) {
  for (VAR_10 = 0; VAR_10 < VAR_7->din_argc; VAR_10++) {
   VAR_8 = VAR_7->din_argv[VAR_10]->di_iarg;
   VAR_8->din_root = ((void*)0);
  }
 }
}
