
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_protocol {int (* register_app ) (struct ip_vs_app*) ;int name; int unregister_app; } ;
struct ip_vs_app {struct ip_vs_app* timeout_table; int port; int name; int incs_list; int a_list; int timeouts_size; scalar_t__ timeouts; int usecnt; struct ip_vs_app* app; int p_list; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 struct ip_vs_app* FUNC_4 (scalar_t__,int ) ;
 struct ip_vs_protocol* FUNC_5 (int ) ;
 int FUNC_6 (struct ip_vs_app*) ;
 struct ip_vs_app* FUNC_7 (struct ip_vs_app*,int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct ip_vs_app*) ;

__attribute__((used)) static int
FUNC_10(struct ip_vs_app *VAR_4, __u16 VAR_5, __u16 VAR_6)
{
 struct ip_vs_protocol *VAR_7;
 struct ip_vs_app *VAR_8;
 int VAR_9;

 if (!(VAR_7 = FUNC_5(VAR_5)))
  return -VAR_2;

 if (!VAR_7->unregister_app)
  return -VAR_1;

 VAR_8 = FUNC_7(VAR_4, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_0;
 FUNC_0(&VAR_8->p_list);
 FUNC_0(&VAR_8->incs_list);
 VAR_8->app = VAR_4;
 VAR_8->port = FUNC_3(VAR_6);
 FUNC_2(&VAR_8->usecnt, 0);

 if (VAR_4->timeouts) {
  VAR_8->timeout_table =
   FUNC_4(VAR_4->timeouts,
         VAR_4->timeouts_size);
  if (!VAR_8->timeout_table) {
   VAR_9 = -VAR_0;
   goto out;
  }
 }

 VAR_9 = VAR_7->register_app(VAR_8);
 if (VAR_9)
  goto out;

 FUNC_8(&VAR_8->a_list, &VAR_4->incs_list);
 FUNC_1(9, "%s application %s:%u registered\n",
    VAR_7->name, VAR_8->name, VAR_8->port);

 return 0;

  out:
 FUNC_6(VAR_8->timeout_table);
 FUNC_6(VAR_8);
 return VAR_9;
}
