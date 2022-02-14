
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_event {int status_update; int ip_suppressed; } ;
struct evq_fixture {int evq; } ;


 struct pt_event* FUNC_0 (int *) ;
 struct ptunit_result FUNC_1 () ;
 int FUNC_2 (struct pt_event*) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static struct ptunit_result FUNC_4(struct evq_fixture *VAR_0)
{
 struct pt_event *VAR_1;

 VAR_1 = FUNC_0(&VAR_0->evq);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1->ip_suppressed, 0ul);
 FUNC_3(VAR_1->status_update, 0ul);

 return FUNC_1();
}
