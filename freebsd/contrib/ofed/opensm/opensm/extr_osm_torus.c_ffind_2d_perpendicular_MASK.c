
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
     struct f_switch *VAR_3)
{
 int VAR_4;
 struct link *VAR_5;
 struct endpoint *VAR_6;
 struct f_switch *VAR_7 = ((void*)0);

 if (!(VAR_1 && VAR_2 && VAR_3))
  goto out;





 for (VAR_4 = 0; VAR_4 < VAR_2->port_cnt; VAR_4++) {




  if (!(VAR_2->port[VAR_4] && VAR_2->port[VAR_4]->sw &&
        VAR_2->port[VAR_4]->type == VAR_0))
   continue;

  VAR_5 = VAR_2->port[VAR_4]->link;

  if (VAR_5->end[0].n_id == VAR_2->n_id)
   VAR_6 = &VAR_5->end[1];
  else
   VAR_6 = &VAR_5->end[0];



  if (!(VAR_6->type == VAR_0 && VAR_6->sw))
   continue;

  VAR_7 = VAR_6->sw;
  if (VAR_7->n_id == VAR_3->n_id)
   continue;

  if (FUNC_0(VAR_1, VAR_2, VAR_7))
   goto out;
 }
 VAR_7 = ((void*)0);
out:
 return VAR_7;
}
