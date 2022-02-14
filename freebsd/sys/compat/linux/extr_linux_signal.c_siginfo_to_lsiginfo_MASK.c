
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sival_ptr; int sival_int; } ;
struct TYPE_7__ {int si_code; TYPE_1__ si_value; int si_uid; int si_pid; int si_addr; void* si_status; int si_band; int si_timerid; } ;
typedef TYPE_2__ siginfo_t ;
struct TYPE_8__ {void* lsi_ptr; int lsi_int; int lsi_uid; int lsi_pid; void* lsi_addr; void* lsi_status; int lsi_errno; int lsi_band; int lsi_tid; int lsi_code; int lsi_signo; } ;
typedef TYPE_3__ l_siginfo_t ;
typedef int l_int ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;

 void* FUNC_0 (int ) ;
 void* VAR_3 ;




 void* FUNC_1 (void*) ;
 int FUNC_2 (int,int *) ;

void
FUNC_3(const siginfo_t *VAR_4, l_siginfo_t *VAR_5, l_int VAR_6)
{


 VAR_5->lsi_signo = VAR_6;
 FUNC_2(VAR_4->si_code, &VAR_5->lsi_code);

 switch (VAR_4->si_code) {
 case 130:
  VAR_5->lsi_pid = VAR_4->si_pid;
  VAR_5->lsi_uid = VAR_4->si_uid;
  break;

 case 128:
  VAR_5->lsi_int = VAR_4->si_value.sival_int;
  VAR_5->lsi_ptr = FUNC_0(VAR_4->si_value.sival_ptr);
  VAR_5->lsi_tid = VAR_4->si_timerid;
  break;

 case 129:
  VAR_5->lsi_pid = VAR_4->si_pid;
  VAR_5->lsi_uid = VAR_4->si_uid;
  VAR_5->lsi_ptr = FUNC_0(VAR_4->si_value.sival_ptr);
  break;

 case 131:
  VAR_5->lsi_int = VAR_4->si_value.sival_int;
  VAR_5->lsi_ptr = FUNC_0(VAR_4->si_value.sival_ptr);
  break;

 default:
  switch (VAR_6) {
  case 133:

   VAR_5->lsi_band = VAR_4->si_band;
   break;

  case 136:
   VAR_5->lsi_errno = 0;
   VAR_5->lsi_pid = VAR_4->si_pid;
   VAR_5->lsi_uid = VAR_4->si_uid;

   if (VAR_4->si_code == VAR_1)
    VAR_5->lsi_status = FUNC_1(VAR_4->si_status);
   else if (VAR_4->si_code == VAR_0)
    VAR_5->lsi_status = FUNC_1(VAR_3);
   else
    VAR_5->lsi_status = VAR_4->si_status;
   break;

  case 137:
  case 134:
  case 135:
  case 132:
   VAR_5->lsi_addr = FUNC_0(VAR_4->si_addr);
   break;

  default:
   VAR_5->lsi_pid = VAR_4->si_pid;
   VAR_5->lsi_uid = VAR_4->si_uid;
   if (VAR_6 >= VAR_2) {
    VAR_5->lsi_int = VAR_4->si_value.sival_int;
    VAR_5->lsi_ptr = FUNC_0(VAR_4->si_value.sival_ptr);
   }
   break;
  }
  break;
 }
}
