
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct smb_sb_info {int smb_read; scalar_t__ smb_len; int rstate; int header; } ;
struct msghdr {unsigned int msg_flags; int * msg_control; scalar_t__ msg_namelen; int * msg_name; } ;
struct kvec {int iov_len; int iov_base; } ;
struct TYPE_2__ {scalar_t__ sk_state; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int) ;
 int VAR_6 ;
 int FUNC_1 (struct socket*,struct msghdr*,struct kvec*,int,int,unsigned int) ;
 struct socket* FUNC_2 (struct smb_sb_info*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct smb_sb_info *VAR_7)
{
 struct socket *VAR_8;
 unsigned int VAR_9;
 struct kvec VAR_10;
 struct msghdr VAR_11;
 int VAR_12 = FUNC_3(VAR_7->header) - VAR_7->smb_read + 4;
 int VAR_13 = -VAR_0;

 if (VAR_12 > VAR_3)
  VAR_12 = VAR_3;

 VAR_8 = FUNC_2(VAR_7);
 if (!VAR_8)
  goto out;
 if (VAR_8->sk->sk_state != VAR_5)
  goto out;

 VAR_9 = VAR_1 | VAR_2;
 VAR_10.iov_base = VAR_6;
 VAR_10.iov_len = VAR_3;
 VAR_11.msg_flags = VAR_9;
 VAR_11.msg_name = ((void*)0);
 VAR_11.msg_namelen = 0;
 VAR_11.msg_control = ((void*)0);

 VAR_13 = FUNC_1(VAR_8, &VAR_11, &VAR_10, 1, VAR_12, VAR_9);

 FUNC_0("read: %d\n", VAR_13);
 if (VAR_13 < 0) {
  FUNC_0("receive error: %d\n", VAR_13);
  goto out;
 }
 VAR_7->smb_read += VAR_13;

 if (VAR_7->smb_read >= VAR_7->smb_len)
  VAR_7->rstate = VAR_4;

out:
 return VAR_13;
}
