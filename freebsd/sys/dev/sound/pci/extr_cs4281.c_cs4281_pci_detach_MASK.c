
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int parent_dmat; int irq; int irqid; int ih; int mem; int memid; int reg; int regid; int regtype; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct sc_info*,int) ;
 int FUNC_4 (struct sc_info*,int ) ;
 struct sc_info* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
    int VAR_4;
    struct sc_info *VAR_5;

    VAR_4 = FUNC_6(VAR_3);
    if (VAR_4)
 return VAR_4;

    VAR_5 = FUNC_5(VAR_3);


    FUNC_3(VAR_5, 3);

    FUNC_1(VAR_3, VAR_5->regtype, VAR_5->regid, VAR_5->reg);
    FUNC_1(VAR_3, VAR_2, VAR_5->memid, VAR_5->mem);
    FUNC_2(VAR_3, VAR_5->irq, VAR_5->ih);
    FUNC_1(VAR_3, VAR_1, VAR_5->irqid, VAR_5->irq);
    FUNC_0(VAR_5->parent_dmat);
    FUNC_4(VAR_5, VAR_0);

    return 0;
}
