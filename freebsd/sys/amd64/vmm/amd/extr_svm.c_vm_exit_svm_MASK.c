
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_3__ {void* exitinfo2; void* exitinfo1; void* exitcode; } ;
struct TYPE_4__ {TYPE_1__ svm; } ;
struct vm_exit {TYPE_2__ u; int exitcode; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct vm_exit *VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4)
{

 VAR_1->exitcode = VAR_0;
 VAR_1->u.svm.exitcode = VAR_2;
 VAR_1->u.svm.exitinfo1 = VAR_3;
 VAR_1->u.svm.exitinfo2 = VAR_4;
}
