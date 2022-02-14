
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
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct snd_ac97*) ;
 int FUNC_2 (struct snd_ac97*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int * VAR_7 ;

__attribute__((used)) static int FUNC_4(struct snd_ac97 * VAR_8)
{
 int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7); VAR_10++) {
  if ((VAR_9 = FUNC_3(VAR_8->bus->card, FUNC_1(&VAR_7[VAR_10], VAR_8))) < 0)
   return VAR_9;
 }
 FUNC_2(VAR_8, VAR_3, 0x0808);
 FUNC_2(VAR_8, VAR_4, 0x0808);
 FUNC_2(VAR_8, VAR_2, 0x0808);
 FUNC_2(VAR_8, VAR_1, 0x00da);
 FUNC_2(VAR_8, VAR_0, 0x0808);
 FUNC_2(VAR_8, VAR_6, 0xd612);
 FUNC_2(VAR_8, VAR_5, 0x1ba0);
 return 0;
}
