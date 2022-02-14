
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int cb_arg; int (* cb ) (struct evhttp_connection*,int ) ;} ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct evhttp_connection*,int ) ;

__attribute__((used)) static void
FUNC_1(struct bufferevent *VAR_0, void *VAR_1)
{
 struct evhttp_connection *VAR_2 = VAR_1;


 if (VAR_2->cb != ((void*)0))
  (*VAR_2->cb)(VAR_2, VAR_2->cb_arg);
}
