
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct smb_sb_info {scalar_t__ smb_read; int smb_len; scalar_t__ header; void* rstate; } ;
struct TYPE_2__ {scalar_t__ sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct socket*,scalar_t__,scalar_t__,int ) ;
 struct socket* FUNC_3 (struct smb_sb_info*) ;
 int FUNC_4 (struct socket*,unsigned char*) ;

int
FUNC_5(struct smb_sb_info *VAR_7)
{
 struct socket *VAR_8;
 int VAR_9 = 0;
 unsigned char VAR_10[4];

 VAR_9 = -VAR_0;
 VAR_8 = FUNC_3(VAR_7);
 if (!VAR_8)
  goto out;
 if (VAR_8->sk->sk_state != VAR_6)
  goto out;

 if (!VAR_7->smb_read) {
  VAR_9 = FUNC_4(VAR_8, VAR_10);
  if (VAR_9 < 0) {
   if (VAR_9 == -VAR_1)
    VAR_9 = 0;
   goto out;
  }
  VAR_7->smb_len = VAR_9 + 4;

  if (VAR_7->smb_len < VAR_2) {
   FUNC_0("short packet: %d\n", VAR_9);
   VAR_7->rstate = VAR_4;
   VAR_9 = -VAR_0;
   goto out;
  }
  if (VAR_7->smb_len > VAR_3) {
   FUNC_0("long packet: %d\n", VAR_9);
   VAR_7->rstate = VAR_4;
   VAR_9 = -VAR_0;
   goto out;
  }
 }

 VAR_9 = FUNC_2(VAR_8, VAR_7->header + VAR_7->smb_read,
      VAR_2 - VAR_7->smb_read, 0);
 FUNC_1("_recvfrom: %d\n", VAR_9);
 if (VAR_9 < 0) {
  FUNC_1("receive error: %d\n", VAR_9);
  goto out;
 }
 VAR_7->smb_read += VAR_9;

 if (VAR_7->smb_read == VAR_2)
  VAR_7->rstate = VAR_5;
out:
 return VAR_9;
}
