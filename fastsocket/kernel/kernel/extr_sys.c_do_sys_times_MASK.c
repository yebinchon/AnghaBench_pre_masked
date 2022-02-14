
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tms {void* tms_cstime; void* tms_cutime; void* tms_stime; void* tms_utime; } ;
typedef int cputime_t ;
struct TYPE_7__ {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct TYPE_6__ {int siglock; } ;
struct TYPE_5__ {int cstime; int cutime; } ;


 void* FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int *,int *) ;

void FUNC_4(struct tms *VAR_1)
{
 cputime_t VAR_2, VAR_3, VAR_4, VAR_5;

 FUNC_1(&VAR_0->sighand->siglock);
 FUNC_3(VAR_0, &VAR_2, &VAR_3);
 VAR_4 = VAR_0->signal->cutime;
 VAR_5 = VAR_0->signal->cstime;
 FUNC_2(&VAR_0->sighand->siglock);
 VAR_1->tms_utime = FUNC_0(VAR_2);
 VAR_1->tms_stime = FUNC_0(VAR_3);
 VAR_1->tms_cutime = FUNC_0(VAR_4);
 VAR_1->tms_cstime = FUNC_0(VAR_5);
}
