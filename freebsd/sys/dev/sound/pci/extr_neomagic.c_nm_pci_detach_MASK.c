
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int irq; int irqid; int ih; int reg; int regid; int buf; int bufid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct sc_info*,int ) ;
 struct sc_info* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 int VAR_4;
 struct sc_info *VAR_5;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_3(VAR_3);
 FUNC_0(VAR_3, VAR_2, VAR_5->bufid, VAR_5->buf);
 FUNC_0(VAR_3, VAR_2, VAR_5->regid, VAR_5->reg);
 FUNC_1(VAR_3, VAR_5->irq, VAR_5->ih);
 FUNC_0(VAR_3, VAR_1, VAR_5->irqid, VAR_5->irq);
 FUNC_2(VAR_5, VAR_0);

 return 0;
}
