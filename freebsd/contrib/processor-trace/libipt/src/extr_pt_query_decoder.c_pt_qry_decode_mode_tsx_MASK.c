
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_query_decoder {int evq; struct pt_event* event; int enabled; } ;
struct pt_packet_mode_tsx {int abrt; int intx; } ;
struct TYPE_3__ {int aborted; int speculative; scalar_t__ ip; } ;
struct TYPE_4__ {TYPE_1__ tsx; } ;
struct pt_event {int ip_suppressed; TYPE_2__ variant; int type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 struct pt_event* FUNC_1 (int *) ;
 int FUNC_2 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct pt_query_decoder *VAR_4,
      const struct pt_packet_mode_tsx *VAR_5)
{
 struct pt_event *VAR_6;

 if (!VAR_4 || !VAR_5)
  return -VAR_1;


 if (!VAR_4->enabled) {
  VAR_6 = FUNC_1(&VAR_4->evq);
  if (!VAR_6)
   return -VAR_1;


  VAR_6->variant.tsx.ip = 0;
  VAR_6->ip_suppressed = 1;


  VAR_4->event = VAR_6;
 } else {

  VAR_6 = FUNC_0(&VAR_4->evq, VAR_0);
  if (!VAR_6)
   return -VAR_2;
 }

 VAR_6->type = VAR_3;
 VAR_6->variant.tsx.speculative = VAR_5->intx;
 VAR_6->variant.tsx.aborted = VAR_5->abrt;

 return FUNC_2(VAR_6, VAR_4);
}
