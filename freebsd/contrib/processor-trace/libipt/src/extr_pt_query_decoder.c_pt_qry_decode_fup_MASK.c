
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct pt_query_decoder {int evq; int ip; scalar_t__ consume_packet; struct pt_event* event; } ;
struct TYPE_3__ {int from; } ;
struct TYPE_4__ {TYPE_1__ async_branch; } ;
struct pt_event {TYPE_2__ variant; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 struct pt_event* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct pt_query_decoder*,int) ;
 int FUNC_5 (struct pt_query_decoder*) ;
 int FUNC_6 (struct pt_event*,struct pt_query_decoder*) ;
 int FUNC_7 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_8(struct pt_query_decoder *VAR_5)
{
 struct pt_event *VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_5)
  return -VAR_2;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_6 = FUNC_0(&VAR_5->evq, VAR_0);
 if (VAR_6) {
  VAR_8 = FUNC_6(VAR_6, VAR_5);
  if (VAR_8 < 0)
   return VAR_8;


  VAR_5->event = VAR_6;


  if (FUNC_2(&VAR_5->evq, VAR_0))
   return 0;





  if (!VAR_5->consume_packet)
   return 0;




  VAR_5->consume_packet = 0;
 } else {




  uint64_t VAR_9;

  VAR_8 = FUNC_3(&VAR_9, &VAR_5->ip);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_6 = FUNC_1(&VAR_5->evq, VAR_1);
  if (!VAR_6)
   return -VAR_3;

  VAR_6->type = VAR_4;
  VAR_6->variant.async_branch.from = VAR_9;

  VAR_8 = FUNC_7(VAR_6, VAR_5);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return FUNC_4(VAR_5, VAR_7);
}
