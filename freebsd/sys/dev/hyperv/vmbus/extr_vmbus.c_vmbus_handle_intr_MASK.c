
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_softc {int dummy; } ;
struct trapframe {int dummy; } ;


 int * FUNC_0 (struct vmbus_softc*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct vmbus_softc* FUNC_3 () ;
 int FUNC_4 (struct vmbus_softc*,struct trapframe*,int) ;

void
FUNC_5(struct trapframe *VAR_2)
{
 struct vmbus_softc *VAR_3 = FUNC_3();
 int VAR_4 = VAR_0;




 FUNC_1();




 (*FUNC_0(VAR_3, VAR_1, VAR_4))++;

 FUNC_4(VAR_3, VAR_2, VAR_4);




 FUNC_2();
}
