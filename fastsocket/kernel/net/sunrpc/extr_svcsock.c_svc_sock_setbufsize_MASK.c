
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
typedef int snd ;
typedef int rcv ;
typedef int mm_segment_t ;
struct TYPE_4__ {unsigned int sk_sndbuf; unsigned int sk_rcvbuf; int (* sk_write_space ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct socket*,int ,int ,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct socket *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6)
{
 FUNC_1(VAR_4->sk);
 VAR_4->sk->sk_sndbuf = VAR_5 * 2;
 VAR_4->sk->sk_rcvbuf = VAR_6 * 2;
 VAR_4->sk->sk_write_space(VAR_4->sk);
 FUNC_2(VAR_4->sk);

}
