
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {int * ai_canonname; } ;
struct evdns_getaddrinfo_request {int * cname_result; } ;



__attribute__((used)) static void
FUNC_0(struct evdns_getaddrinfo_request *VAR_0,
    struct evutil_addrinfo *VAR_1)
{
 if (VAR_0->cname_result && VAR_1) {
  VAR_1->ai_canonname = VAR_0->cname_result;
  VAR_0->cname_result = ((void*)0);
 }
}
