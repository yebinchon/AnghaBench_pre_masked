
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_node {scalar_t__ addr; int last_router; struct tipc_node* next; struct cluster* owner; int nsub; int lock; } ;
struct cluster {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tipc_node*) ;
 struct tipc_node* FUNC_2 (int,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cluster*,struct tipc_node*) ;
 struct cluster* FUNC_7 (scalar_t__) ;
 struct cluster* FUNC_8 (scalar_t__) ;
 struct tipc_node* VAR_2 ;
 int FUNC_9 (char*) ;

struct tipc_node *FUNC_10(u32 VAR_3)
{
 struct cluster *VAR_4;
 struct tipc_node *VAR_5;
 struct tipc_node **VAR_6;

 FUNC_3(&VAR_1);

 for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_3 < VAR_5->addr)
   break;
  if (VAR_3 == VAR_5->addr) {
   FUNC_5(&VAR_1);
   return VAR_5;
  }
 }

 VAR_5 = FUNC_2(sizeof(*VAR_5),VAR_0);
 if (!VAR_5) {
  FUNC_5(&VAR_1);
  FUNC_9("Node creation failed, no memory\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_8(VAR_3);
 if (!VAR_4) {
  VAR_4 = FUNC_7(VAR_3);
 }
 if (!VAR_4) {
  FUNC_5(&VAR_1);
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 VAR_5->addr = VAR_3;
  FUNC_4(&VAR_5->lock);
 FUNC_0(&VAR_5->nsub);
 VAR_5->owner = VAR_4;
 FUNC_6(VAR_4, VAR_5);
 VAR_5->last_router = -1;


 for (VAR_6 = &VAR_2; *VAR_6;
      VAR_6 = &(*VAR_6)->next) {
  if (VAR_3 < (*VAR_6)->addr) {
   VAR_5->next = *VAR_6;
   break;
  }
 }
 (*VAR_6) = VAR_5;
 FUNC_5(&VAR_1);
 return VAR_5;
}
