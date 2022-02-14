
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_query_decoder {int pos; struct pt_event* event; int evq; int config; int tcal; int time; } ;
struct pt_packet_cbr {int ratio; } ;
struct TYPE_3__ {int ratio; } ;
struct TYPE_4__ {TYPE_1__ cbr; } ;
struct pt_event {TYPE_2__ variant; int type; } ;


 struct pt_event* FUNC_0 (int *) ;
 int FUNC_1 (struct pt_packet_cbr*,int,int *) ;
 int FUNC_2 (int *,int *,struct pt_packet_cbr*,int *) ;
 int FUNC_3 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4(struct pt_query_decoder *VAR_2)
{
 struct pt_packet_cbr VAR_3;
 struct pt_event *VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_3, VAR_2->pos, &VAR_2->config);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_2(&VAR_2->time, &VAR_2->tcal,
       &VAR_3, &VAR_2->config);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4 = FUNC_0(&VAR_2->evq);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->type = VAR_1;
 VAR_4->variant.cbr.ratio = VAR_3.ratio;

 VAR_2->event = VAR_4;

 VAR_6 = FUNC_3(VAR_4, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_2->pos += VAR_5;
 return 0;
}
