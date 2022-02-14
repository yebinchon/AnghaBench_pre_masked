
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int lsi_int; int lsi_addr; int lsi_status; int lsi_uid; int lsi_pid; int lsi_code; } ;
typedef TYPE_3__ l_siginfo_t ;
struct TYPE_7__ {int sival_int; } ;
struct TYPE_8__ {TYPE_1__ si_value; } ;
struct TYPE_10__ {int ksi_signo; TYPE_2__ ksi_info; int ksi_addr; int ksi_status; int ksi_uid; int ksi_pid; int ksi_code; } ;
typedef TYPE_4__ ksiginfo_t ;


 int FUNC_0 (int ) ;

void
FUNC_1(const l_siginfo_t *VAR_0, ksiginfo_t *VAR_1, int VAR_2)
{

 VAR_1->ksi_signo = VAR_2;
 VAR_1->ksi_code = VAR_0->lsi_code;
 VAR_1->ksi_pid = VAR_0->lsi_pid;
 VAR_1->ksi_uid = VAR_0->lsi_uid;
 VAR_1->ksi_status = VAR_0->lsi_status;
 VAR_1->ksi_addr = FUNC_0(VAR_0->lsi_addr);
 VAR_1->ksi_info.si_value.sival_int = VAR_0->lsi_int;
}
