
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;
typedef enum regress_openssl_type { ____Placeholder_regress_openssl_type } regress_openssl_type ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 struct bufferevent* FUNC_0 (struct event_base*,struct bufferevent*,int *,int,int) ;
 int FUNC_1 (struct bufferevent*,int) ;
 struct bufferevent* FUNC_2 (struct event_base*,int ,int *,int,int) ;
 int FUNC_3 (struct bufferevent*,int ,int ,int ,void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_4(struct bufferevent **VAR_9, struct bufferevent **VAR_10,
    struct event_base *VAR_11, int VAR_12, int VAR_13, SSL *VAR_14, SSL *VAR_15,
    evutil_socket_t *VAR_16, struct bufferevent **VAR_17,
    enum regress_openssl_type VAR_18)
{
 int VAR_19 = VAR_12 ? VAR_2 :VAR_1;
 int VAR_20 = VAR_12 ? VAR_2 :VAR_0;
 int VAR_21 = VAR_18 & VAR_4;
 if (VAR_16) {
  *VAR_9 = FUNC_2(
   VAR_11, VAR_16[0], VAR_14, VAR_19, VAR_13);
  *VAR_10 = FUNC_2(
   VAR_11, VAR_16[1], VAR_15, VAR_20, VAR_13);
 } else {
  *VAR_9 = FUNC_0(
   VAR_11, VAR_17[0], VAR_14, VAR_19, VAR_13);
  *VAR_10 = FUNC_0(
   VAR_11, VAR_17[1], VAR_15, VAR_20, VAR_13);

 }
 FUNC_3(*VAR_9, VAR_8, VAR_6,
     VAR_7, (void*)(VAR_3 | (long)VAR_18));
 FUNC_3(*VAR_10, VAR_8, VAR_6,
     VAR_7, (void*)(VAR_5 | (long)VAR_18));

 FUNC_1(*VAR_9, VAR_21);
 FUNC_1(*VAR_10, VAR_21);
}
