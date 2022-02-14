
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int sk_sleep; int sk_write_queue; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct net_device {int mc_count; int flags; int* broadcast; struct dev_mc_list* mc_list; int name; } ;
struct dev_mc_list {int* dmi_addr; struct dev_mc_list* next; } ;
struct bnep_set_filter_req {void* len; int ctrl; int type; } ;
struct bnep_session {TYPE_1__* sock; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,int*,int) ;
 struct bnep_session* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_8)
{
}
