
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct evq_fixture {int evq; } ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;

__attribute__((used)) static struct ptunit_result FUNC_5(struct evq_fixture *VAR_0,
     enum pt_event_binding VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->evq, VAR_1);
 FUNC_2(VAR_2, 0);

 VAR_2 = FUNC_1(&VAR_0->evq, VAR_1);
 FUNC_3(VAR_2, 0);

 return FUNC_4();
}
