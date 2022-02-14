
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_query_decoder {int pos; struct pt_event* event; int evq; int config; } ;
struct pt_packet_exstop {scalar_t__ ip; } ;
struct TYPE_3__ {unsigned long long ip; } ;
struct TYPE_4__ {TYPE_1__ exstop; } ;
struct pt_event {int ip_suppressed; TYPE_2__ variant; void* type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 struct pt_event* FUNC_1 (int *) ;
 int FUNC_2 (struct pt_packet_exstop*,int,int *) ;
 int VAR_1 ;
 void* VAR_2 ;

int FUNC_3(struct pt_query_decoder *VAR_3)
{
 struct pt_packet_exstop VAR_4;
 struct pt_event *VAR_5;
 int VAR_6;

 if (!VAR_3)
  return -VAR_1;

 VAR_6 = FUNC_2(&VAR_4, VAR_3->pos, &VAR_3->config);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4.ip) {
  VAR_5 = FUNC_0(&VAR_3->evq, VAR_0);
  if (!VAR_5)
   return -VAR_1;

  VAR_5->type = VAR_2;
 } else {
  VAR_5 = FUNC_1(&VAR_3->evq);
  if (!VAR_5)
   return -VAR_1;

  VAR_5->type = VAR_2;

  VAR_5->ip_suppressed = 1;
  VAR_5->variant.exstop.ip = 0ull;

  VAR_3->event = VAR_5;
 }

 VAR_3->pos += VAR_6;
 return 0;
}
