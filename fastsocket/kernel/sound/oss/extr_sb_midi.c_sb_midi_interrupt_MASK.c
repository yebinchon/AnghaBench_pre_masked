
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int my_mididev; int (* midi_input_intr ) (int ,unsigned char) ;scalar_t__ input_opened; } ;
typedef TYPE_1__ sb_devc ;


 int VAR_0 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,unsigned char) ;

void FUNC_4(sb_devc * VAR_1)
{
 unsigned long VAR_2;
 unsigned char VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(&VAR_1->lock, VAR_2);

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_1->input_opened)
  VAR_1->midi_input_intr(VAR_1->my_mididev, VAR_3);

 FUNC_2(&VAR_1->lock, VAR_2);
}
