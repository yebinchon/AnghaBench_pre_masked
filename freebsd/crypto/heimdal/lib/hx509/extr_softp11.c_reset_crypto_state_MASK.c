
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session_state {int sign_object; int verify_object; void* verify_mechanism; void* sign_mechanism; } ;


 void* VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static void
FUNC_1(struct session_state *VAR_1)
{
    VAR_1->sign_object = -1;
    if (VAR_1->sign_mechanism)
 FUNC_0(VAR_1->sign_mechanism);
    VAR_1->sign_mechanism = VAR_0;
    VAR_1->verify_object = -1;
    if (VAR_1->verify_mechanism)
 FUNC_0(VAR_1->verify_mechanism);
    VAR_1->verify_mechanism = VAR_0;
}
