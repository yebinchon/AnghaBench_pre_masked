
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_protocol {int name; int (* unregister_app ) (struct ip_vs_app*) ;} ;
struct ip_vs_app {struct ip_vs_app* timeout_table; int a_list; int port; int name; int protocol; } ;


 int FUNC_0 (int,char*,int ,int ,int ) ;
 struct ip_vs_protocol* FUNC_1 (int ) ;
 int FUNC_2 (struct ip_vs_app*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ip_vs_app*) ;

__attribute__((used)) static void
FUNC_5(struct ip_vs_app *VAR_0)
{
 struct ip_vs_protocol *VAR_1;

 if (!(VAR_1 = FUNC_1(VAR_0->protocol)))
  return;

 if (VAR_1->unregister_app)
  VAR_1->unregister_app(VAR_0);

 FUNC_0(9, "%s App %s:%u unregistered\n",
    VAR_1->name, VAR_0->name, VAR_0->port);

 FUNC_3(&VAR_0->a_list);

 FUNC_2(VAR_0->timeout_table);
 FUNC_2(VAR_0);
}
