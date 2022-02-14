
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tty {int dummy; } ;
struct rp_port {int rp_aiop; int rp_chan; int rp_restart; int rp_timer; int rp_channel; TYPE_1__* rp_ctlp; struct tty* rp_tty; } ;
struct TYPE_4__ {unsigned char (* ctlmask ) (TYPE_1__*) ;} ;
typedef TYPE_1__ CONTROLLER_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct rp_port*) ;
 int FUNC_2 (struct tty*) ;
 unsigned char FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *) ;
 unsigned char FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct tty*,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_2)
{
 CONTROLLER_t *VAR_3;
 struct rp_port *VAR_4;
 struct tty *VAR_5;
 int VAR_6;
 unsigned char VAR_7, VAR_8;

 VAR_4 = VAR_2;
 VAR_5 = VAR_4->rp_tty;
 FUNC_6(VAR_5, VAR_0);
 VAR_3 = VAR_4->rp_ctlp;
 VAR_7 = VAR_3->ctlmask(VAR_3);
 if (VAR_7 & (1 << VAR_4->rp_aiop)) {
  VAR_8 = FUNC_3(VAR_3, VAR_4->rp_aiop);
  if (VAR_8 & (1 << VAR_4->rp_chan)) {
   FUNC_1(VAR_4);
  }
 }

 VAR_6 = FUNC_4(&VAR_4->rp_channel);
 if (VAR_6 >= 0 && (VAR_6 <= VAR_4->rp_restart)) {
  FUNC_2(VAR_5);
 }
 FUNC_0(&VAR_4->rp_timer, VAR_1);
}
