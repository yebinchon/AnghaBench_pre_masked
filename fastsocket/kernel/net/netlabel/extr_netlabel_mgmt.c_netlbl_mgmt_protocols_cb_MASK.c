
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; int skb; } ;
struct TYPE_4__ {int pid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5,
        struct netlink_callback *VAR_6,
        u32 VAR_7)
{
 int VAR_8 = -VAR_0;
 void *VAR_9;

 VAR_9 = FUNC_3(VAR_5, FUNC_0(VAR_6->skb).pid, VAR_6->nlh->nlmsg_seq,
      &VAR_4, VAR_3,
      VAR_2);
 if (VAR_9 == ((void*)0))
  goto protocols_cb_failure;

 VAR_8 = FUNC_4(VAR_5, VAR_1, VAR_7);
 if (VAR_8 != 0)
  goto protocols_cb_failure;

 return FUNC_2(VAR_5, VAR_9);

protocols_cb_failure:
 FUNC_1(VAR_5, VAR_9);
 return VAR_8;
}
