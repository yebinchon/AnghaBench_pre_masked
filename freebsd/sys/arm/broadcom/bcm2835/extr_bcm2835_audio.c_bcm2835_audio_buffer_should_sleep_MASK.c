
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_audio_chinfo {scalar_t__ playback_state; scalar_t__ available_space; int starved; int buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(struct bcm2835_audio_chinfo *VAR_2)
{

 if (VAR_2->playback_state != VAR_0)
  return (1);


 if (FUNC_1(VAR_2->buffer) < VAR_1) {
  FUNC_0("starve\n");
  VAR_2->starved++;
  return (1);
 }


 if (VAR_2->available_space < VAR_1) {
  return (1);
 }

 return (0);
}
