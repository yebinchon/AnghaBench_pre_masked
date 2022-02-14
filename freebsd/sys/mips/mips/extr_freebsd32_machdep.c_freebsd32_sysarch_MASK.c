
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tlsbase ;
struct TYPE_2__ {void* md_tls; } ;
struct thread {TYPE_1__ td_md; } ;
struct freebsd32_sysarch_args {int op; int parms; } ;
typedef int int32_t ;


 int VAR_0 ;


 int FUNC_0 (int *,int ,int) ;

int
FUNC_1(struct thread *VAR_1, struct freebsd32_sysarch_args *VAR_2)
{
 int VAR_3;
 int32_t VAR_4;

 switch (VAR_2->op) {
 case 128:
  VAR_1->td_md.md_tls = (void *)(intptr_t)VAR_2->parms;
  return (0);
 case 129:
  VAR_4 = (int32_t)(intptr_t)VAR_1->td_md.md_tls;
  VAR_3 = FUNC_0(&VAR_4, VAR_2->parms, sizeof(VAR_4));
  return (VAR_3);
 default:
  break;
 }
 return (VAR_0);
}
