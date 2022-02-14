
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sscop_param {int timer_cc; int timer_poll; int timer_keep_alive; int timer_no_response; int timer_idle; int maxk; int maxj; int maxcc; int maxpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sscop_param*,int ,int) ;

u_int
FUNC_1(struct sscop_param *VAR_9)
{
 FUNC_0(VAR_9, 0, sizeof(*VAR_9));

 VAR_9->timer_cc = 1000;
 VAR_9->timer_poll = 750;
 VAR_9->timer_keep_alive = 2000;
 VAR_9->timer_no_response = 7000;
 VAR_9->timer_idle = 15000;
 VAR_9->maxk = 4096;
 VAR_9->maxj = 4096;
 VAR_9->maxcc = 4;
 VAR_9->maxpd = 25;

 return (VAR_4 | VAR_8 | VAR_6 |
     VAR_7 | VAR_5 | VAR_2 |
     VAR_1 | VAR_0 | VAR_3);
}
