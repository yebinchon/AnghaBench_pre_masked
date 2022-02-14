
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct smb_sb_info {int dummy; } ;
struct TYPE_2__ {struct smb_sb_info* sk_user_data; } ;



__attribute__((used)) static struct smb_sb_info *
FUNC_0(struct socket *VAR_0)
{
 return VAR_0->sk->sk_user_data;
}
