
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int dummy; } ;
struct rp_port {TYPE_1__* rp_ctlp; int rp_timer; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tty*) ;
 struct rp_port* FUNC_3 (struct tty*) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_0)
{
 struct rp_port *VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 FUNC_0(&VAR_1->rp_timer);
 FUNC_2(VAR_0);
 FUNC_1(VAR_1->rp_ctlp->dev);
}
