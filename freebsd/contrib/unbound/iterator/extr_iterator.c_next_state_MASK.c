
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_qstate {int state; int * response; } ;
typedef enum iter_state { ____Placeholder_iter_state } iter_state ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct iter_qstate* VAR_0, enum iter_state VAR_1)
{


 if(FUNC_0(VAR_1)) {
  if(VAR_0->response == ((void*)0)) {
   FUNC_1("transitioning to response state sans "
    "response.");
  }
 }
 VAR_0->state = VAR_1;
 return 1;
}
