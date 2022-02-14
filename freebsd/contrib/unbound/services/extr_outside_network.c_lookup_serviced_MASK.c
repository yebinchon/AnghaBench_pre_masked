
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_2__ {struct serviced_query* key; } ;
struct serviced_query {int dnssec; struct edns_option* opt_list; struct outside_network* outnet; int addrlen; int addr; int qbuflen; int qbuf; TYPE_1__ node; } ;
struct outside_network {int serviced; } ;
struct edns_option {int dummy; } ;
typedef int socklen_t ;
typedef int sldns_buffer ;


 int FUNC_0 (int *,struct sockaddr_storage*,int ) ;
 scalar_t__ FUNC_1 (int ,struct serviced_query*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct serviced_query*
FUNC_4(struct outside_network* VAR_0, sldns_buffer* VAR_1, int VAR_2,
 struct sockaddr_storage* VAR_3, socklen_t VAR_4,
 struct edns_option* VAR_5)
{
 struct serviced_query VAR_6;
 VAR_6.node.key = &VAR_6;
 VAR_6.qbuf = FUNC_2(VAR_1);
 VAR_6.qbuflen = FUNC_3(VAR_1);
 VAR_6.dnssec = VAR_2;
 FUNC_0(&VAR_6.addr, VAR_3, VAR_4);
 VAR_6.addrlen = VAR_4;
 VAR_6.outnet = VAR_0;
 VAR_6.opt_list = VAR_5;
 return (struct serviced_query*)FUNC_1(VAR_0->serviced, &VAR_6);
}
