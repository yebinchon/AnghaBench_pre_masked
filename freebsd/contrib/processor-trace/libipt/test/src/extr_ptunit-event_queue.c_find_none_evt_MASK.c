
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_event {int dummy; } ;
struct evq_fixture {int evq; } ;
typedef enum pt_event_type { ____Placeholder_pt_event_type } pt_event_type ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 int VAR_0 ;
 struct pt_event* FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct pt_event*) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,struct evq_fixture*,int,int,size_t) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct evq_fixture *VAR_1,
       enum pt_event_binding VAR_2,
       enum pt_event_type VAR_3,
       size_t VAR_4)
{
 struct pt_event *VAR_5;

 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 VAR_5 = FUNC_0(&VAR_1->evq, VAR_2, VAR_3);
 FUNC_1(VAR_5);

 return FUNC_2();
}
