
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* dn_string; int dn_op; int dn_value; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_11__ {TYPE_5__* din_root; } ;
typedef TYPE_2__ dt_idnode_t ;
struct TYPE_12__ {int di_flags; TYPE_2__* di_iarg; } ;
typedef TYPE_3__ dt_ident_t ;
struct TYPE_14__ {scalar_t__ dn_kind; int dn_value; } ;
struct TYPE_13__ {int pcb_globals; int pcb_jmpbuf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_0 (int *,char*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 TYPE_4__* VAR_7 ;

dt_node_t *
FUNC_5(char *VAR_8)
{
 dt_ident_t *VAR_9;
 dt_node_t *VAR_10;

 if (VAR_8 == ((void*)0))
  FUNC_4(VAR_7->pcb_jmpbuf, VAR_6);







 if ((VAR_9 = FUNC_0(&VAR_7->pcb_globals, VAR_8)) != ((void*)0) &&
     (VAR_9->di_flags & VAR_0)) {
  dt_idnode_t *VAR_11 = VAR_9->di_iarg;

  if (VAR_11->din_root != ((void*)0) &&
      VAR_11->din_root->dn_kind == VAR_2) {
   FUNC_3(VAR_8);

   VAR_10 = FUNC_1(VAR_2);
   VAR_10->dn_op = VAR_5;
   VAR_10->dn_value = VAR_11->din_root->dn_value;
   FUNC_2(VAR_11->din_root, VAR_10);

   return (VAR_10);
  }
 }

 VAR_10 = FUNC_1(VAR_1);
 VAR_10->dn_op = VAR_8[0] == '@' ? VAR_3 : VAR_4;
 VAR_10->dn_string = VAR_8;

 return (VAR_10);
}
