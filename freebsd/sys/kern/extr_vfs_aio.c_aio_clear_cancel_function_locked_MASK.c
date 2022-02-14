
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kaiocb {int jobflags; int * cancel_fn; TYPE_1__* userproc; } ;
struct TYPE_2__ {int p_aioinfo; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(struct kaiocb *VAR_3)
{

 FUNC_0(VAR_3->userproc->p_aioinfo, VAR_2);
 FUNC_1(VAR_3->cancel_fn != ((void*)0));
 if (VAR_3->jobflags & VAR_0) {
  VAR_3->jobflags |= VAR_1;
  return (0);
 }
 VAR_3->cancel_fn = ((void*)0);
 return (1);
}
