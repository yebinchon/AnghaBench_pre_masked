
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {int card; struct snd_emu8000* driver_data; } ;
struct snd_emu8000 {int * memhdr; int * emu; scalar_t__ pcm; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_seq_device *VAR_0)
{
 struct snd_emu8000 *VAR_1;

 if (VAR_0->driver_data == ((void*)0))
  return 0;

 VAR_1 = VAR_0->driver_data;
 if (VAR_1->pcm)
  FUNC_0(VAR_0->card, VAR_1->pcm);
 if (VAR_1->emu)
  FUNC_1(VAR_1->emu);
 if (VAR_1->memhdr)
  FUNC_2(VAR_1->memhdr);
 VAR_1->emu = ((void*)0);
 VAR_1->memhdr = ((void*)0);
 return 0;
}
