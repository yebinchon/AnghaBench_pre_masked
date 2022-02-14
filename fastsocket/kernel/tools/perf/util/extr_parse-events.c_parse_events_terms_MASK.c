
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_events_data__terms {int * terms; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,struct parse_events_data__terms*,int ) ;

int FUNC_4(struct list_head *VAR_1, const char *VAR_2)
{
 struct parse_events_data__terms VAR_3 = {
  .terms = ((void*)0),
 };
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, &VAR_3, VAR_0);
 if (!VAR_4) {
  FUNC_1(VAR_3.terms, VAR_1);
  FUNC_0(VAR_3.terms);
  return 0;
 }

 FUNC_2(VAR_3.terms);
 return VAR_4;
}
