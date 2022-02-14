
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int enabled; int evq; } ;
struct pt_event {int type; } ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pt_event*,struct pt_query_decoder*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct pt_query_decoder *VAR_3)
{
 struct pt_event *VAR_4;

 if (!VAR_3)
  return -VAR_1;

 VAR_4 = FUNC_0(&VAR_3->evq, VAR_0);
 if (!VAR_4)
  return -VAR_1;

 VAR_4->type = VAR_2;

 VAR_3->enabled = 1;

 return FUNC_1(VAR_4, VAR_3);
}
