
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct server_request {int addrlen; int addr; } ;
struct evdns_server_request {int dummy; } ;


 struct server_request* FUNC_0 (struct evdns_server_request*) ;
 int FUNC_1 (struct sockaddr*,int *,int) ;

int
FUNC_2(struct evdns_server_request *VAR_0, struct sockaddr *VAR_1, int VAR_2)
{
 struct server_request *VAR_3 = FUNC_0(VAR_0);
 if (VAR_2 < (int)VAR_3->addrlen)
  return -1;
 FUNC_1(VAR_1, &(VAR_3->addr), VAR_3->addrlen);
 return VAR_3->addrlen;
}
