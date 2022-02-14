
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_event {int type; } ;
struct evq_fixture {int evq; } ;
typedef enum pt_event_type { ____Placeholder_pt_event_type } pt_event_type ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 size_t VAR_0 ;
 struct pt_event* FUNC_0 (int *,int) ;
 struct pt_event* FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct pt_event*) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (struct pt_event*) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct evq_fixture *VAR_1,
       enum pt_event_binding VAR_2,
       enum pt_event_type VAR_3)
{
 struct pt_event *VAR_4;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  enum pt_event_binding VAR_6;

  VAR_6 = (enum pt_event_binding) VAR_5;
  if (VAR_6 != VAR_2) {
   VAR_4 = FUNC_0(&VAR_1->evq, VAR_6);
   FUNC_4(VAR_4);

   VAR_4->type = VAR_3;
  }
 }

 VAR_4 = FUNC_1(&VAR_1->evq, VAR_2, VAR_3);
 FUNC_2(VAR_4);

 return FUNC_3();
}
