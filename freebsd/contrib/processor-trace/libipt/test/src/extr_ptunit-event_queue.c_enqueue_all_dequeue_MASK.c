
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_event {int dummy; } ;
struct evq_fixture {int evq; } ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pt_event* FUNC_0 (int *,int) ;
 struct pt_event* FUNC_1 (int *,int) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (struct pt_event*) ;
 int FUNC_4 (struct pt_event*,struct pt_event*) ;
 int FUNC_5 (int ,struct evq_fixture*,int) ;
 int FUNC_6 (size_t,int) ;

__attribute__((used)) static struct ptunit_result FUNC_7(struct evq_fixture *VAR_4,
      enum pt_event_binding VAR_5,
      size_t VAR_6)
{
 struct pt_event *VAR_7[VAR_1], *VAR_8[VAR_1];
 size_t VAR_9;

 FUNC_6(VAR_6, VAR_1 - 2);

 for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9) {
  VAR_7[VAR_9] = FUNC_1(&VAR_4->evq, VAR_5);
  FUNC_3(VAR_7[VAR_9]);
 }

 FUNC_5(VAR_3, VAR_4, VAR_5);
 FUNC_5(VAR_2, VAR_4, VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9) {
  VAR_8[VAR_9] = FUNC_0(&VAR_4->evq, VAR_5);
  FUNC_4(VAR_8[VAR_9], VAR_7[VAR_9]);
 }

 FUNC_5(VAR_0, VAR_4, VAR_5);

 return FUNC_2();
}
