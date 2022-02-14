
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_socket; } ;
struct smb_sb_info {void (* data_ready ) (struct sock*,int) ;} ;


 int FUNC_0 (char*,struct sock*,int) ;
 struct smb_sb_info* FUNC_1 (int ) ;
 int FUNC_2 () ;

void
FUNC_3(struct sock *VAR_0, int VAR_1)
{
 struct smb_sb_info *VAR_2 = FUNC_1(VAR_0->sk_socket);
 void (*VAR_3)(struct sock *, int) = VAR_2->data_ready;

 VAR_3(VAR_0, VAR_1);
 FUNC_0("(%p, %d)\n", VAR_0, VAR_1);
 FUNC_2();
}
