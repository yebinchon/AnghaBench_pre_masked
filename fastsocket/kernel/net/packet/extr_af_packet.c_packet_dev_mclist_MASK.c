
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_mclist {scalar_t__ ifindex; struct packet_mclist* next; } ;
struct net_device {scalar_t__ ifindex; } ;


 int FUNC_0 (struct net_device*,struct packet_mclist*,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, struct packet_mclist *VAR_1, int VAR_2)
{
 for ( ; VAR_1; VAR_1 = VAR_1->next) {
  if (VAR_1->ifindex == VAR_0->ifindex)
   FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
