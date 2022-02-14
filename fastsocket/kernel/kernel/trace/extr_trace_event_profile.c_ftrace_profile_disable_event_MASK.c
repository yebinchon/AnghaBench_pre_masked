
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_call {int (* profile_disable ) (struct ftrace_event_call*) ;int profile_count; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (struct ftrace_event_call*) ;
 int FUNC_4 () ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;

__attribute__((used)) static void FUNC_5(struct ftrace_event_call *VAR_3)
{
 char *VAR_4, *VAR_5;

 if (!FUNC_0(-1, &VAR_3->profile_count))
  return;

 VAR_3->profile_disable(VAR_3);

 if (!--VAR_0) {
  VAR_4 = VAR_1;
  FUNC_2(VAR_1, ((void*)0));

  VAR_5 = VAR_2;
  FUNC_2(VAR_2, ((void*)0));





  FUNC_4();

  FUNC_1(VAR_4);
  FUNC_1(VAR_5);
 }
}
