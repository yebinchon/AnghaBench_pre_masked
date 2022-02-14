
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenpci_softc {int res_irq; int intr_cookie; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int ,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, struct xenpci_softc *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(FUNC_2(VAR_3), VAR_3,
          VAR_4->res_irq, VAR_0|VAR_1,
          VAR_2, ((void*)0), ((void*)0),
          &VAR_4->intr_cookie);
 if (VAR_5)
  return VAR_5;
 FUNC_3(VAR_3);
 return (0);
}
