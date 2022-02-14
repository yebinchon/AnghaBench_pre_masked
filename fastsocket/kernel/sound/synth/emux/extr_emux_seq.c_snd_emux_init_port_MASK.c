
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emux_port {scalar_t__ volume_atten; int drum_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_emux_port*) ;

__attribute__((used)) static void
FUNC_1(struct snd_emux_port *VAR_1)
{
 VAR_1->drum_flags = VAR_0;
 VAR_1->volume_atten = 0;

 FUNC_0(VAR_1);
}
