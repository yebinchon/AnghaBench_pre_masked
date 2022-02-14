
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_type; } ;
struct nlmsgerr {int error; } ;
struct TYPE_6__ {int cache_resolve_queue_len; } ;
struct net {TYPE_1__ ipv6; } ;
struct TYPE_7__ {int unresolved; } ;
struct TYPE_8__ {TYPE_2__ unres; } ;
struct mfc6_cache {TYPE_3__ mfc_un; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_10__ {int pid; } ;
struct TYPE_9__ {scalar_t__ version; } ;


 int VAR_0 ;
 TYPE_5__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct nlmsghdr*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mfc6_cache*) ;
 TYPE_4__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct net* FUNC_7 (struct mfc6_cache*) ;
 int FUNC_8 (struct sk_buff*,struct net*,int ) ;
 struct sk_buff* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_12(struct mfc6_cache *VAR_2)
{
 struct sk_buff *VAR_3;
 struct net *VAR_4 = FUNC_7(VAR_2);

 FUNC_3(&VAR_4->ipv6.cache_resolve_queue_len);

 while((VAR_3 = FUNC_9(&VAR_2->mfc_un.unres.unresolved)) != ((void*)0)) {
  if (FUNC_5(VAR_3)->version == 0) {
   struct nlmsghdr *VAR_5 = (struct nlmsghdr *)FUNC_10(VAR_3, sizeof(struct ipv6hdr));
   VAR_5->nlmsg_type = VAR_1;
   VAR_5->nlmsg_len = FUNC_2(sizeof(struct nlmsgerr));
   FUNC_11(VAR_3, VAR_5->nlmsg_len);
   ((struct nlmsgerr *)FUNC_1(VAR_5))->error = -VAR_0;
   FUNC_8(VAR_3, VAR_4, FUNC_0(VAR_3).pid);
  } else
   FUNC_6(VAR_3);
 }

 FUNC_4(VAR_2);
}
