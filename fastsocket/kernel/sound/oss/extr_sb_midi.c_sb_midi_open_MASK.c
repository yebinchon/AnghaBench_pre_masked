
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int opened; int intr_active; int input_opened; void (* midi_input_intr ) (int,unsigned char) ;scalar_t__ midi_broken; int irq_mode; int lock; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_6__ {TYPE_1__* devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__** VAR_5 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(int VAR_6, int VAR_7,
      void (*VAR_8) (int VAR_9, unsigned char VAR_10),
      void (*VAR_11) (int VAR_12)
)
{
 sb_devc *VAR_13 = VAR_5[VAR_6]->devc;
 unsigned long VAR_14;

 if (VAR_13 == ((void*)0))
  return -VAR_2;

 FUNC_2(&VAR_13->lock, VAR_14);
 if (VAR_13->opened)
 {
  FUNC_3(&VAR_13->lock, VAR_14);
  return -VAR_0;
 }
 VAR_13->opened = 1;
 FUNC_3(&VAR_13->lock, VAR_14);

 VAR_13->irq_mode = VAR_3;
 VAR_13->midi_broken = 0;

 FUNC_1(VAR_13);

 if (!FUNC_0(VAR_13, 0x35))
 {
    VAR_13->opened = 0;
    return -VAR_1;
 }
 VAR_13->intr_active = 1;

 if (VAR_7 & VAR_4)
 {
  VAR_13->input_opened = 1;
  VAR_13->midi_input_intr = VAR_8;
 }
 return 0;
}
