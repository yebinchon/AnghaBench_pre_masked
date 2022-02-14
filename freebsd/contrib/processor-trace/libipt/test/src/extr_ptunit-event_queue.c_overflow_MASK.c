
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_event {int dummy; } ;
struct evq_fixture {int evq; } ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int) ;
 struct pt_event* FUNC_1 (int *,int) ;
 int FUNC_2 (struct pt_event*) ;
 struct ptunit_result FUNC_3 () ;
 int FUNC_4 (struct pt_event*) ;
 int FUNC_5 (struct pt_event*,struct pt_event*) ;
 int FUNC_6 (size_t,int) ;

__attribute__((used)) static struct ptunit_result FUNC_7(struct evq_fixture *VAR_1,
         enum pt_event_binding VAR_2,
         size_t VAR_3)
{
 struct pt_event *VAR_4[VAR_0], *VAR_5[VAR_0], *VAR_6;
 size_t VAR_7;

 FUNC_6(VAR_3, VAR_0 - 2);

 for (VAR_7 = 0; VAR_7 < (VAR_0 - 2); ++VAR_7) {
  VAR_4[VAR_7] = FUNC_1(&VAR_1->evq, VAR_2);
  FUNC_4(VAR_4[VAR_7]);
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
  VAR_6 = FUNC_1(&VAR_1->evq, VAR_2);
  FUNC_2(VAR_6);
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
  VAR_5[VAR_7] = FUNC_0(&VAR_1->evq, VAR_2);
  FUNC_5(VAR_5[VAR_7], VAR_4[VAR_7]);
 }

 return FUNC_3();
}
