
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct neigh_parms {TYPE_1__* dev; struct neigh_parms* next; } ;
struct neigh_table {struct neigh_parms parms; } ;
struct TYPE_2__ {int ifindex; } ;


 int FUNC_0 (struct neigh_parms*) ;
 scalar_t__ FUNC_1 (int ,struct net*) ;

__attribute__((used)) static inline struct neigh_parms *FUNC_2(struct neigh_table *VAR_0,
            struct net *VAR_1, int VAR_2)
{
 struct neigh_parms *VAR_3;

 for (VAR_3 = &VAR_0->parms; VAR_3; VAR_3 = VAR_3->next) {
  if ((VAR_3->dev && VAR_3->dev->ifindex == VAR_2 && FUNC_1(FUNC_0(VAR_3), VAR_1)) ||
      (!VAR_3->dev && !VAR_2))
   return VAR_3;
 }

 return ((void*)0);
}
