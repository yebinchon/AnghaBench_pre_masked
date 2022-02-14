
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kaioinfo {int kaio_syncqueue; } ;
struct kaiocb {TYPE_1__* userproc; } ;
struct TYPE_2__ {struct kaioinfo* p_aioinfo; } ;


 int FUNC_0 (struct kaioinfo*) ;
 int FUNC_1 (struct kaioinfo*) ;
 int FUNC_2 (int *,struct kaiocb*,int ) ;
 int FUNC_3 (struct kaiocb*) ;
 int FUNC_4 (struct kaiocb*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct kaiocb *VAR_1)
{
 struct kaioinfo *VAR_2;

 VAR_2 = VAR_1->userproc->p_aioinfo;
 FUNC_0(VAR_2);
 if (!FUNC_4(VAR_1))
  FUNC_2(&VAR_2->kaio_syncqueue, VAR_1, VAR_0);
 FUNC_1(VAR_2);
 FUNC_3(VAR_1);
}
