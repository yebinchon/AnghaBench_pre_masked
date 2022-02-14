
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sigevent {void* sigev_signo; int sigev_notify; } ;
struct l_sigevent {int sigev_notify; int sigev_signo; } ;
struct TYPE_4__ {int _tid; } ;
struct TYPE_3__ {int sival_ptr; } ;


 int FUNC_0 (struct l_sigevent,struct sigevent,int ) ;
 int FUNC_1 (struct l_sigevent,struct sigevent,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;




 int FUNC_3 (struct l_sigevent,struct sigevent,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 void* FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static int
FUNC_5(struct l_sigevent *VAR_10, struct sigevent *VAR_11)
{

 FUNC_0(*VAR_10, *VAR_11, VAR_7);
 switch (VAR_10->sigev_notify) {
 case 130:
  if (!FUNC_2(VAR_10->sigev_signo))
   return (VAR_0);
  VAR_11->sigev_notify = VAR_3;
  VAR_11->sigev_signo = FUNC_4(VAR_10->sigev_signo);
  FUNC_3(*VAR_10, *VAR_11, VAR_9.sival_ptr);
  break;
 case 131:
  VAR_11->sigev_notify = VAR_2;
  break;
 case 129:





  return (VAR_0);

 case 128:
  if (!FUNC_2(VAR_10->sigev_signo))
   return (VAR_0);
  VAR_11->sigev_notify = VAR_5;
  FUNC_1(*VAR_10, *VAR_11, VAR_6._tid, VAR_8);
  VAR_11->sigev_signo = FUNC_4(VAR_10->sigev_signo);
  FUNC_3(*VAR_10, *VAR_11, VAR_9.sival_ptr);
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
