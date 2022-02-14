
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct evconnlistener {int dummy; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int evutil_socket_t ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct bufferevent*,int) ;
 struct bufferevent* FUNC_4 (int ,int ,int *,int ,int) ;
 int FUNC_5 (struct bufferevent*,int ,int *,int ,void*) ;
 int FUNC_6 (struct evconnlistener*) ;
 int VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_10(struct evconnlistener *VAR_7, evutil_socket_t VAR_8,
    struct sockaddr *VAR_9, int VAR_10, void *VAR_11)
{
 struct basic_test_data *VAR_12 = VAR_11;
 struct bufferevent *VAR_13;
 SSL *VAR_14 = FUNC_0(FUNC_7());

 FUNC_2(VAR_14, FUNC_8());
 FUNC_1(VAR_14, FUNC_9());

 VAR_13 = FUNC_4(
  VAR_12->base,
  VAR_8,
  VAR_14,
  VAR_2,
  VAR_0|VAR_1);

 FUNC_5(VAR_13, VAR_6, ((void*)0), VAR_5,
     (void*)"server");

 FUNC_3(VAR_13, VAR_3|VAR_4);


 FUNC_6(VAR_7);
}
