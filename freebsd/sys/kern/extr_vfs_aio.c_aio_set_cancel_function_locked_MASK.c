
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kaiocb {int jobflags; int * cancel_fn; TYPE_1__* userproc; } ;
typedef int aio_cancel_fn_t ;
struct TYPE_2__ {int p_aioinfo; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_1(struct kaiocb *VAR_2, aio_cancel_fn_t *VAR_3)
{

 FUNC_0(VAR_2->userproc->p_aioinfo, VAR_1);
 if (VAR_2->jobflags & VAR_0)
  return (0);
 VAR_2->cancel_fn = VAR_3;
 return (1);
}
