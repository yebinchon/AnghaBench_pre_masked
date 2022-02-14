
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct sockaddr {int dummy; } ;
struct pending {TYPE_1__* sq; int addr; int timer; TYPE_2__* pc; int addrlen; } ;
struct outside_network {TYPE_3__* dtenv; int ip4_ifs; int num_ip4; int ip6_ifs; int num_ip6; } ;
typedef int sldns_buffer ;
struct TYPE_6__ {scalar_t__ log_forwarder_query_messages; scalar_t__ log_resolver_query_messages; } ;
struct TYPE_5__ {scalar_t__ cp; } ;
struct TYPE_4__ {int zonelen; int zone; struct outside_network* outnet; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__,int *,struct sockaddr*,int ) ;
 int FUNC_2 (int ,struct timeval*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*,int *,int ,int ,int ,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct outside_network*,TYPE_2__*) ;
 int FUNC_6 (struct outside_network*,struct pending*,int *) ;
 int FUNC_7 (struct outside_network*,struct pending*,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct pending* VAR_1, sldns_buffer* VAR_2, int VAR_3)
{
 struct timeval VAR_4;
 struct outside_network* VAR_5 = VAR_1->sq->outnet;


 if(!FUNC_6(VAR_5, VAR_1, VAR_2)) {
  return 0;
 }


 if(FUNC_0(&VAR_1->addr, VAR_1->addrlen)) {
  if(!FUNC_7(VAR_5, VAR_1,
   VAR_5->num_ip6, VAR_5->ip6_ifs))
   return 0;
 } else {
  if(!FUNC_7(VAR_5, VAR_1,
   VAR_5->num_ip4, VAR_5->ip4_ifs))
   return 0;
 }
 FUNC_4(VAR_1->pc && VAR_1->pc->cp);


 if(!FUNC_1(VAR_1->pc->cp, VAR_2,
  (struct sockaddr*)&VAR_1->addr, VAR_1->addrlen)) {
  FUNC_5(VAR_5, VAR_1->pc);
  return 0;
 }




 VAR_4.tv_sec = VAR_3/1000;
 VAR_4.tv_usec = (VAR_3%1000)*1000;

 FUNC_2(VAR_1->timer, &VAR_4);
 return 1;
}
