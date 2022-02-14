
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct TYPE_3__ {int sk_affinity; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(struct socket *VAR_5)
{
 if (VAR_3) {
  FUNC_2(VAR_5->sk, VAR_2);
  FUNC_0(VAR_0, "Socket 0x%p is set with DIRECT_TCP\n", VAR_5->sk);
 }
 if (VAR_4) {
  FUNC_2(VAR_5->sk, VAR_1);
  VAR_5->sk->sk_affinity = FUNC_1();
  FUNC_0(VAR_0, "Socket 0x%p is set with RCS\n", VAR_5->sk);
 }
}
