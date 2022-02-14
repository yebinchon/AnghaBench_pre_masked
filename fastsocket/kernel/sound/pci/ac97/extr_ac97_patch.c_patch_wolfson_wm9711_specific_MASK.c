
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {TYPE_1__* bus; } ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct snd_ac97*) ;
 int FUNC_2 (struct snd_ac97*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_4(struct snd_ac97 * VAR_7)
{
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6); VAR_9++) {
  if ((VAR_8 = FUNC_3(VAR_7->bus->card, FUNC_1(&VAR_6[VAR_9], VAR_7))) < 0)
   return VAR_8;
 }
 FUNC_2(VAR_7, VAR_2, 0x0808);
 FUNC_2(VAR_7, VAR_3, 0x0808);
 FUNC_2(VAR_7, VAR_5, 0x0808);
 FUNC_2(VAR_7, VAR_0, 0x0808);
 FUNC_2(VAR_7, VAR_4, 0x0808);
 FUNC_2(VAR_7, VAR_1, 0x0000);
 return 0;
}
