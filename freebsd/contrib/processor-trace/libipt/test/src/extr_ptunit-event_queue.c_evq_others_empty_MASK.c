
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct evq_fixture {int dummy; } ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 int VAR_0 ;
 int VAR_1 ;
 struct ptunit_result FUNC_0 () ;
 int FUNC_1 (int ,struct evq_fixture*,int) ;

__attribute__((used)) static struct ptunit_result FUNC_2(struct evq_fixture *VAR_2,
          enum pt_event_binding VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  enum pt_event_binding VAR_5;

  VAR_5 = (enum pt_event_binding) VAR_4;
  if (VAR_5 != VAR_3)
   FUNC_1(VAR_1, VAR_2, VAR_5);
 }

 return FUNC_0();
}
