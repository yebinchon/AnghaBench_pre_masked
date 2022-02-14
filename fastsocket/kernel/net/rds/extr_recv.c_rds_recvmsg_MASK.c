
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_8__ {int s_addr; } ;
struct sockaddr_in {int sin_zero; TYPE_4__ sin_addr; int sin_port; int sin_family; } ;
struct sock {int * sk_sleep; } ;
struct rds_sock {scalar_t__ rs_cong_notify; int rs_notify_queue; } ;
struct TYPE_7__ {int h_sport; int h_len; } ;
struct rds_incoming {int i_saddr; TYPE_3__ i_hdr; TYPE_2__* i_conn; } ;
struct msghdr {int msg_namelen; int msg_flags; scalar_t__ msg_name; int msg_iov; } ;
struct kiocb {int dummy; } ;
struct TYPE_6__ {TYPE_1__* c_trans; int c_faddr; } ;
struct TYPE_5__ {int (* inc_copy_to_user ) (struct rds_incoming*,int ,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct rds_incoming*,struct msghdr*) ;
 int FUNC_5 (struct rds_incoming*) ;
 scalar_t__ FUNC_6 (struct rds_sock*,struct rds_incoming**) ;
 int FUNC_7 (struct rds_sock*,struct msghdr*) ;
 int FUNC_8 (struct rds_sock*,struct msghdr*) ;
 struct rds_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct rds_sock*,struct rds_incoming*,int) ;
 int FUNC_12 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 long FUNC_13 (struct sock*,int) ;
 int FUNC_14 (struct rds_incoming*,int ,size_t) ;
 long FUNC_15 (int ,int,long) ;

int FUNC_16(struct kiocb *VAR_11, struct socket *VAR_12, struct msghdr *VAR_13,
  size_t VAR_14, int VAR_15)
{
 struct sock *VAR_16 = VAR_12->sk;
 struct rds_sock *VAR_17 = FUNC_9(VAR_16);
 long VAR_18;
 int VAR_19 = 0, VAR_20 = VAR_15 & VAR_5;
 struct sockaddr_in *VAR_21;
 struct rds_incoming *VAR_22 = ((void*)0);


 VAR_18 = FUNC_13(VAR_16, VAR_20);

 FUNC_12("size %zu flags 0x%x timeo %ld\n", VAR_14, VAR_15, VAR_18);

 VAR_13->msg_namelen = 0;

 if (VAR_15 & VAR_6)
  goto out;

 while (1) {

  if (!FUNC_1(&VAR_17->rs_notify_queue)) {
   VAR_19 = FUNC_8(VAR_17, VAR_13);
   break;
  }

  if (VAR_17->rs_cong_notify) {
   VAR_19 = FUNC_7(VAR_17, VAR_13);
   break;
  }

  if (!FUNC_6(VAR_17, &VAR_22)) {
   if (VAR_20) {
    VAR_19 = -VAR_1;
    break;
   }

   VAR_18 = FUNC_15(*VAR_16->sk_sleep,
      (!FUNC_1(&VAR_17->rs_notify_queue)
      || VAR_17->rs_cong_notify
      || FUNC_6(VAR_17, &VAR_22)),
      VAR_18);
   FUNC_12("recvmsg woke inc %p timeo %ld\n", VAR_22,
     VAR_18);
   if (VAR_18 > 0 || VAR_18 == VAR_4)
    continue;

   VAR_19 = VAR_18;
   if (VAR_19 == 0)
    VAR_19 = -VAR_3;
   break;
  }

  FUNC_12("copying inc %p from %pI4:%u to user\n", VAR_22,
    &VAR_22->i_conn->c_faddr,
    FUNC_3(VAR_22->i_hdr.h_sport));
  VAR_19 = VAR_22->i_conn->c_trans->inc_copy_to_user(VAR_22, VAR_13->msg_iov,
            VAR_14);
  if (VAR_19 < 0)
   break;






  if (!FUNC_11(VAR_17, VAR_22, !(VAR_15 & VAR_7))) {
   FUNC_5(VAR_22);
   VAR_22 = ((void*)0);
   FUNC_10(VAR_9);
   continue;
  }

  if (VAR_19 < FUNC_0(VAR_22->i_hdr.h_len)) {
   if (VAR_15 & VAR_8)
    VAR_19 = FUNC_0(VAR_22->i_hdr.h_len);
   VAR_13->msg_flags |= VAR_8;
  }

  if (FUNC_4(VAR_22, VAR_13)) {
   VAR_19 = -VAR_2;
   goto out;
  }

  FUNC_10(VAR_10);

  VAR_21 = (struct sockaddr_in *)VAR_13->msg_name;
  if (VAR_21) {
   VAR_21->sin_family = VAR_0;
   VAR_21->sin_port = VAR_22->i_hdr.h_sport;
   VAR_21->sin_addr.s_addr = VAR_22->i_saddr;
   FUNC_2(VAR_21->sin_zero, 0, sizeof(VAR_21->sin_zero));
   VAR_13->msg_namelen = sizeof(*VAR_21);
  }
  break;
 }

 if (VAR_22)
  FUNC_5(VAR_22);

out:
 return VAR_19;
}
