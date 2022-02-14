
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct snmp_node {scalar_t__ name; int index; TYPE_1__ oid; int (* op ) (TYPE_2__*,int *,int ,int ,int ) ;} ;
struct assign {scalar_t__ node_name; int value; int scratch; } ;
struct TYPE_5__ {int * scratch; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct assign* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct assign*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct assign*) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *,int ,int ,int ) ;
 int FUNC_5 (int ,char*) ;
 struct snmp_node* VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct assign *VAR_7;
 struct snmp_node *VAR_8;

 while ((VAR_7 = FUNC_0(&VAR_2, VAR_2)) != ((void*)0)) {
  FUNC_1(&VAR_2, VAR_7, VAR_3);
  for (VAR_8 = VAR_5; VAR_8 < &VAR_5[VAR_6]; VAR_8++)
   if (VAR_8->name == VAR_7->node_name) {
    VAR_4->scratch = &VAR_7->scratch;
    (void)(*VAR_8->op)(VAR_4, &VAR_7->value,
        VAR_8->oid.len, VAR_8->index,
        VAR_1);
    break;
   }
  if (VAR_8 == &VAR_5[VAR_6])
   FUNC_5(VAR_0, "failed to find node for "
       "rollback");
  FUNC_3(&VAR_7->value);
  FUNC_2(VAR_7);
 }
}
