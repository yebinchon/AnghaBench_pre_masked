
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {scalar_t__ consume_packet; int evq; struct pt_event* event; } ;
struct pt_event {int dummy; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (struct pt_query_decoder*,int) ;
 int FUNC_3 (struct pt_query_decoder*) ;
 int FUNC_4 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_1 ;

int FUNC_5(struct pt_query_decoder *VAR_2)
{
 struct pt_event *VAR_3;
 int VAR_4, VAR_5;

 if (!VAR_2)
  return -VAR_1;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_3 = FUNC_0(&VAR_2->evq, VAR_0);
 if (VAR_3) {
  VAR_5 = FUNC_4(VAR_3, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;


  VAR_2->event = VAR_3;


  if (FUNC_1(&VAR_2->evq, VAR_0))
   return 0;





  if (!VAR_2->consume_packet)
   return 0;




  VAR_2->consume_packet = 0;
 }

 return FUNC_2(VAR_2, VAR_4);
}
