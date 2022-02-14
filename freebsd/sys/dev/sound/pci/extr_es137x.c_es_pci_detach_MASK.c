
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es_info {scalar_t__ num; int lock; int parent_dmat; int reg; int regid; int regtype; int irq; int irqid; int ih; int poll_timer; scalar_t__ polling; } ;
typedef int device_t ;


 int FUNC_0 (struct es_info*) ;
 int FUNC_1 (struct es_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct es_info*,int ) ;
 struct es_info* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_2)
{
 int VAR_3;
 struct es_info *VAR_4;

 VAR_3 = FUNC_9(VAR_2);
 if (VAR_3)
  return (VAR_3);

 VAR_4 = FUNC_8(VAR_2);

 if (VAR_4 != ((void*)0) && VAR_4->num != 0) {
  FUNC_0(VAR_4);
  VAR_4->polling = 0;
  FUNC_6(&VAR_4->poll_timer);
  FUNC_1(VAR_4);
  FUNC_5(&VAR_4->poll_timer);
 }

 FUNC_4(VAR_2, VAR_4->irq, VAR_4->ih);
 FUNC_3(VAR_2, VAR_1, VAR_4->irqid, VAR_4->irq);
 FUNC_3(VAR_2, VAR_4->regtype, VAR_4->regid, VAR_4->reg);
 FUNC_2(VAR_4->parent_dmat);
 FUNC_10(VAR_4->lock);
 FUNC_7(VAR_4, VAR_0);

 return (0);
}
