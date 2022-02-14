
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_korg1212 {size_t cardState; int playcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (struct snd_korg1212*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct snd_korg1212*,int ) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct snd_korg1212 * VAR_4)
{
 int VAR_5;

 FUNC_0("K1212_DEBUG: TriggerPlay [%s] %d\n",
      VAR_3[VAR_4->cardState], VAR_4->playcnt);

        if (VAR_4->playcnt++)
  return 0;

        FUNC_2(VAR_4, VAR_2);
        VAR_5 = FUNC_1(VAR_4, VAR_1, 0, 0, 0, 0);
 if (VAR_5)
  FUNC_0("K1212_DEBUG: TriggerPlay - RC = %d [%s]\n",
       VAR_5, VAR_3[VAR_4->cardState]);
        if (VAR_5 != VAR_0) {
                return 1;
        }
        return 0;
}
