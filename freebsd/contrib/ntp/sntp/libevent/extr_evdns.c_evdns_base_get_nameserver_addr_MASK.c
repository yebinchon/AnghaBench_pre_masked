
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct nameserver {scalar_t__ addrlen; int address; struct nameserver* next; } ;
struct evdns_base {struct nameserver* server_head; } ;
typedef scalar_t__ ev_socklen_t ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (struct evdns_base*) ;
 int FUNC_2 (struct sockaddr*,int *,scalar_t__) ;

int
FUNC_3(struct evdns_base *VAR_0, int VAR_1,
    struct sockaddr *VAR_2, ev_socklen_t VAR_3)
{
 int VAR_4 = -1;
 int VAR_5;
 struct nameserver *VAR_6;
 FUNC_0(VAR_0);
 VAR_6 = VAR_0->server_head;
 for (VAR_5 = 0; VAR_5 < VAR_1 && VAR_6; ++VAR_5, VAR_6 = VAR_6->next) {
  if (VAR_6->next == VAR_0->server_head)
   goto done;
 }
 if (! VAR_6)
  goto done;

 if (VAR_6->addrlen > VAR_3) {
  VAR_4 = (int) VAR_6->addrlen;
  goto done;
 }

 FUNC_2(VAR_2, &VAR_6->address, VAR_6->addrlen);
 VAR_4 = (int) VAR_6->addrlen;
done:
 FUNC_1(VAR_0);
 return VAR_4;
}
