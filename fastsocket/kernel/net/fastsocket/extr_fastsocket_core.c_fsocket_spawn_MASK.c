
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {TYPE_2__* ops; TYPE_4__* sk; } ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct file {scalar_t__ private_data; int sub_file; } ;
typedef int kernel_cap_t ;
typedef int addr ;
struct TYPE_8__ {scalar_t__ sk_state; int sk_max_ack_backlog; } ;
struct TYPE_7__ {int saddr; int sport; } ;
struct TYPE_6__ {int (* bind ) (struct socket*,struct sockaddr*,int) ;int (* listen ) (struct socket*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (struct socket*,int) ;
 int FUNC_10 (int,struct socket*,struct socket**) ;
 TYPE_3__* FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct socket*,struct sockaddr*,int) ;
 int FUNC_15 (struct socket*,int) ;

int FUNC_16(struct file *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11 = 0, VAR_12;
 int VAR_13;
 struct socket *VAR_14, *VAR_15;
 struct sockaddr_in VAR_16;
 kernel_cap_t VAR_17;

 FUNC_0(VAR_5, "Listen spawn listen fd %d on CPU %d. filp->sub_file(%p)\n", VAR_9, VAR_10, VAR_8->sub_file);

 FUNC_12(&VAR_7);

 if (VAR_8->sub_file) {
  FUNC_1(VAR_4, "Spawn on a already spawned file 0x%p\n", VAR_8);
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_14 = (struct socket *)VAR_8->private_data;

 if (VAR_14->sk->sk_state != VAR_6) {
  FUNC_1(VAR_4, "Spawn on a non-listen socket[%d-%d] file 0x%p\n", VAR_9, VAR_14->sk->sk_state, VAR_8);
  VAR_11 = -VAR_3;
  goto out;
 }

 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11 < 0) {
  FUNC_1(VAR_4, "Set CPU affinity for process failed\n");
  goto out;
 }

 VAR_13 = VAR_11;
 VAR_15 = ((void*)0);
 VAR_11 = FUNC_10(VAR_9, VAR_14, &VAR_15);
 if (VAR_11 < 0) {
  FUNC_1(VAR_4, "Clone listen socket failed[%d]\n", VAR_11);
  goto restore;
 }

 FUNC_9(VAR_15, VAR_13);

 FUNC_7(&VAR_17);

 VAR_16.sin_family = VAR_0;
 VAR_16.sin_port = FUNC_11(VAR_14->sk)->sport;
 VAR_16.sin_addr.s_addr = FUNC_11(VAR_14->sk)->saddr;

 VAR_11 = VAR_15->ops->bind(VAR_15, (struct sockaddr *)&VAR_16, sizeof(VAR_16));
 if (VAR_11 < 0)
 {
  FUNC_1(VAR_4, "Bind spawned socket %d failed[%d]\n", VAR_9, VAR_11);
  goto release;
 }

 FUNC_6(&VAR_17);

 VAR_12 = VAR_14->sk->sk_max_ack_backlog;

 VAR_11 = VAR_15->ops->listen(VAR_15, VAR_12);
 if (VAR_11 < 0)
 {
  FUNC_1(VAR_4, "Listen spawned socket %d failed[%d]\n", VAR_9, VAR_11);
  goto release;
 }

 FUNC_5(VAR_13);

 goto out;

release:
 FUNC_8(VAR_15);
 FUNC_2(VAR_9);
restore:
 FUNC_4(VAR_13);
out:
 FUNC_13(&VAR_7);

 FUNC_0(VAR_1, "fsocket_spawn return value is %d\n", VAR_11);

 return VAR_11;
}
