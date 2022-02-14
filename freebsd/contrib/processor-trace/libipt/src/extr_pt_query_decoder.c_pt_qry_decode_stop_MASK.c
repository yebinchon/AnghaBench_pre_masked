
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int pos; struct pt_event* event; int evq; } ;
struct pt_event {int type; } ;


 struct pt_event* FUNC_0 (int *) ;
 int FUNC_1 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_2(struct pt_query_decoder *VAR_3)
{
 struct pt_event *VAR_4;
 int VAR_5;

 if (!VAR_3)
  return -VAR_0;


 VAR_4 = FUNC_0(&VAR_3->evq);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->type = VAR_1;

 VAR_3->event = VAR_4;

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->pos += VAR_2;
 return 0;
}
