
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int lock; int control_dmat; int buffer_dmat; int irq; int irqid; int ih; int reg; int regid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct sc_info*) ;
 int FUNC_4 (struct sc_info*,int ) ;
 struct sc_info* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
     int VAR_4;
 struct sc_info *VAR_5;

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
      return VAR_4;

 VAR_5 = FUNC_5(VAR_3);
 FUNC_3(VAR_5);
 FUNC_1(VAR_3, VAR_2, VAR_5->regid, VAR_5->reg);
 FUNC_2(VAR_3, VAR_5->irq, VAR_5->ih);
 FUNC_1(VAR_3, VAR_1, VAR_5->irqid, VAR_5->irq);
 FUNC_0(VAR_5->buffer_dmat);
 FUNC_0(VAR_5->control_dmat);
 FUNC_7(VAR_5->lock);
 FUNC_4(VAR_5, VAR_0);
        return 0;
}
