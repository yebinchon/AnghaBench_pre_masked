
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bufferevent* FUNC_0 (struct event_base*,struct bufferevent*,int *,int,int) ;
 struct bufferevent* FUNC_1 (struct event_base*,int ,int *,int,int) ;
 int FUNC_2 (struct bufferevent*,int ,int ,int ,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(struct bufferevent **VAR_6, struct bufferevent **VAR_7,
    struct event_base *VAR_8, int VAR_9, int VAR_10, SSL *VAR_11, SSL *VAR_12,
    evutil_socket_t *VAR_13, struct bufferevent **VAR_14)
{
 int VAR_15 = VAR_9 ? VAR_2 :VAR_1;
 int VAR_16 = VAR_9 ? VAR_2 :VAR_0;
 if (VAR_13) {
  *VAR_6 = FUNC_1(
   VAR_8, VAR_13[0], VAR_11, VAR_15, VAR_10);
  *VAR_7 = FUNC_1(
   VAR_8, VAR_13[1], VAR_12, VAR_16, VAR_10);
 } else {
  *VAR_6 = FUNC_0(
   VAR_8, VAR_14[0], VAR_11, VAR_15, VAR_10);
  *VAR_7 = FUNC_0(
   VAR_8, VAR_14[1], VAR_12, VAR_16, VAR_10);

 }
 FUNC_2(*VAR_6, VAR_5, VAR_3,
     VAR_4, (void*)"client");
 FUNC_2(*VAR_7, VAR_5, VAR_3,
     VAR_4, (void*)"server");
}
