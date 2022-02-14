
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {struct pt_event* event; int evq; } ;
struct pt_event {int dummy; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pt_query_decoder *VAR_2)
{
 struct pt_event *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return -VAR_1;

 VAR_3 = FUNC_0(&VAR_2->evq, VAR_0);
 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_2->event = VAR_3;


 return 1;
}
