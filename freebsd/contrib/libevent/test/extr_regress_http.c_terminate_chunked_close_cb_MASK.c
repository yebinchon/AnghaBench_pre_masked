
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terminate_state {int gotclosecb; int base; int * req; scalar_t__ oneshot; } ;
struct evhttp_connection {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct evhttp_connection *VAR_0, void *VAR_1)
{
 struct terminate_state *VAR_2 = VAR_1;
 VAR_2->gotclosecb = 1;


 if (VAR_2->oneshot) {
  FUNC_1(VAR_2->req);
  VAR_2->req = ((void*)0);
  FUNC_0(VAR_2->base,((void*)0));
 }
}
