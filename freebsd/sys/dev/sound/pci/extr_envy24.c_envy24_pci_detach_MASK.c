
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sc_info {int adcn; int dacn; int lock; int mt; int mtid; int ds; int dsid; int ddma; int ddmaid; int cs; int csid; int irq; int irqid; int ih; int dmat; TYPE_2__* cfg; int * dac; int * adc; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* codec; } ;
struct TYPE_3__ {int (* destroy ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct sc_info*) ;
 int FUNC_6 (struct sc_info*,int ) ;
 struct sc_info* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_3)
{
 struct sc_info *VAR_4;
 int VAR_5;
 int VAR_6;




 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4 == ((void*)0))
  return 0;
 VAR_5 = FUNC_8(VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_5(VAR_4);
 if (VAR_4->cfg->codec->destroy != ((void*)0)) {
  for (VAR_6 = 0; VAR_6 < VAR_4->adcn; VAR_6++)
   VAR_4->cfg->codec->destroy(VAR_4->adc[VAR_6]);
  for (VAR_6 = 0; VAR_6 < VAR_4->dacn; VAR_6++)
   VAR_4->cfg->codec->destroy(VAR_4->dac[VAR_6]);
 }
 FUNC_4(VAR_4->cfg);
 FUNC_0(VAR_4->dmat);
 FUNC_2(VAR_3, VAR_4->irq, VAR_4->ih);
 FUNC_1(VAR_3, VAR_2, VAR_4->irqid, VAR_4->irq);
 FUNC_1(VAR_3, VAR_1, VAR_4->csid, VAR_4->cs);
 FUNC_1(VAR_3, VAR_1, VAR_4->ddmaid, VAR_4->ddma);
 FUNC_1(VAR_3, VAR_1, VAR_4->dsid, VAR_4->ds);
 FUNC_1(VAR_3, VAR_1, VAR_4->mtid, VAR_4->mt);
 FUNC_9(VAR_4->lock);
 FUNC_6(VAR_4, VAR_0);
 return 0;
}
