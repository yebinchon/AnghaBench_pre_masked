
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int enabled; int ev_base; int ev_write; int ev_read; int * be_ops; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bufferevent*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,int ,int,int ,struct bufferevent*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct bufferevent *VAR_7, evutil_socket_t VAR_8)
{
 FUNC_0(VAR_7);
 FUNC_2(VAR_7->be_ops == &VAR_4);

 FUNC_5(&VAR_7->ev_read);
 FUNC_5(&VAR_7->ev_write);

 FUNC_4(&VAR_7->ev_read, VAR_7->ev_base, VAR_8,
     VAR_2|VAR_1|VAR_0, VAR_5, VAR_7);
 FUNC_4(&VAR_7->ev_write, VAR_7->ev_base, VAR_8,
     VAR_3|VAR_1|VAR_0, VAR_6, VAR_7);

 if (VAR_8 >= 0)
  FUNC_3(VAR_7, VAR_7->enabled);

 FUNC_1(VAR_7);
}
