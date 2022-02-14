
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpcb {int unp_gcflag; } ;
struct TYPE_2__ {int sb_mb; } ;
struct socket {TYPE_1__ so_rcv; } ;


 int FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct unpcb* FUNC_3 (struct socket*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct socket *VAR_1)
{
 struct unpcb *VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 FUNC_1();
 VAR_2->unp_gcflag |= VAR_0;
 FUNC_2();
 if (!FUNC_0(VAR_1))
  FUNC_4(VAR_1->so_rcv.sb_mb);
}
