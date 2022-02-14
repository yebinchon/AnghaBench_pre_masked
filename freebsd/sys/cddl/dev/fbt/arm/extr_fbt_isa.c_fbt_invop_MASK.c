
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trapframe {int tf_r3; int tf_r2; int tf_r1; int tf_r0; scalar_t__ tf_svc_sp; } ;
struct TYPE_5__ {uintptr_t cpu_dtrace_caller; } ;
typedef TYPE_1__ solaris_cpu_t ;
typedef int register_t ;
struct TYPE_6__ {int fbtp_rval; int fbtp_savedval; int fbtp_id; scalar_t__ fbtp_patchpoint; struct TYPE_6__* fbtp_hashnext; } ;
typedef TYPE_2__ fbt_probe_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 size_t FUNC_2 (uintptr_t) ;
 size_t VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 TYPE_2__** VAR_4 ;
 TYPE_1__* VAR_5 ;

int
FUNC_4(uintptr_t VAR_6, struct trapframe *VAR_7, uintptr_t VAR_8)
{
 solaris_cpu_t *VAR_9 = &VAR_5[VAR_3];
 fbt_probe_t *VAR_10 = VAR_4[FUNC_2(VAR_6)];
 register_t VAR_11;

 for (; VAR_10 != ((void*)0); VAR_10 = VAR_10->fbtp_hashnext) {
  if ((uintptr_t)VAR_10->fbtp_patchpoint == VAR_6) {
   VAR_9->cpu_dtrace_caller = VAR_6;


   FUNC_1(VAR_1);
   VAR_11 = *(register_t *)VAR_7->tf_svc_sp;
   FUNC_0(VAR_1 | VAR_0);

   FUNC_3(VAR_10->fbtp_id, VAR_7->tf_r0,
       VAR_7->tf_r1, VAR_7->tf_r2,
       VAR_7->tf_r3, VAR_11);

   VAR_9->cpu_dtrace_caller = 0;

   return (VAR_10->fbtp_rval | (VAR_10->fbtp_savedval << VAR_2));
  }
 }

 return (0);
}
