
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct slist {int * next; } ;
struct block {TYPE_1__* head; } ;
struct TYPE_6__ {int is_vlan_vloffset; int off_linktype; int off_linkpl; } ;
typedef TYPE_2__ compiler_state_t ;
struct TYPE_5__ {int * stmts; } ;


 int FUNC_0 (TYPE_2__*,int *,int,struct slist*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(compiler_state_t *VAR_0, struct block *VAR_1)
{
 struct slist VAR_2;


 VAR_2.next = ((void*)0);
 VAR_0->is_vlan_vloffset = 1;
 FUNC_0(VAR_0, &VAR_0->off_linkpl, 4, &VAR_2);
 FUNC_0(VAR_0, &VAR_0->off_linktype, 4, &VAR_2);


 FUNC_1(VAR_2.next, VAR_1->head->stmts);
 VAR_1->head->stmts = VAR_2.next;
}
