
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ isp_nirq; int isp_lock; } ;
struct isp_sbussoftc {int regs; int rgd; int irq; int iqd; int ih; TYPE_1__ sbus_isp; } ;
typedef TYPE_1__ ispsoftc_t ;
typedef int device_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct isp_sbussoftc* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct isp_sbussoftc *VAR_3 = FUNC_4(VAR_2);
 ispsoftc_t *VAR_4 = &VAR_3->sbus_isp;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5)
  return (VAR_5);
 FUNC_0(VAR_4);
 FUNC_7(VAR_4);
 FUNC_1(VAR_4);
 if (VAR_4->isp_nirq > 0) {
  (void) FUNC_3(VAR_2, VAR_3->irq, VAR_3->ih);
  (void) FUNC_2(VAR_2, VAR_0, VAR_3->iqd,
      VAR_3->irq);
 }
 (void) FUNC_2(VAR_2, VAR_1, VAR_3->rgd, VAR_3->regs);
 FUNC_6(VAR_4);
 FUNC_8(&VAR_4->isp_lock);
 return (0);
}
