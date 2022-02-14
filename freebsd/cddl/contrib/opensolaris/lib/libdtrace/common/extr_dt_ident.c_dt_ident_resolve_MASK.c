
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dn_kind; TYPE_3__* dn_ident; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_8__ {TYPE_1__* din_root; } ;
typedef TYPE_2__ dt_idnode_t ;
struct TYPE_9__ {int di_flags; scalar_t__ di_iarg; } ;
typedef TYPE_3__ dt_ident_t ;


 int VAR_0 ;






 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

dt_ident_t *
FUNC_1(dt_ident_t *VAR_1)
{
 while (VAR_1->di_flags & VAR_0) {
  const dt_node_t *VAR_2 = ((dt_idnode_t *)VAR_1->di_iarg)->din_root;

  if (VAR_2 == ((void*)0))
   break;

  switch (VAR_2->dn_kind) {
  case 128:
  case 129:
  case 132:
  case 133:
  case 131:
  case 130:
   VAR_1 = VAR_2->dn_ident;
   continue;
  }

  if (FUNC_0(VAR_2))
   VAR_1 = VAR_2->dn_ident;
  else
   break;
 }

 return (VAR_1);
}
