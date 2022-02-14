
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link {struct endpoint* end; } ;
struct f_switch {int port_cnt; scalar_t__ n_id; TYPE_1__** port; } ;
struct endpoint {scalar_t__ n_id; scalar_t__ type; struct f_switch* sw; } ;
struct TYPE_2__ {scalar_t__ type; struct link* link; scalar_t__ sw; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static
struct f_switch *FUNC_0(struct f_switch *VAR_1,
       struct f_switch *VAR_2,
       struct f_switch *VAR_3)
{
 int VAR_4, VAR_5;
 struct link *VAR_6;
 struct endpoint *VAR_7;
 struct f_switch *VAR_8, *VAR_9 = ((void*)0);

 if (!(VAR_1 && VAR_2 && VAR_3))
  goto out;

 for (VAR_4 = 0; VAR_4 < VAR_1->port_cnt; VAR_4++) {




  if (!(VAR_1->port[VAR_4] && VAR_1->port[VAR_4]->sw &&
        VAR_1->port[VAR_4]->type == VAR_0))
   continue;

  VAR_6 = VAR_1->port[VAR_4]->link;

  if (VAR_6->end[0].n_id == VAR_1->n_id)
   VAR_7 = &VAR_6->end[1];
  else
   VAR_7 = &VAR_6->end[0];




  if (!(VAR_7->type == VAR_0 && VAR_7->sw))
   continue;

  VAR_9 = VAR_7->sw;
  if (VAR_9->n_id == VAR_2->n_id)
   continue;

  for (VAR_5 = 0; VAR_5 < VAR_9->port_cnt; VAR_5++) {




   if (!(VAR_9->port[VAR_5] && VAR_9->port[VAR_5]->sw &&
         VAR_9->port[VAR_5]->type == VAR_0))
    continue;

   VAR_6 = VAR_9->port[VAR_5]->link;

   if (VAR_6->end[0].n_id == VAR_9->n_id)
    VAR_7 = &VAR_6->end[1];
   else
    VAR_7 = &VAR_6->end[0];




   if (!(VAR_7->type == VAR_0 && VAR_7->sw))
    continue;

   VAR_8 = VAR_7->sw;
   if (VAR_8->n_id == VAR_3->n_id)
    goto out;
  }
 }
 VAR_9 = ((void*)0);
out:
 return VAR_9;
}
