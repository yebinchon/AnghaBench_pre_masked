
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_event {int type; } ;
struct evq_fixture {int evq; } ;
typedef enum pt_event_type { ____Placeholder_pt_event_type } pt_event_type ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 struct pt_event* FUNC_0 (int *,int) ;
 struct ptunit_result FUNC_1 () ;
 int FUNC_2 (struct pt_event*) ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct evq_fixture *VAR_0,
           enum pt_event_binding VAR_1,
           enum pt_event_type VAR_2,
           size_t VAR_3)
{
 enum pt_event_type VAR_4;
 struct pt_event *VAR_5;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  VAR_4 = (enum pt_event_type) VAR_6;
  if (VAR_4 != VAR_2) {
   VAR_5 = FUNC_0(&VAR_0->evq, VAR_1);
   FUNC_2(VAR_5);

   VAR_5->type = VAR_4;
  }
 }

 return FUNC_1();
}
