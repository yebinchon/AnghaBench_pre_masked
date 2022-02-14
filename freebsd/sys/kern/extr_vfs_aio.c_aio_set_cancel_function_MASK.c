
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kaioinfo {int dummy; } ;
struct kaiocb {TYPE_1__* userproc; } ;
typedef int aio_cancel_fn_t ;
struct TYPE_2__ {struct kaioinfo* p_aioinfo; } ;


 int FUNC_0 (struct kaioinfo*) ;
 int FUNC_1 (struct kaioinfo*) ;
 int FUNC_2 (struct kaiocb*,int *) ;

bool
FUNC_3(struct kaiocb *VAR_0, aio_cancel_fn_t *VAR_1)
{
 struct kaioinfo *VAR_2;
 bool VAR_3;

 VAR_2 = VAR_0->userproc->p_aioinfo;
 FUNC_0(VAR_2);
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_2);
 return (VAR_3);
}
