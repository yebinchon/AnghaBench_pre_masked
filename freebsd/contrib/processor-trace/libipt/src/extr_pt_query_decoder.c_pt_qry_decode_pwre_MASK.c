
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_query_decoder {int pos; struct pt_event* event; int evq; int config; } ;
struct pt_packet_pwre {scalar_t__ hw; int sub_state; int state; } ;
struct TYPE_3__ {int hw; int sub_state; int state; } ;
struct TYPE_4__ {TYPE_1__ pwre; } ;
struct pt_event {TYPE_2__ variant; int type; } ;


 struct pt_event* FUNC_0 (int *) ;
 int FUNC_1 (struct pt_packet_pwre*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(struct pt_query_decoder *VAR_2)
{
 struct pt_packet_pwre VAR_3;
 struct pt_event *VAR_4;
 int VAR_5;

 if (!VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_3, VAR_2->pos, &VAR_2->config);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_0(&VAR_2->evq);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->type = VAR_1;
 VAR_4->variant.pwre.state = VAR_3.state;
 VAR_4->variant.pwre.sub_state = VAR_3.sub_state;

 if (VAR_3.hw)
  VAR_4->variant.pwre.hw = 1;

 VAR_2->event = VAR_4;

 VAR_2->pos += VAR_5;
 return 0;
}
