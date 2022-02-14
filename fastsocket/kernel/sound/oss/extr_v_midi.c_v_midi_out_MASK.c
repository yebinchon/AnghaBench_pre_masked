
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t pair_mididev; scalar_t__ input_opened; int my_mididev; int (* midi_input_intr ) (int ,unsigned char) ;} ;
typedef TYPE_1__ vmidi_devc ;
struct TYPE_4__ {TYPE_1__* devc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__** VAR_1 ;
 int FUNC_1 (int ,unsigned char) ;

__attribute__((used)) static int FUNC_2 (int VAR_2, unsigned char VAR_3)
{
 vmidi_devc *VAR_4 = VAR_1[VAR_2]->devc;
 vmidi_devc *VAR_5;

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_5 = VAR_1[VAR_4->pair_mididev]->devc;
 if (VAR_5->input_opened > 0){
  if (FUNC_0(VAR_5->my_mididev) > 500)
   return 0;
  VAR_5->midi_input_intr (VAR_5->my_mididev, VAR_3);
 }
 return 1;
}
