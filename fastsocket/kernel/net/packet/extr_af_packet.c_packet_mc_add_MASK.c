
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct packet_sock {struct packet_mclist* mclist; } ;
struct packet_mreq_max {scalar_t__ mr_ifindex; scalar_t__ mr_alen; scalar_t__ mr_type; int mr_address; } ;
struct packet_mclist {scalar_t__ ifindex; scalar_t__ type; scalar_t__ alen; int count; struct packet_mclist* next; int addr; } ;
struct net_device {scalar_t__ addr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct packet_mclist*) ;
 struct packet_mclist* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (struct net_device*,struct packet_mclist*,int) ;
 struct packet_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_4, struct packet_mreq_max *VAR_5)
{
 struct packet_sock *VAR_6 = FUNC_6(VAR_4);
 struct packet_mclist *VAR_7, *VAR_8;
 struct net_device *VAR_9;
 int VAR_10;

 FUNC_7();

 VAR_10 = -VAR_2;
 VAR_9 = FUNC_0(FUNC_9(VAR_4), VAR_5->mr_ifindex);
 if (!VAR_9)
  goto done;

 VAR_10 = -VAR_0;
 if (VAR_5->mr_alen > VAR_9->addr_len)
  goto done;

 VAR_10 = -VAR_1;
 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_3);
 if (VAR_8 == ((void*)0))
  goto done;

 VAR_10 = 0;
 for (VAR_7 = VAR_6->mclist; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_7->ifindex == VAR_5->mr_ifindex &&
      VAR_7->type == VAR_5->mr_type &&
      VAR_7->alen == VAR_5->mr_alen &&
      FUNC_3(VAR_7->addr, VAR_5->mr_address, VAR_7->alen) == 0) {
   VAR_7->count++;

   FUNC_1(VAR_8);
   goto done;
  }
 }

 VAR_8->type = VAR_5->mr_type;
 VAR_8->ifindex = VAR_5->mr_ifindex;
 VAR_8->alen = VAR_5->mr_alen;
 FUNC_4(VAR_8->addr, VAR_5->mr_address, VAR_8->alen);
 VAR_8->count = 1;
 VAR_8->next = VAR_6->mclist;
 VAR_6->mclist = VAR_8;
 VAR_10 = FUNC_5(VAR_9, VAR_8, 1);
 if (VAR_10) {
  VAR_6->mclist = VAR_8->next;
  FUNC_1(VAR_8);
 }

done:
 FUNC_8();
 return VAR_10;
}
