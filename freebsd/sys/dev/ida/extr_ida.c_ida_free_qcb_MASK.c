
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ida_softc {int free_qcbs; } ;
struct ida_qcb {scalar_t__ error; int * buf; int state; } ;
struct TYPE_2__ {int sle; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ida_qcb*,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static __inline void
FUNC_1(struct ida_softc *VAR_2, struct ida_qcb *VAR_3)
{

 VAR_3->state = VAR_0;
 VAR_3->buf = ((void*)0);
 VAR_3->error = 0;
 FUNC_0(&VAR_2->free_qcbs, VAR_3, VAR_1.sle);
}
