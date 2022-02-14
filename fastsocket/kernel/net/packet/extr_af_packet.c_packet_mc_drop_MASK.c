
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct packet_mreq_max {scalar_t__ mr_ifindex; scalar_t__ mr_type; scalar_t__ mr_alen; int mr_address; } ;
struct packet_mclist {scalar_t__ ifindex; scalar_t__ type; scalar_t__ alen; scalar_t__ count; struct packet_mclist* next; int addr; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct packet_mclist* mclist; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct packet_mclist*) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct net_device*,struct packet_mclist*,int) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_1, struct packet_mreq_max *VAR_2)
{
 struct packet_mclist *VAR_3, **VAR_4;

 FUNC_6();

 for (VAR_4 = &FUNC_5(VAR_1)->mclist; (VAR_3 = *VAR_4) != ((void*)0); VAR_4 = &VAR_3->next) {
  if (VAR_3->ifindex == VAR_2->mr_ifindex &&
      VAR_3->type == VAR_2->mr_type &&
      VAR_3->alen == VAR_2->mr_alen &&
      FUNC_3(VAR_3->addr, VAR_2->mr_address, VAR_3->alen) == 0) {
   if (--VAR_3->count == 0) {
    struct net_device *VAR_5;
    *VAR_4 = VAR_3->next;
    VAR_5 = FUNC_0(FUNC_8(VAR_1), VAR_3->ifindex);
    if (VAR_5) {
     FUNC_4(VAR_5, VAR_3, -1);
     FUNC_1(VAR_5);
    }
    FUNC_2(VAR_3);
   }
   FUNC_7();
   return 0;
  }
 }
 FUNC_7();
 return -VAR_0;
}
