
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_debug_entry {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 struct event_debug_entry** FUNC_3 (int ,int *,struct event_debug_entry**) ;
 struct event_debug_entry** FUNC_4 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct event_debug_entry*) ;

void
FUNC_6(void)
{

 struct event_debug_entry **VAR_4, *VAR_5;

 FUNC_0(VAR_1, 0);
 for (VAR_4 = FUNC_4(VAR_0, &VAR_3); VAR_4; ) {
  VAR_5 = *VAR_4;
  VAR_4 = FUNC_3(VAR_0, &VAR_3, VAR_4);
  FUNC_5(VAR_5);
 }
 FUNC_2(VAR_0, &VAR_3);
 FUNC_1(VAR_1 , 0);

 VAR_2 = 0;

}
