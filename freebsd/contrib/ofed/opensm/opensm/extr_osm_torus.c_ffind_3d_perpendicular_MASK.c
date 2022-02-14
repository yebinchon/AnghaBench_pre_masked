
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
 scalar_t__ FUNC_0 (struct f_switch*,struct f_switch*,struct f_switch*) ;

struct f_switch *FUNC_1(struct f_switch *VAR_1,
     struct f_switch *VAR_2,
     struct f_switch *VAR_3,
     struct f_switch *VAR_4)
{
 int VAR_5;
 struct link *VAR_6;
 struct endpoint *VAR_7;
 struct f_switch *VAR_8 = ((void*)0);

 if (!(VAR_1 && VAR_2 && VAR_3 && VAR_4))
  goto out;





 for (VAR_5 = 0; VAR_5 < VAR_2->port_cnt; VAR_5++) {




  if (!(VAR_2->port[VAR_5] && VAR_2->port[VAR_5]->sw &&
        VAR_2->port[VAR_5]->type == VAR_0))
   continue;

  VAR_6 = VAR_2->port[VAR_5]->link;

  if (VAR_6->end[0].n_id == VAR_2->n_id)
   VAR_7 = &VAR_6->end[1];
  else
   VAR_7 = &VAR_6->end[0];



  if (!(VAR_7->type == VAR_0 && VAR_7->sw))
   continue;

  VAR_8 = VAR_7->sw;
  if (VAR_8->n_id == VAR_4->n_id)
   continue;

  if (FUNC_0(VAR_1, VAR_2, VAR_8) &&
      FUNC_0(VAR_3, VAR_2, VAR_8))
   goto out;
 }
 VAR_8 = ((void*)0);
out:
 return VAR_8;
}
