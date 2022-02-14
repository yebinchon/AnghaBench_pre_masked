
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_slen; int rq_bytes_sent; size_t rq_iovlen; int rq_flags; struct kvec* rq_iov; struct smb_sb_info* rq_server; } ;
struct msghdr {int msg_flags; } ;
struct kvec {int dummy; } ;
struct TYPE_2__ {scalar_t__ sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct socket*,struct msghdr*,struct kvec*,size_t,int) ;
 struct socket* FUNC_1 (struct smb_sb_info*) ;
 int FUNC_2 (struct kvec**,size_t*,struct kvec*,int) ;

int
FUNC_3(struct smb_request *VAR_5)
{
 struct smb_sb_info *VAR_6 = VAR_5->rq_server;
 struct socket *VAR_7;
 struct msghdr VAR_8 = {.msg_flags = VAR_2 | VAR_1};
        int VAR_9 = VAR_5->rq_slen - VAR_5->rq_bytes_sent;
 int VAR_10 = -VAR_0;
 struct kvec VAR_11[4];
 struct kvec *VAR_12 = VAR_5->rq_iov;
 size_t VAR_13 = VAR_5->rq_iovlen;

 VAR_7 = FUNC_1(VAR_6);
 if (!VAR_7)
  goto out;
 if (VAR_7->sk->sk_state != VAR_4)
  goto out;


 if (VAR_5->rq_bytes_sent)
  FUNC_2(&VAR_12, &VAR_13, VAR_11, VAR_5->rq_bytes_sent);

 VAR_10 = FUNC_0(VAR_7, &VAR_8, VAR_12, VAR_13, VAR_9);

 if (VAR_10 >= 0) {
  VAR_5->rq_bytes_sent += VAR_10;
  if (VAR_5->rq_bytes_sent >= VAR_5->rq_slen)
   VAR_5->rq_flags |= VAR_3;
 }
out:
 return VAR_10;
}
