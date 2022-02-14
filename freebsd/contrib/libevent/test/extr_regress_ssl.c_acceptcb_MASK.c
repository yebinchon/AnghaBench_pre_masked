
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_0; int member_1; } ;
struct sockaddr {int dummy; } ;
struct evconnlistener {int dummy; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {int base; scalar_t__ setup_data; } ;
typedef int evutil_socket_t ;
typedef enum regress_openssl_type { ____Placeholder_regress_openssl_type } regress_openssl_type ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct bufferevent*,int) ;
 int FUNC_4 (struct bufferevent*,int) ;
 struct bufferevent* FUNC_5 (int ,int ,int *,int ,int) ;
 int FUNC_6 (struct bufferevent*,int ,int *,int ,void*) ;
 int FUNC_7 (struct evconnlistener*) ;
 int FUNC_8 (int ,int,int ,int ,struct bufferevent*,struct timeval*) ;
 int VAR_9 ;
 int FUNC_9 () ;
 int VAR_10 ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static void
FUNC_12(struct evconnlistener *VAR_11, evutil_socket_t VAR_12,
    struct sockaddr *VAR_13, int VAR_14, void *VAR_15)
{
 struct basic_test_data *VAR_16 = VAR_15;
 struct bufferevent *VAR_17;
 enum regress_openssl_type VAR_18;
 SSL *VAR_19 = FUNC_0(FUNC_9());

 VAR_18 = (enum regress_openssl_type)VAR_16->setup_data;

 FUNC_2(VAR_19, FUNC_10());
 FUNC_1(VAR_19, FUNC_11());

 VAR_17 = FUNC_5(
  VAR_16->base,
  VAR_12,
  VAR_19,
  VAR_2,
  VAR_0|VAR_1);

 FUNC_6(VAR_17, VAR_10, ((void*)0), VAR_9,
     (void*)(VAR_6));

 if (VAR_18 & VAR_7) {
  struct timeval VAR_20 = { 1, 0 };
  FUNC_8(VAR_16->base, -1, VAR_4,
      VAR_8, VAR_17, &VAR_20);
  FUNC_3(VAR_17, VAR_3|VAR_5);
 } else {
  FUNC_4(VAR_17, VAR_3|VAR_5);
 }


 FUNC_7(VAR_11);
}
