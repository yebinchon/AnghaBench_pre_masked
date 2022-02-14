
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {scalar_t__ lock; scalar_t__ cs; scalar_t__ irq; scalar_t__ dmat; scalar_t__ ih; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 struct sc_info* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct sc_info*) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct sc_info *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_6(VAR_2,"Can't detach: softc is null.\n");
  return (0);
 }

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  return (VAR_4);

 FUNC_7(VAR_3);

 if (VAR_3->ih)
  FUNC_3(VAR_2, VAR_3->irq, VAR_3->ih);
 if (VAR_3->dmat)
  FUNC_1(VAR_3->dmat);
 if (VAR_3->irq)
  FUNC_2(VAR_2, VAR_0, 0, VAR_3->irq);
 if (VAR_3->cs)
  FUNC_2(VAR_2, VAR_1, FUNC_0(0), VAR_3->cs);
 if (VAR_3->lock)
  FUNC_8(VAR_3->lock);

 return (0);
}
