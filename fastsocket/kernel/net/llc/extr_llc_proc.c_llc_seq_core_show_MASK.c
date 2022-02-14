
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int tail; } ;
struct sock {TYPE_6__ sk_backlog; } ;
struct seq_file {int dummy; } ;
struct TYPE_11__ {int timer; } ;
struct TYPE_10__ {int timer; } ;
struct TYPE_9__ {int timer; } ;
struct TYPE_8__ {int timer; } ;
struct TYPE_7__ {int lsap; } ;
struct llc_sock {size_t state; TYPE_5__ busy_state_timer; TYPE_4__ rej_sent_timer; TYPE_3__ pf_cycle_timer; TYPE_2__ ack_timer; int cause_flag; int remote_busy_flag; int data_flag; int s_flag; int f_flag; int p_flag; int rw; int k; int retry_count; TYPE_1__ daddr; } ;


 void* VAR_0 ;
 int * VAR_1 ;
 struct llc_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_2, void *VAR_3)
{
 struct sock* VAR_4;
 struct llc_sock *VAR_5;

 if (VAR_3 == VAR_0) {
  FUNC_2(VAR_2, "Connection list:\n"
         "dsap state      retr txw rxw pf ff sf df rs cs "
         "tack tpfc trs tbs blog busr\n");
  goto out;
 }
 VAR_4 = VAR_3;
 VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_2, " %02X  %-10s %3d  %3d %3d %2d %2d %2d %2d %2d %2d "
   "%4d %4d %3d %3d %4d %4d\n",
     VAR_5->daddr.lsap, VAR_1[VAR_5->state],
     VAR_5->retry_count, VAR_5->k, VAR_5->rw, VAR_5->p_flag, VAR_5->f_flag,
     VAR_5->s_flag, VAR_5->data_flag, VAR_5->remote_busy_flag,
     VAR_5->cause_flag, FUNC_4(&VAR_5->ack_timer.timer),
     FUNC_4(&VAR_5->pf_cycle_timer.timer),
     FUNC_4(&VAR_5->rej_sent_timer.timer),
     FUNC_4(&VAR_5->busy_state_timer.timer),
     !!VAR_4->sk_backlog.tail, !!FUNC_3(VAR_4));
out:
 return 0;
}
