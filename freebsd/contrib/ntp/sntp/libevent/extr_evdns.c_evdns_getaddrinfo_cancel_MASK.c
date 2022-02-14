
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ r; } ;
struct TYPE_3__ {scalar_t__ r; } ;
struct evdns_getaddrinfo_request {int user_canceled; int evdns_base; TYPE_2__ ipv6_request; TYPE_1__ ipv4_request; int timeout; scalar_t__ request_done; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct evdns_getaddrinfo_request *VAR_0)
{
 FUNC_0(VAR_0->evdns_base);
 if (VAR_0->request_done) {
  FUNC_1(VAR_0->evdns_base);
  return;
 }
 FUNC_3(&VAR_0->timeout);
 VAR_0->user_canceled = 1;
 if (VAR_0->ipv4_request.r)
  FUNC_2(VAR_0->evdns_base, VAR_0->ipv4_request.r);
 if (VAR_0->ipv6_request.r)
  FUNC_2(VAR_0->evdns_base, VAR_0->ipv6_request.r);
 FUNC_1(VAR_0->evdns_base);
}
