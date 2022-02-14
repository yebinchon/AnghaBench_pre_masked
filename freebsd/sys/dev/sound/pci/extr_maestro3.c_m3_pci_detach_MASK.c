
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int sc_lock; struct sc_info* savemem; int parent_dmat; int reg; int regid; int regtype; int irq; int irqid; int ih; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct sc_info*,int ) ;
 int FUNC_7 (struct sc_info*,int) ;
 int FUNC_8 (struct sc_info*) ;
 struct sc_info* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_3)
{
 struct sc_info *VAR_4 = FUNC_9(VAR_3);
 int VAR_5;

 FUNC_0(VAR_0, ("m3_pci_detach\n"));

 if ((VAR_5 = FUNC_10(VAR_3)) != 0) {
  return VAR_5;
 }

 FUNC_1(VAR_4);
 FUNC_8(VAR_4);
 FUNC_7(VAR_4, 3);
 FUNC_2(VAR_4);

 FUNC_5(VAR_3, VAR_4->irq, VAR_4->ih);
 FUNC_4(VAR_3, VAR_2, VAR_4->irqid, VAR_4->irq);
 FUNC_4(VAR_3, VAR_4->regtype, VAR_4->regid, VAR_4->reg);
 FUNC_3(VAR_4->parent_dmat);

 FUNC_6(VAR_4->savemem, VAR_1);
 FUNC_11(VAR_4->sc_lock);
 FUNC_6(VAR_4, VAR_1);
 return 0;
}
