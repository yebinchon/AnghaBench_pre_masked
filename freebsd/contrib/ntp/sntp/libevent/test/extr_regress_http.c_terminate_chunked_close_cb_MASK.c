
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terminate_state {int gotclosecb; } ;
struct evhttp_connection {int dummy; } ;



__attribute__((used)) static void
FUNC_0(struct evhttp_connection *VAR_0, void *VAR_1)
{
 struct terminate_state *VAR_2 = VAR_1;
 VAR_2->gotclosecb = 1;
}
