
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int thread_bp_death_addr; int thread_bp_create_addr; } ;
typedef TYPE_2__ td_thragent_t ;
struct TYPE_6__ {int bptaddr; } ;
struct TYPE_8__ {TYPE_1__ u; void* type; } ;
typedef TYPE_3__ td_notify_t ;
typedef int td_event_e ;
typedef int td_err_e ;


 void* VAR_0 ;
 int FUNC_0 () ;


 int VAR_1 ;

__attribute__((used)) static td_err_e
FUNC_1(const td_thragent_t *VAR_2, td_event_e VAR_3, td_notify_t *VAR_4)
{

 FUNC_0();

 switch (VAR_3) {
 case 129:
  VAR_4->type = VAR_0;
  VAR_4->u.bptaddr = VAR_2->thread_bp_create_addr;
  return (0);
 case 128:
  VAR_4->type = VAR_0;
  VAR_4->u.bptaddr = VAR_2->thread_bp_death_addr;
  return (0);
 default:
  return (VAR_1);
 }
}
