
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct pt_query_decoder {int pos; struct pt_event* event; int evq; int config; } ;
struct pt_packet_ptw {int payload; scalar_t__ ip; int plc; } ;
struct TYPE_3__ {int payload; int size; } ;
struct TYPE_4__ {TYPE_1__ ptwrite; } ;
struct pt_event {int ip_suppressed; TYPE_2__ variant; int type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 struct pt_event* FUNC_1 (int *) ;
 int FUNC_2 (struct pt_packet_ptw*,int,int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct pt_query_decoder *VAR_3)
{
 struct pt_packet_ptw VAR_4;
 struct pt_event *VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_3)
  return -VAR_1;

 VAR_6 = FUNC_2(&VAR_4, VAR_3->pos, &VAR_3->config);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = FUNC_3(VAR_4.plc);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_4.ip) {
  VAR_5 = FUNC_0(&VAR_3->evq, VAR_0);
  if (!VAR_5)
   return -VAR_1;
 } else {
  VAR_5 = FUNC_1(&VAR_3->evq);
  if (!VAR_5)
   return -VAR_1;

  VAR_5->ip_suppressed = 1;

  VAR_3->event = VAR_5;
 }

 VAR_5->type = VAR_2;
 VAR_5->variant.ptwrite.size = (uint8_t) VAR_7;
 VAR_5->variant.ptwrite.payload = VAR_4.payload;

 VAR_3->pos += VAR_6;
 return 0;
}
