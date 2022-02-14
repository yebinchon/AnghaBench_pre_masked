
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_sndbuf; int sk_shutdown; int sk_sleep; scalar_t__ sk_err; int sk_wmem_alloc; TYPE_1__* sk_socket; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 long FUNC_5 (long) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_5 ;

__attribute__((used)) static long FUNC_8(struct sock *VAR_6, long VAR_7)
{
 FUNC_0(VAR_5);

 FUNC_2(VAR_1, &VAR_6->sk_socket->flags);
 for (;;) {
  if (!VAR_7)
   break;
  if (FUNC_7(VAR_4))
   break;
  FUNC_6(VAR_2, &VAR_6->sk_socket->flags);
  FUNC_4(VAR_6->sk_sleep, &VAR_5, VAR_3);
  if (FUNC_1(&VAR_6->sk_wmem_alloc) < VAR_6->sk_sndbuf)
   break;
  if (VAR_6->sk_shutdown & VAR_0)
   break;
  if (VAR_6->sk_err)
   break;
  VAR_7 = FUNC_5(VAR_7);
 }
 FUNC_3(VAR_6->sk_sleep, &VAR_5);
 return VAR_7;
}
