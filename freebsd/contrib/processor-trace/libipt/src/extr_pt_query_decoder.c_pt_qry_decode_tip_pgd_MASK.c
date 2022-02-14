
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_query_decoder {int evq; struct pt_event* event; } ;
struct TYPE_3__ {int ip; } ;
struct TYPE_4__ {TYPE_1__ disabled; } ;
struct pt_event {TYPE_2__ variant; int type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 struct pt_event* FUNC_2 (int *) ;
 int FUNC_3 (struct pt_query_decoder*,int) ;
 int FUNC_4 (struct pt_query_decoder*) ;
 int FUNC_5 (int *,struct pt_event*,struct pt_query_decoder*) ;
 int FUNC_6 (struct pt_event*,struct pt_query_decoder*) ;
 int FUNC_7 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_8(struct pt_query_decoder *VAR_3)
{
 struct pt_event *VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_3)
  return -VAR_1;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_4 = FUNC_0(&VAR_3->evq, VAR_0);
 if (VAR_4) {
  VAR_6 = FUNC_7(VAR_4, VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
 } else {

  VAR_4 = FUNC_2(&VAR_3->evq);
  if (!VAR_4)
   return -VAR_1;
  VAR_4->type = VAR_2;

  VAR_6 = FUNC_5(&VAR_4->variant.disabled.ip, VAR_4,
       VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_6(VAR_4, VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
 }




 if (!VAR_4)
  return -VAR_1;


 VAR_3->event = VAR_4;


 if (FUNC_1(&VAR_3->evq, VAR_0))
  return 0;

 return FUNC_3(VAR_3, VAR_5);
}
