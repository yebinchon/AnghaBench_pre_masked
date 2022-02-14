
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kaioinfo {int dummy; } ;
struct kaiocb {TYPE_1__* userproc; } ;
struct TYPE_2__ {struct kaioinfo* p_aioinfo; } ;


 int FUNC_0 (struct kaioinfo*) ;
 int FUNC_1 (struct kaioinfo*) ;
 int FUNC_2 (struct kaiocb*) ;

bool
FUNC_3(struct kaiocb *VAR_0)
{
 struct kaioinfo *VAR_1;
 bool VAR_2;

 VAR_1 = VAR_0->userproc->p_aioinfo;
 FUNC_0(VAR_1);
 VAR_2 = FUNC_2(VAR_0);
 FUNC_1(VAR_1);
 return (VAR_2);
}
