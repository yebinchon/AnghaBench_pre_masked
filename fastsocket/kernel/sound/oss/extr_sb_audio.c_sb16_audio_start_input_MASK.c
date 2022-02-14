
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bits; int intr_active; int intr_active_16; int speed; int channels; int lock; void* irq_mode_16; void* irq_mode; int fullduplex; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_5__ {TYPE_1__* devc; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 TYPE_3__** VAR_2 ;
 int FUNC_0 (TYPE_1__*,unsigned char) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_3, unsigned long VAR_4, int VAR_5, int VAR_6)
{
 unsigned long VAR_7, VAR_8;
 sb_devc *VAR_9 = VAR_2[VAR_3]->devc;

 if (!VAR_9->fullduplex || VAR_9->bits != VAR_0)
 {
  VAR_9->irq_mode = VAR_1;
  VAR_9->intr_active = 1;
 }
 else
 {
  VAR_9->irq_mode_16 = VAR_1;
  VAR_9->intr_active_16 = 1;
 }

 VAR_8 = VAR_5;
 if (VAR_9->bits == VAR_0)
  VAR_8 >>= 1;
 VAR_8--;

 FUNC_1(&VAR_9->lock, VAR_7);



 FUNC_0(VAR_9, 0x42);
 FUNC_0(VAR_9, (unsigned char) ((VAR_9->speed >> 8) & 0xff));
 FUNC_0(VAR_9, (unsigned char) (VAR_9->speed & 0xff));

 FUNC_0(VAR_9, (VAR_9->bits == VAR_0 ? 0xbe : 0xce));
 FUNC_0(VAR_9, ((VAR_9->channels == 2 ? 0x20 : 0) +
         (VAR_9->bits == VAR_0 ? 0x10 : 0)));
 FUNC_0(VAR_9, (unsigned char) (VAR_8 & 0xff));
 FUNC_0(VAR_9, (unsigned char) (VAR_8 >> 8));

 FUNC_2(&VAR_9->lock, VAR_7);
}
