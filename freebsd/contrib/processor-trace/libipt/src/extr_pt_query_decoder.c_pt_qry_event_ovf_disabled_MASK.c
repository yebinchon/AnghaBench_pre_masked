
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {struct pt_event* event; scalar_t__ enabled; int evq; } ;
struct pt_event {int ip_suppressed; int type; } ;


 struct pt_event* FUNC_0 (int *) ;
 int FUNC_1 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pt_query_decoder *VAR_2)
{
 struct pt_event *VAR_3;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_0(&VAR_2->evq);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->type = VAR_1;





 VAR_3->ip_suppressed = 1;

 VAR_2->enabled = 0;
 VAR_2->event = VAR_3;

 return FUNC_1(VAR_3, VAR_2);
}
