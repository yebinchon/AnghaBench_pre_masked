
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vport_parms {int port_no; void* upcall_pid; struct datapath* dp; struct nlattr* options; void* type; int name; } ;
struct vport {int sk; } ;
struct sk_buff {int sk; } ;
struct ovs_header {int dp_ifindex; } ;
struct nlattr {int dummy; } ;
struct genl_info {int snd_seq; int snd_pid; struct ovs_header* userhdr; struct nlattr** attrs; } ;
struct datapath {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct vport*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct vport*) ;
 struct datapath* FUNC_2 (int ,int ) ;
 struct vport* FUNC_3 (struct vport_parms*) ;
 int FUNC_4 (struct nlattr*) ;
 void* FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct vport*) ;
 int VAR_11 ;
 int FUNC_7 () ;
 int FUNC_8 (struct vport*,struct genl_info*,int *) ;
 int FUNC_9 () ;
 struct vport* FUNC_10 (struct vport*,int ,int ,int ) ;
 struct vport* FUNC_11 (struct datapath*,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_12, struct genl_info *VAR_13)
{
 struct nlattr **VAR_14 = VAR_13->attrs;
 struct ovs_header *VAR_15 = VAR_13->userhdr;
 struct vport_parms VAR_16;
 struct sk_buff *VAR_17;
 struct vport *VAR_18;
 struct datapath *VAR_19;
 u32 VAR_20;
 int VAR_21;

 VAR_21 = -VAR_3;
 if (!VAR_14[VAR_5] || !VAR_14[VAR_8] ||
     !VAR_14[VAR_9])
  goto exit;

 FUNC_7();
 VAR_19 = FUNC_2(FUNC_12(VAR_12->sk), VAR_15->dp_ifindex);
 VAR_21 = -VAR_4;
 if (!VAR_19)
  goto exit_unlock;

 if (VAR_14[VAR_7]) {
  VAR_20 = FUNC_5(VAR_14[VAR_7]);

  VAR_21 = -VAR_2;
  if (VAR_20 >= VAR_0)
   goto exit_unlock;

  VAR_18 = FUNC_11(VAR_19, VAR_20);
  VAR_21 = -VAR_1;
  if (VAR_18)
   goto exit_unlock;
 } else {
  for (VAR_20 = 1; ; VAR_20++) {
   if (VAR_20 >= VAR_0) {
    VAR_21 = -VAR_2;
    goto exit_unlock;
   }
   VAR_18 = FUNC_11(VAR_19, VAR_20);
   if (!VAR_18)
    break;
  }
 }

 VAR_16.name = FUNC_4(VAR_14[VAR_5]);
 VAR_16.type = FUNC_5(VAR_14[VAR_8]);
 VAR_16.options = VAR_14[VAR_6];
 VAR_16.dp = VAR_19;
 VAR_16.port_no = VAR_20;
 VAR_16.upcall_pid = FUNC_5(VAR_14[VAR_9]);

 VAR_18 = FUNC_3(&VAR_16);
 VAR_21 = FUNC_1(VAR_18);
 if (FUNC_0(VAR_18))
  goto exit_unlock;

 VAR_21 = 0;
 VAR_17 = FUNC_10(VAR_18, VAR_13->snd_pid, VAR_13->snd_seq,
      VAR_10);
 if (FUNC_0(VAR_17)) {
  VAR_21 = FUNC_1(VAR_17);
  FUNC_6(VAR_18);
  goto exit_unlock;
 }

 FUNC_8(VAR_17, VAR_13, &VAR_11);

exit_unlock:
 FUNC_9();
exit:
 return VAR_21;
}
