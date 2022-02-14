
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; } ;
struct TYPE_5__ {scalar_t__ mpc_p6; int mpc_p5; int mpc_p4; } ;
struct mpoa_client {int ingress_lock; int mps_ctrl_addr; TYPE_1__ parameters; TYPE_4__* in_cache; } ;
struct TYPE_7__ {int in_dst_ip; } ;
struct TYPE_6__ {TYPE_3__ in_info; } ;
struct k_message {int qos; TYPE_2__ content; int MPS_ctrl; int type; } ;
struct atm_mpoa_qos {int qos; } ;
struct TYPE_8__ {scalar_t__ entry_state; scalar_t__ retry_time; struct TYPE_8__* next; struct timeval reply_wait; TYPE_3__ ctrl_info; struct timeval hold_down; } ;
typedef TYPE_4__ in_cache_entry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct atm_mpoa_qos* FUNC_0 (int ) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct timeval*,int ,int) ;
 int FUNC_4 (struct k_message*,struct mpoa_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct mpoa_client *VAR_4)
{

 struct atm_mpoa_qos *VAR_5;
 in_cache_entry *VAR_6;
 struct timeval VAR_7;
 struct k_message VAR_8;

 FUNC_1( &VAR_7 );

 FUNC_5(&VAR_4->ingress_lock);
 VAR_6 = VAR_4->in_cache;
 while( VAR_6 != ((void*)0) ){
  if(VAR_6->entry_state == VAR_1){
   if(VAR_7.tv_sec - VAR_6->hold_down.tv_sec < VAR_4->parameters.mpc_p6){
    VAR_6 = VAR_6->next;
    continue;
   }
   if( (VAR_7.tv_sec - VAR_6->reply_wait.tv_sec) >
       VAR_6->retry_time ){
    VAR_6->retry_time = VAR_2*( VAR_6->retry_time );
    if(VAR_6->retry_time > VAR_4->parameters.mpc_p5){

     FUNC_1(&(VAR_6->hold_down));
     VAR_6->retry_time = VAR_4->parameters.mpc_p4;
     VAR_6 = VAR_6->next;
     continue;
    }

    FUNC_3(&(VAR_6->hold_down),0,sizeof(struct timeval));
    VAR_8.type = VAR_3;
    FUNC_2(VAR_8.MPS_ctrl, VAR_4->mps_ctrl_addr, VAR_0);
    VAR_8.content.in_info = VAR_6->ctrl_info;
    VAR_5 = FUNC_0(VAR_6->ctrl_info.in_dst_ip);
    if (VAR_5 != ((void*)0)) VAR_8.qos = VAR_5->qos;
    FUNC_4(&VAR_8, VAR_4);
    FUNC_1(&(VAR_6->reply_wait));
   }
  }
  VAR_6 = VAR_6->next;
 }
 FUNC_6(&VAR_4->ingress_lock);
}
