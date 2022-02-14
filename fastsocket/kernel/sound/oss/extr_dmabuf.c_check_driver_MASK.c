
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_driver {int * set_channels; int * set_bits; int * set_speed; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_0(struct audio_driver *VAR_3)
{
 if (VAR_3->set_speed == ((void*)0))
  VAR_3->set_speed = VAR_2;
 if (VAR_3->set_bits == ((void*)0))
  VAR_3->set_bits = VAR_0;
 if (VAR_3->set_channels == ((void*)0))
  VAR_3->set_channels = VAR_1;
}
