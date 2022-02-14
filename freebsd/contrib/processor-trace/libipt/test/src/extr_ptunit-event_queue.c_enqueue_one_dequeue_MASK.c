
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_event {int dummy; } ;
struct evq_fixture {int evq; } ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 struct pt_event* FUNC_0 (int *,int) ;
 struct pt_event* FUNC_1 (int *,int) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (struct pt_event*) ;
 int FUNC_4 (struct pt_event*,struct pt_event*) ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct evq_fixture *VAR_0,
      enum pt_event_binding VAR_1,
      size_t VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  struct pt_event *VAR_4, *VAR_5;

  VAR_4 = FUNC_1(&VAR_0->evq, VAR_1);
  FUNC_3(VAR_4);

  VAR_5 = FUNC_0(&VAR_0->evq, VAR_1);
  FUNC_4(VAR_5, VAR_4);
 }

 return FUNC_2();
}
