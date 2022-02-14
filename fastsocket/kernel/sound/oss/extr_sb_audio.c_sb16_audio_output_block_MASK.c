
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long bits; int intr_active; int intr_active_16; int speed; int channels; int lock; scalar_t__ fullduplex; void* irq_mode_16; void* irq_mode; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_5__ {TYPE_1__* devc; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 void* VAR_2 ;
 TYPE_3__** VAR_3 ;
 int FUNC_0 (TYPE_1__*,unsigned char) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_4, unsigned long VAR_5, int VAR_6,
   int VAR_7)
{
 unsigned long VAR_8, VAR_9;
 sb_devc *VAR_10 = VAR_3[VAR_4]->devc;
 unsigned long VAR_11;

 if (!VAR_10->fullduplex || VAR_10->bits == VAR_0)
 {
  VAR_10->irq_mode = VAR_2;
  VAR_10->intr_active = 1;
 }
 else
 {
  VAR_10->irq_mode_16 = VAR_2;
  VAR_10->intr_active_16 = 1;
 }


 FUNC_1(&VAR_10->lock, VAR_8);
 VAR_11 = VAR_10->bits;
 if (VAR_10->fullduplex)
  VAR_10->bits = (VAR_10->bits == VAR_0) ?
   VAR_1 : VAR_0;
 FUNC_2(&VAR_10->lock, VAR_8);

 VAR_9 = VAR_6;
 if (VAR_10->bits == VAR_0)
  VAR_9 >>= 1;
 VAR_9--;

 FUNC_1(&VAR_10->lock, VAR_8);



 FUNC_0(VAR_10, 0x41);
 FUNC_0(VAR_10, (unsigned char) ((VAR_10->speed >> 8) & 0xff));
 FUNC_0(VAR_10, (unsigned char) (VAR_10->speed & 0xff));

 FUNC_0(VAR_10, (VAR_10->bits == VAR_0 ? 0xb6 : 0xc6));
 FUNC_0(VAR_10, ((VAR_10->channels == 2 ? 0x20 : 0) +
         (VAR_10->bits == VAR_0 ? 0x10 : 0)));
 FUNC_0(VAR_10, (unsigned char) (VAR_9 & 0xff));
 FUNC_0(VAR_10, (unsigned char) (VAR_9 >> 8));


 VAR_10->bits = VAR_11;
 FUNC_2(&VAR_10->lock, VAR_8);
}
