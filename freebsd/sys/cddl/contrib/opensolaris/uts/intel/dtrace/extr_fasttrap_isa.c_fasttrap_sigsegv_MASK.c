
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int proc_t ;
typedef int kthread_t ;
struct TYPE_4__ {scalar_t__ ksi_addr; int ksi_code; int ksi_signo; } ;
typedef TYPE_1__ ksiginfo_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(proc_t *VAR_2, kthread_t *VAR_3, uintptr_t VAR_4)
{
 ksiginfo_t VAR_5;

 FUNC_2(&VAR_5);
 VAR_5.ksi_signo = VAR_1;
 VAR_5.ksi_code = VAR_0;
 VAR_5.ksi_addr = (caddr_t)VAR_4;
 FUNC_0(VAR_2);
 (void)FUNC_3(VAR_3, VAR_1, &VAR_5);
 FUNC_1(VAR_2);
}
