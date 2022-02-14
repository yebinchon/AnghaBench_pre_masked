
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trapframe {uintptr_t* fixreg; uintptr_t srr0; } ;
struct TYPE_5__ {uintptr_t cpu_dtrace_caller; } ;
typedef TYPE_1__ solaris_cpu_t ;
struct TYPE_6__ {scalar_t__ fbtp_roffset; scalar_t__ fbtp_rval; uintptr_t fbtp_savedval; scalar_t__ fbtp_patchpoint; int fbtp_id; struct TYPE_6__* fbtp_hashnext; } ;
typedef TYPE_2__ fbt_probe_t ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (uintptr_t) ;
 uintptr_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,uintptr_t,uintptr_t,uintptr_t,uintptr_t,uintptr_t) ;
 TYPE_2__** VAR_3 ;
 TYPE_1__* VAR_4 ;

int
FUNC_2(uintptr_t VAR_5, struct trapframe *VAR_6, uintptr_t VAR_7)
{
 solaris_cpu_t *VAR_8 = &VAR_4[VAR_2];
 fbt_probe_t *VAR_9 = VAR_3[FUNC_0(VAR_5)];
 uintptr_t VAR_10;

 for (; VAR_9 != ((void*)0); VAR_9 = VAR_9->fbtp_hashnext) {
  if ((uintptr_t)VAR_9->fbtp_patchpoint == VAR_5) {
   if (VAR_9->fbtp_roffset == 0) {
    VAR_8->cpu_dtrace_caller = VAR_5;

    FUNC_1(VAR_9->fbtp_id, VAR_6->fixreg[3],
        VAR_6->fixreg[4], VAR_6->fixreg[5],
        VAR_6->fixreg[6], VAR_6->fixreg[7]);

    VAR_8->cpu_dtrace_caller = 0;
   } else {

    FUNC_1(VAR_9->fbtp_id, VAR_9->fbtp_roffset,
        VAR_7, 0, 0, 0);




    if (VAR_9->fbtp_rval == VAR_0) {
     VAR_6->srr0 = (uintptr_t)VAR_9->fbtp_patchpoint;
     VAR_10 = VAR_9->fbtp_savedval & VAR_1;

     if (VAR_10 & 0x02000000)



      VAR_10 |= 0xfc000000UL;

     VAR_6->srr0 += VAR_10;
    }
    VAR_8->cpu_dtrace_caller = 0;
   }

   return (VAR_9->fbtp_rval);
  }
 }

 return (0);
}
