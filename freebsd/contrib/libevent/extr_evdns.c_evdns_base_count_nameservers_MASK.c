
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct nameserver {struct nameserver const* next; } const nameserver ;
struct evdns_base {struct nameserver const* server_head; } ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (struct evdns_base*) ;

int
FUNC_2(struct evdns_base *VAR_0)
{
 const struct nameserver *VAR_1;
 int VAR_2 = 0;

 FUNC_0(VAR_0);
 VAR_1 = VAR_0->server_head;
 if (!VAR_1)
  goto done;
 do {
  ++VAR_2;
  VAR_1 = VAR_1->next;
 } while (VAR_1 != VAR_0->server_head);
done:
 FUNC_1(VAR_0);
 return VAR_2;
}
