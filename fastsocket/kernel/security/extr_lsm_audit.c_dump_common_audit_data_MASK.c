
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct unix_sock {TYPE_6__* addr; int mnt; struct dentry* dentry; } ;
struct task_struct {char* comm; scalar_t__ pid; } ;
struct sock {int sk_family; } ;
struct path {int mnt; struct dentry* dentry; } ;
struct net_device {int name; } ;
struct ipv6_pinfo {int daddr; int rcv_saddr; } ;
struct inode {int i_ino; TYPE_4__* i_sb; } ;
struct inet_sock {int dport; int sport; int daddr; int rcv_saddr; } ;
struct TYPE_14__ {char* name; } ;
struct dentry {TYPE_3__ d_name; struct inode* d_inode; } ;
struct TYPE_12__ {char* key_desc; int key; } ;
struct TYPE_19__ {int daddr; int saddr; } ;
struct TYPE_18__ {int daddr; int saddr; } ;
struct TYPE_20__ {int netif; int dport; TYPE_8__ v6info; int sport; TYPE_7__ v4info; int family; struct sock* sk; } ;
struct TYPE_13__ {struct inode* inode; struct path path; } ;
struct TYPE_11__ {char* kmod_name; TYPE_1__ key_struct; TYPE_9__ net; struct task_struct* tsk; TYPE_2__ fs; int cap; int ipc_id; } ;
struct common_audit_data {int type; TYPE_10__ u; struct task_struct* tsk; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_17__ {TYPE_5__* name; int len; } ;
struct TYPE_16__ {char* sun_path; } ;
struct TYPE_15__ {int s_id; } ;
 int FUNC_0 (struct audit_buffer*,char*,struct path*) ;
 int FUNC_1 (struct audit_buffer*,char*,...) ;
 int FUNC_2 (struct audit_buffer*,char*,int) ;
 int FUNC_3 (struct audit_buffer*,char*) ;
 struct task_struct* VAR_0 ;
 struct dentry* FUNC_4 (struct inode*) ;
 struct net_device* FUNC_5 (int *,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct dentry*) ;
 struct ipv6_pinfo* FUNC_8 (struct sock*) ;
 struct inet_sock* FUNC_9 (struct sock*) ;
 int VAR_1 ;
 int FUNC_10 (struct audit_buffer*,int ,int ,char*,char*) ;
 int FUNC_11 (struct audit_buffer*,int *,int ,char*,char*) ;
 struct unix_sock* FUNC_12 (struct sock*) ;

__attribute__((used)) static void FUNC_13(struct audit_buffer *VAR_2,
       struct common_audit_data *VAR_3)
{
 struct inode *VAR_4 = ((void*)0);
 struct task_struct *VAR_5 = VAR_0;

 if (VAR_3->tsk)
  VAR_5 = VAR_3->tsk;
 if (VAR_5 && VAR_5->pid) {
  FUNC_1(VAR_2, " pid=%d comm=", VAR_5->pid);
  FUNC_3(VAR_2, VAR_5->comm);
 }

 switch (VAR_3->type) {
 case 128:
  return;
 case 133:
  FUNC_1(VAR_2, " key=%d ", VAR_3->u.ipc_id);
  break;
 case 135:
  FUNC_1(VAR_2, " capability=%d ", VAR_3->u.cap);
  break;
 case 134:
  if (VAR_3->u.fs.path.dentry) {
   struct dentry *VAR_6 = VAR_3->u.fs.path.dentry;
   if (VAR_3->u.fs.path.mnt) {
    FUNC_0(VAR_2, "path=", &VAR_3->u.fs.path);
   } else {
    FUNC_1(VAR_2, " name=");
    FUNC_3(VAR_2,
       VAR_6->d_name.name);
   }
   VAR_4 = VAR_6->d_inode;
  } else if (VAR_3->u.fs.inode) {
   struct dentry *VAR_7;
   VAR_4 = VAR_3->u.fs.inode;
   VAR_7 = FUNC_4(VAR_4);
   if (VAR_7) {
    FUNC_1(VAR_2, " name=");
    FUNC_3(VAR_2,
       VAR_7->d_name.name);
    FUNC_7(VAR_7);
   }
  }
  if (VAR_4)
   FUNC_1(VAR_2, " dev=%s ino=%lu",
     VAR_4->i_sb->s_id,
     VAR_4->i_ino);
  break;
 case 129:
  VAR_5 = VAR_3->u.tsk;
  if (VAR_5 && VAR_5->pid) {
   FUNC_1(VAR_2, " pid=%d comm=", VAR_5->pid);
   FUNC_3(VAR_2, VAR_5->comm);
  }
  break;
 case 130:
  if (VAR_3->u.net.sk) {
   struct sock *VAR_8 = VAR_3->u.net.sk;
   struct unix_sock *VAR_9;
   int VAR_10 = 0;
   char *VAR_11 = ((void*)0);

   switch (VAR_8->sk_family) {
   case 138: {
    struct inet_sock *VAR_12 = FUNC_9(VAR_8);

    FUNC_10(VAR_2, VAR_12->rcv_saddr,
      VAR_12->sport,
      "laddr", "lport");
    FUNC_10(VAR_2, VAR_12->daddr,
      VAR_12->dport,
      "faddr", "fport");
    break;
   }
   case 137: {
    struct inet_sock *VAR_13 = FUNC_9(VAR_8);
    struct ipv6_pinfo *VAR_14 = FUNC_8(VAR_8);

    FUNC_11(VAR_2, &VAR_14->rcv_saddr,
      VAR_13->sport,
      "laddr", "lport");
    FUNC_11(VAR_2, &VAR_14->daddr,
      VAR_13->dport,
      "faddr", "fport");
    break;
   }
   case 136:
    VAR_9 = FUNC_12(VAR_8);
    if (VAR_9->dentry) {
     struct path VAR_15 = {
      .dentry = VAR_9->dentry,
      .mnt = VAR_9->mnt
     };
     FUNC_0(VAR_2, "path=", &VAR_15);
     break;
    }
    if (!VAR_9->addr)
     break;
    VAR_10 = VAR_9->addr->len-sizeof(short);
    VAR_11 = &VAR_9->addr->name->sun_path[0];
    FUNC_1(VAR_2, " path=");
    if (*VAR_11)
     FUNC_3(VAR_2, VAR_11);
    else
     FUNC_2(VAR_2, VAR_11, VAR_10);
    break;
   }
  }

  switch (VAR_3->u.net.family) {
  case 138:
   FUNC_10(VAR_2, VAR_3->u.net.v4info.saddr,
     VAR_3->u.net.sport,
     "saddr", "src");
   FUNC_10(VAR_2, VAR_3->u.net.v4info.daddr,
     VAR_3->u.net.dport,
     "daddr", "dest");
   break;
  case 137:
   FUNC_11(VAR_2, &VAR_3->u.net.v6info.saddr,
     VAR_3->u.net.sport,
     "saddr", "src");
   FUNC_11(VAR_2, &VAR_3->u.net.v6info.daddr,
     VAR_3->u.net.dport,
     "daddr", "dest");
   break;
  }
  if (VAR_3->u.net.netif > 0) {
   struct net_device *VAR_16;


   VAR_16 = FUNC_5(&VAR_1, VAR_3->u.net.netif);
   if (VAR_16) {
    FUNC_1(VAR_2, " netif=%s", VAR_16->name);
    FUNC_6(VAR_16);
   }
  }
  break;
 case 131:
  FUNC_1(VAR_2, " kmod=");
  FUNC_3(VAR_2, VAR_3->u.kmod_name);
  break;
 }
}
