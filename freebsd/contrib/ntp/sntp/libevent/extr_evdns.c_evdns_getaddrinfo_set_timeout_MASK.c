
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdns_getaddrinfo_request {int timeout; } ;
struct evdns_base {int global_getaddrinfo_allow_skew; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct evdns_base *VAR_0,
    struct evdns_getaddrinfo_request *VAR_1)
{
 return FUNC_0(&VAR_1->timeout, &VAR_0->global_getaddrinfo_allow_skew);
}
