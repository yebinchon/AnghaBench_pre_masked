
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_midi_in_endpoint {TYPE_2__** urbs; scalar_t__ error_resubmit; } ;
struct snd_usb_midi {int disc_lock; TYPE_1__* endpoints; int dev; scalar_t__ disconnected; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ out; struct snd_usb_midi_in_endpoint* in; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct snd_usb_midi *VAR_4 = (struct snd_usb_midi *)VAR_3;
 unsigned int VAR_5, VAR_6;

 FUNC_2(&VAR_4->disc_lock);
 if (VAR_4->disconnected) {
  FUNC_3(&VAR_4->disc_lock);
  return;
 }
 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  struct snd_usb_midi_in_endpoint *VAR_7 = VAR_4->endpoints[VAR_5].in;
  if (VAR_7 && VAR_7->error_resubmit) {
   VAR_7->error_resubmit = 0;
   for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
    VAR_7->urbs[VAR_6]->dev = VAR_4->dev;
    FUNC_1(VAR_7->urbs[VAR_6], VAR_0);
   }
  }
  if (VAR_4->endpoints[VAR_5].out)
   FUNC_0(VAR_4->endpoints[VAR_5].out);
 }
 FUNC_3(&VAR_4->disc_lock);
}
