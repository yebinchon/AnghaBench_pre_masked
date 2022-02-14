
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ r; } ;
struct TYPE_5__ {scalar_t__ r; } ;
struct evdns_getaddrinfo_request {int pending_error; int (* user_cb ) (int,int *,int ) ;int user_data; int * pending_result; TYPE_3__* evdns_base; TYPE_2__ ipv6_request; TYPE_1__ ipv4_request; } ;
typedef int evutil_socket_t ;
struct TYPE_7__ {int getaddrinfo_ipv6_timeouts; int getaddrinfo_ipv4_timeouts; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct evdns_getaddrinfo_request*,int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct evdns_getaddrinfo_request*) ;
 int FUNC_6 (int,int *,int ) ;
 int FUNC_7 (int,int *,int ) ;

__attribute__((used)) static void
FUNC_8(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;
 struct evdns_getaddrinfo_request *VAR_6 = VAR_3;


 if (VAR_6->ipv4_request.r) {


  FUNC_4(((void*)0), VAR_6->ipv4_request.r);
  VAR_4 = 1;
  FUNC_0(VAR_6->evdns_base);
  ++VAR_6->evdns_base->getaddrinfo_ipv4_timeouts;
  FUNC_1(VAR_6->evdns_base);
 }
 if (VAR_6->ipv6_request.r) {


  FUNC_4(((void*)0), VAR_6->ipv6_request.r);
  VAR_5 = 1;
  FUNC_0(VAR_6->evdns_base);
  ++VAR_6->evdns_base->getaddrinfo_ipv6_timeouts;
  FUNC_1(VAR_6->evdns_base);
 }



 FUNC_2(!VAR_4 || !VAR_5);


 if (VAR_6->pending_result) {
  FUNC_3(VAR_6, VAR_6->pending_result);
  VAR_6->user_cb(0, VAR_6->pending_result, VAR_6->user_data);
  VAR_6->pending_result = ((void*)0);
 } else {
  int VAR_7 = VAR_6->pending_error;
  if (!VAR_7)
   VAR_7 = VAR_0;
  VAR_6->user_cb(VAR_7, ((void*)0), VAR_6->user_data);
 }

 VAR_6->user_cb = ((void*)0);



 if (!VAR_4 && !VAR_5) {

  FUNC_5(VAR_6);
 }
}
