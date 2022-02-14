
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_event {int dummy; } ;
typedef enum pt_event_type { ____Placeholder_pt_event_type } pt_event_type ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 struct pt_event* FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct pt_event*) ;
 struct ptunit_result FUNC_2 () ;

__attribute__((used)) static struct ptunit_result FUNC_3(enum pt_event_binding VAR_0,
          enum pt_event_type VAR_1)
{
 struct pt_event *VAR_2;

 VAR_2 = FUNC_0(((void*)0), VAR_0, VAR_1);
 FUNC_1(VAR_2);

 return FUNC_2();
}
