
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct evdns_base {int dummy; } ;
typedef int ev_socklen_t ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (struct evdns_base*) ;
 int FUNC_2 (struct evdns_base*) ;
 int FUNC_3 (struct evdns_base*,struct sockaddr const*,int ) ;

int
FUNC_4(struct evdns_base *VAR_0,
    const struct sockaddr *VAR_1, ev_socklen_t VAR_2, unsigned VAR_3)
{
 int VAR_4;
 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0);
 return VAR_4;
}
