
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_query_decoder {int pos; int evq; int config; int tcal; int time; } ;
struct pt_packet_cbr {int ratio; } ;
struct TYPE_3__ {int ratio; } ;
struct TYPE_4__ {TYPE_1__ cbr; } ;
struct pt_event {TYPE_2__ variant; int type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pt_packet_cbr*,int,int *) ;
 int FUNC_2 (int *,int *,struct pt_packet_cbr*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(struct pt_query_decoder *VAR_4)
{
 struct pt_packet_cbr VAR_5;
 struct pt_event *VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_4)
  return -VAR_1;

 VAR_7 = FUNC_1(&VAR_5, VAR_4->pos, &VAR_4->config);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = FUNC_2(&VAR_4->time, &VAR_4->tcal,
       &VAR_5, &VAR_4->config);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6 = FUNC_0(&VAR_4->evq, VAR_0);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->type = VAR_3;
 VAR_6->variant.cbr.ratio = VAR_5.ratio;

 VAR_4->pos += VAR_7;
 return 0;
}
