
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_net; scalar_t__ s_node; } ;
struct atalk_route {int flags; scalar_t__ dev; TYPE_1__ target; struct atalk_route* next; } ;
struct atalk_addr {scalar_t__ s_net; scalar_t__ s_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atalk_route* VAR_2 ;
 int VAR_3 ;
 struct atalk_route VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct atalk_route *FUNC_2(struct atalk_addr *VAR_5)
{





 struct atalk_route *VAR_6 = ((void*)0);
 struct atalk_route *VAR_7;

 FUNC_0(&VAR_3);
 for (VAR_7 = VAR_2; VAR_7; VAR_7 = VAR_7->next) {
  if (!(VAR_7->flags & VAR_1))
   continue;

  if (VAR_7->target.s_net == VAR_5->s_net) {
   if (VAR_7->flags & VAR_0) {




    if (VAR_7->target.s_node == VAR_5->s_node)
     goto out;
   } else




    VAR_6 = VAR_7;
  }
 }





 if (VAR_6)
  VAR_7 = VAR_6;
 else if (VAR_4.dev)
  VAR_7 = &VAR_4;
 else
  VAR_7 = ((void*)0);
out:
 FUNC_1(&VAR_3);
 return VAR_7;
}
