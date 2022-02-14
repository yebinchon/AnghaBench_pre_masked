
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_conn {struct ip_vs_app* app; } ;
struct ip_vs_app {int (* done_conn ) (struct ip_vs_app*,struct ip_vs_conn*) ;int (* unbind_conn ) (struct ip_vs_app*,struct ip_vs_conn*) ;} ;


 int FUNC_0 (struct ip_vs_app*) ;
 int FUNC_1 (struct ip_vs_app*,struct ip_vs_conn*) ;
 int FUNC_2 (struct ip_vs_app*,struct ip_vs_conn*) ;

void FUNC_3(struct ip_vs_conn *VAR_0)
{
 struct ip_vs_app *VAR_1 = VAR_0->app;

 if (!VAR_1)
  return;

 if (VAR_1->unbind_conn)
  VAR_1->unbind_conn(VAR_1, VAR_0);
 if (VAR_1->done_conn)
  VAR_1->done_conn(VAR_1, VAR_0);
 FUNC_0(VAR_1);
 VAR_0->app = ((void*)0);
}
