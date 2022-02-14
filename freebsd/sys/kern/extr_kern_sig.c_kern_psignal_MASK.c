
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct proc {int dummy; } ;
struct TYPE_4__ {int ksi_signo; int ksi_code; } ;
typedef TYPE_1__ ksiginfo_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct proc*,int *,int,TYPE_1__*) ;

void
FUNC_2(struct proc *VAR_1, int VAR_2)
{
 ksiginfo_t VAR_3;

 FUNC_0(&VAR_3);
 VAR_3.ksi_signo = VAR_2;
 VAR_3.ksi_code = VAR_0;
 (void) FUNC_1(VAR_1, ((void*)0), VAR_2, &VAR_3);
}
