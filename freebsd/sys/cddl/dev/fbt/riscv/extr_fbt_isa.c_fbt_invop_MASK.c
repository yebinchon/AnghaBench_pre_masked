
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trapframe {int * tf_a; } ;
struct TYPE_5__ {uintptr_t cpu_dtrace_caller; } ;
typedef TYPE_1__ solaris_cpu_t ;
struct TYPE_6__ {int fbtp_savedval; int fbtp_id; scalar_t__ fbtp_patchpoint; struct TYPE_6__* fbtp_hashnext; } ;
typedef TYPE_2__ fbt_probe_t ;


 size_t FUNC_0 (uintptr_t) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 TYPE_2__** VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_2(uintptr_t VAR_3, struct trapframe *VAR_4, uintptr_t VAR_5)
{
 solaris_cpu_t *VAR_6;
 fbt_probe_t *VAR_7;

 VAR_6 = &VAR_2[VAR_0];
 VAR_7 = VAR_1[FUNC_0(VAR_3)];

 for (; VAR_7 != ((void*)0); VAR_7 = VAR_7->fbtp_hashnext) {
  if ((uintptr_t)VAR_7->fbtp_patchpoint == VAR_3) {
   VAR_6->cpu_dtrace_caller = VAR_3;

   FUNC_1(VAR_7->fbtp_id, VAR_4->tf_a[0],
       VAR_4->tf_a[1], VAR_4->tf_a[2],
       VAR_4->tf_a[3], VAR_4->tf_a[4]);

   VAR_6->cpu_dtrace_caller = 0;
   return (VAR_7->fbtp_savedval);
  }
 }

 return (0);
}
