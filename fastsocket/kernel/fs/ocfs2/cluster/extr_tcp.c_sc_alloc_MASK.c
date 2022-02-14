
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct o2nm_node {int dummy; } ;
struct TYPE_2__ {unsigned long data; int function; } ;
struct o2net_sock_container {struct page* sc_page; TYPE_1__ sc_idle_timeout; int sc_keepalive_work; int sc_shutdown_work; int sc_rx_work; int sc_connect_work; struct o2nm_node* sc_node; int sc_kref; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct o2net_sock_container*) ;
 int FUNC_6 (int *) ;
 struct o2net_sock_container* FUNC_7 (int,int ) ;
 int FUNC_8 (struct o2net_sock_container*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct o2nm_node*) ;
 int FUNC_10 (struct o2net_sock_container*,char*) ;

__attribute__((used)) static struct o2net_sock_container *FUNC_11(struct o2nm_node *VAR_6)
{
 struct o2net_sock_container *VAR_7, *VAR_8 = ((void*)0);
 struct page *VAR_9 = ((void*)0);

 VAR_9 = FUNC_3(VAR_0);
 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_0);
 if (VAR_7 == ((void*)0) || VAR_9 == ((void*)0))
  goto out;

 FUNC_6(&VAR_7->sc_kref);
 FUNC_9(VAR_6);
 VAR_7->sc_node = VAR_6;

 FUNC_1(&VAR_7->sc_connect_work, VAR_3);
 FUNC_1(&VAR_7->sc_rx_work, VAR_2);
 FUNC_1(&VAR_7->sc_shutdown_work, VAR_5);
 FUNC_0(&VAR_7->sc_keepalive_work, VAR_4);

 FUNC_4(&VAR_7->sc_idle_timeout);
 VAR_7->sc_idle_timeout.function = VAR_1;
 VAR_7->sc_idle_timeout.data = (unsigned long)VAR_7;

 FUNC_10(VAR_7, "alloced\n");

 VAR_8 = VAR_7;
 VAR_7->sc_page = VAR_9;
 FUNC_8(VAR_7);
 VAR_7 = ((void*)0);
 VAR_9 = ((void*)0);

out:
 if (VAR_9)
  FUNC_2(VAR_9);
 FUNC_5(VAR_7);

 return VAR_8;
}
