
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int use_midi_tasklet; } ;



__attribute__((used)) static int FUNC_0(struct hdsp *VAR_0, int VAR_1)
{
 if (VAR_1)
  VAR_0->use_midi_tasklet = 1;
 else
  VAR_0->use_midi_tasklet = 0;
 return 0;
}
