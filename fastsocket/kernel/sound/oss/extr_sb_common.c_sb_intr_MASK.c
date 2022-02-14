
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ model; int irq_mode; int irq_mode_16; int dev; scalar_t__ intr_active_16; int fullduplex; scalar_t__ intr_active; scalar_t__ midi_irq_cookie; int irq; } ;
typedef TYPE_1__ sb_devc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 unsigned char FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6 (sb_devc *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6 = 0xff;

 if (VAR_4->model == VAR_3)
 {
  VAR_6 = FUNC_3(VAR_4, VAR_2);

  if (VAR_6 & 4)
   if(VAR_4->midi_irq_cookie)
    FUNC_5(VAR_4->irq, VAR_4->midi_irq_cookie);

  if (!(VAR_6 & 3))
   return;
 }
 if (VAR_4->intr_active && (!VAR_4->fullduplex || (VAR_6 & 0x01)))
 {
  switch (VAR_4->irq_mode)
  {
   case 128:
    FUNC_1(VAR_4->dev, 1);
    break;

   case 130:
    FUNC_0(VAR_4->dev);
    break;

   case 131:
    break;

   case 129:
    FUNC_4(VAR_4);
    break;

   default:

    ;
  }
 }
 else if (VAR_4->intr_active_16 && (VAR_6 & 0x02))
 {
  switch (VAR_4->irq_mode_16)
  {
   case 128:
    FUNC_1(VAR_4->dev, 1);
    break;

   case 130:
    FUNC_0(VAR_4->dev);
    break;

   case 131:
    break;

   default:

    ;
  }
 }




 if (VAR_6 & 0x01)
  VAR_5 = FUNC_2(VAR_0);

 if (VAR_4->model == VAR_3 && VAR_6 & 0x02)
  VAR_5 = FUNC_2(VAR_1);
}
