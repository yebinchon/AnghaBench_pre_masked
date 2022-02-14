
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t my_dev; struct TYPE_6__* converter; int irq; int share_irq; struct TYPE_6__* devc; } ;
typedef TYPE_1__ uart401_devc ;
struct address_info {int* slots; int io_base; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__** VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (size_t) ;

void FUNC_5(struct address_info *VAR_1)
{
 uart401_devc *VAR_2;
 int VAR_3=VAR_1->slots[4];


 if(VAR_3==-1 || VAR_0[VAR_3]==((void*)0))
  return;



 VAR_2 = VAR_0[VAR_1->slots[4]]->devc;
 if (VAR_2 == ((void*)0))
  return;

 FUNC_3(VAR_2);
 FUNC_2(VAR_1->io_base, 4);

 if (!VAR_2->share_irq)
  FUNC_0(VAR_2->irq, VAR_2);
 if (VAR_2)
 {
  FUNC_1(VAR_0[VAR_2->my_dev]->converter);
  FUNC_1(VAR_0[VAR_2->my_dev]);
  FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
 }

 FUNC_4(VAR_1->slots[4]);
}
