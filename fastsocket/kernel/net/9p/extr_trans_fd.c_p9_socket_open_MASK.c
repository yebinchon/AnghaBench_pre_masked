
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* sk; } ;
struct p9_trans_fd {TYPE_1__* rd; } ;
struct p9_client {scalar_t__ trans; } ;
struct TYPE_4__ {int sk_allocation; } ;
struct TYPE_3__ {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct p9_client*,int,int) ;
 int FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (struct socket*) ;

__attribute__((used)) static int FUNC_4(struct p9_client *VAR_3, struct socket *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_4->sk->sk_allocation = VAR_0;
 VAR_5 = FUNC_2(VAR_4, 0);
 if (VAR_5 < 0) {
  FUNC_0(VAR_1, "p9_socket_open: failed to map fd\n");
  return VAR_5;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_5, VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_1, "p9_socket_open: failed to open fd\n");
  FUNC_3(VAR_4);
  return VAR_6;
 }

 ((struct p9_trans_fd *)VAR_3->trans)->rd->f_flags |= VAR_2;

 return 0;
}
