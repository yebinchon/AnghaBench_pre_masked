
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_info {int qname; } ;
struct auth_zone {int data; } ;
struct auth_data {int name; int node; int * rrsets; } ;
typedef int rbnode_type ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct auth_zone* VAR_1, struct query_info* VAR_2,
 struct auth_data* VAR_3)
{
 struct auth_data* VAR_4;
 if(!VAR_3) {


  VAR_4 = (struct auth_data*)FUNC_1(&VAR_1->data);
 } else {
  VAR_4 = (struct auth_data*)FUNC_2(&VAR_3->node);
 }
 while(VAR_4 && (rbnode_type*)VAR_4 != VAR_0 && VAR_4->rrsets == ((void*)0)) {


  VAR_4 = (struct auth_data*)FUNC_2(&VAR_3->node);
 }
 if((rbnode_type*)VAR_4 == VAR_0 || !VAR_4) {


  return 0;
 }


 if(FUNC_0(VAR_4->name, VAR_2->qname))
  return 1;
 return 0;
}
