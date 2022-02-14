
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vport {int upcall_pid; TYPE_1__* ops; int port_no; int dp; } ;
struct sk_buff {int dummy; } ;
struct ovs_vport_stats {int dummy; } ;
struct ovs_header {int dp_ifindex; } ;
struct TYPE_2__ {int (* get_name ) (struct vport*) ;int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,struct ovs_header*) ;
 int FUNC_1 (struct sk_buff*,struct ovs_header*) ;
 struct ovs_header* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,struct ovs_vport_stats*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct vport*,struct sk_buff*) ;
 int FUNC_8 (struct vport*,struct ovs_vport_stats*) ;
 int FUNC_9 (struct vport*) ;

__attribute__((used)) static int FUNC_10(struct vport *VAR_7, struct sk_buff *VAR_8,
       u32 VAR_9, u32 VAR_10, u32 VAR_11, u8 VAR_12)
{
 struct ovs_header *VAR_13;
 struct ovs_vport_stats VAR_14;
 int VAR_15;

 VAR_13 = FUNC_2(VAR_8, VAR_9, VAR_10, &VAR_6,
     VAR_11, VAR_12);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->dp_ifindex = FUNC_3(VAR_7->dp);

 if (FUNC_6(VAR_8, VAR_2, VAR_7->port_no) ||
     FUNC_6(VAR_8, VAR_4, VAR_7->ops->type) ||
     FUNC_5(VAR_8, VAR_1, VAR_7->ops->get_name(VAR_7)) ||
     FUNC_6(VAR_8, VAR_5, VAR_7->upcall_pid))
  goto nla_put_failure;

 FUNC_8(VAR_7, &VAR_14);
 if (FUNC_4(VAR_8, VAR_3, sizeof(struct ovs_vport_stats),
      &VAR_14))
  goto nla_put_failure;

 VAR_15 = FUNC_7(VAR_7, VAR_8);
 if (VAR_15 == -VAR_0)
  goto error;

 return FUNC_1(VAR_8, VAR_13);

nla_put_failure:
 VAR_15 = -VAR_0;
error:
 FUNC_0(VAR_8, VAR_13);
 return VAR_15;
}
