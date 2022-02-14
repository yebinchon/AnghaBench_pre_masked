
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct rp_port {unsigned int rp_intmask; struct tty* rp_tty; int rp_channel; } ;
typedef int CHANNEL_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct rp_port*,struct tty*,int *,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (struct tty*,int) ;

__attribute__((used)) static void FUNC_4(struct rp_port *VAR_3)
{
 CHANNEL_t *VAR_4;
 struct tty *VAR_5;
 unsigned int VAR_6, VAR_7;

 if(!VAR_3)
  return;

 VAR_4 = &VAR_3->rp_channel;
 VAR_5 = VAR_3->rp_tty;
 VAR_6 = FUNC_1(VAR_4);
 VAR_6 = VAR_6 & VAR_3->rp_intmask;
 VAR_7 = FUNC_2(VAR_4);
 if(VAR_6 & VAR_2)
  FUNC_0(VAR_3, VAR_5, VAR_4, VAR_7);
 if(VAR_6 & VAR_1) {
  if(VAR_7 & VAR_0) {
   (void)FUNC_3(VAR_5, 1);
  } else {
   (void)FUNC_3(VAR_5, 0);
  }
 }






}
