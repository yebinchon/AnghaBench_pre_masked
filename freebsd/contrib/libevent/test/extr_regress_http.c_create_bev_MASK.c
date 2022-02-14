
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 struct bufferevent* FUNC_1 (struct event_base*,struct bufferevent*,int *,int ,int) ;
 int FUNC_2 (struct bufferevent*,int) ;
 struct bufferevent* FUNC_3 (struct event_base*,int,int *,int ,int) ;
 struct bufferevent* FUNC_4 (struct event_base*,int,int) ;
 int FUNC_5 () ;

__attribute__((used)) static struct bufferevent *
FUNC_6(struct event_base *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_0;
 struct bufferevent *VAR_7 = ((void*)0);

 if (!VAR_5) {
  VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_6);
 } else {
 }

 return VAR_7;
}
