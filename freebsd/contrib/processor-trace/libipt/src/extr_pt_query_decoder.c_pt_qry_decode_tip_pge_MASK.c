
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_query_decoder {int consume_packet; int enabled; int evq; struct pt_event* event; int tnt; int ip; } ;
struct TYPE_3__ {int ip; } ;
struct TYPE_4__ {TYPE_1__ enabled; } ;
struct pt_event {TYPE_2__ variant; int type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 struct pt_event* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct pt_query_decoder*,int) ;
 int FUNC_5 (struct pt_query_decoder*) ;
 int FUNC_6 (struct pt_event*,struct pt_query_decoder*) ;
 int FUNC_7 (struct pt_event*,struct pt_query_decoder*) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_9(struct pt_query_decoder *VAR_4)
{
 struct pt_event *VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_4)
  return -VAR_2;

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;







 if (!VAR_4->consume_packet) {

  VAR_5 = FUNC_2(&VAR_4->evq);
  if (!VAR_5)
   return -VAR_2;

  VAR_5->type = VAR_3;


  VAR_7 = FUNC_3(&VAR_5->variant.enabled.ip,
        &VAR_4->ip);
  if (VAR_7 < 0)
   return -VAR_1;

  VAR_7 = FUNC_6(VAR_5, VAR_4);
  if (VAR_7 < 0)
   return VAR_7;







  FUNC_8(&VAR_4->tnt);


  VAR_4->consume_packet = 1;
  VAR_4->enabled = 1;
 } else {

  VAR_5 = FUNC_0(&VAR_4->evq, VAR_0);
  if (VAR_5) {
   VAR_7 = FUNC_7(VAR_5, VAR_4);
   if (VAR_7 < 0)
    return VAR_7;
  }
 }




 if (!VAR_5)
  return -VAR_2;


 VAR_4->event = VAR_5;


 if (FUNC_1(&VAR_4->evq, VAR_0))
  return 0;


 if (!VAR_4->consume_packet)
  return -VAR_2;

 VAR_4->consume_packet = 0;

 return FUNC_4(VAR_4, VAR_6);
}
