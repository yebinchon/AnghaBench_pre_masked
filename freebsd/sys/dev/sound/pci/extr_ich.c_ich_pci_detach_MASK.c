
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int ich_lock; int dmat; int chan_dmat; int dtmap; int dtbl; int nabmbar; int nabmbarid; int regtype; int nambar; int nambarid; int irq; int irqid; int ih; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct sc_info*,int ) ;
 struct sc_info* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct sc_info *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4)
  return (VAR_4);
 VAR_3 = FUNC_6(VAR_2);

 FUNC_4(VAR_2, VAR_3->irq, VAR_3->ih);
 FUNC_3(VAR_2, VAR_1, VAR_3->irqid, VAR_3->irq);
 FUNC_3(VAR_2, VAR_3->regtype, VAR_3->nambarid, VAR_3->nambar);
 FUNC_3(VAR_2, VAR_3->regtype, VAR_3->nabmbarid, VAR_3->nabmbar);
 FUNC_1(VAR_3->dmat, VAR_3->dtmap);
 FUNC_2(VAR_3->dmat, VAR_3->dtbl, VAR_3->dtmap);
 FUNC_0(VAR_3->chan_dmat);
 FUNC_0(VAR_3->dmat);
 FUNC_8(VAR_3->ich_lock);
 FUNC_5(VAR_3, VAR_0);
 return (0);
}
