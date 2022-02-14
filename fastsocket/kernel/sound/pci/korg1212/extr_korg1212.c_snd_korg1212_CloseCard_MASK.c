
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_korg1212 {size_t cardState; int opencnt; int open_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_korg1212*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct snd_korg1212*) ;
 int FUNC_5 (struct snd_korg1212*) ;
 int FUNC_6 (struct snd_korg1212*,size_t) ;
 int* VAR_5 ;

__attribute__((used)) static int FUNC_7(struct snd_korg1212 * VAR_6)
{
 FUNC_0("K1212_DEBUG: CloseCard [%s] %d\n",
      VAR_5[VAR_6->cardState], VAR_6->opencnt);

 FUNC_1(&VAR_6->open_mutex);
 if (--(VAR_6->opencnt)) {
  FUNC_2(&VAR_6->open_mutex);
  return 0;
 }

        if (VAR_6->cardState == VAR_4) {
                int VAR_7 = FUNC_3(VAR_6, VAR_1,
                                VAR_2, 0, 0, 0);
  if (VAR_7)
   FUNC_0("K1212_DEBUG: CloseCard - RC = %d [%s]\n",
        VAR_7, VAR_5[VAR_6->cardState]);
  if (VAR_7 != VAR_0) {
   FUNC_2(&VAR_6->open_mutex);
                        return 0;
  }
        } else if (VAR_6->cardState > VAR_4) {
  FUNC_4(VAR_6);
        }

        if (VAR_6->cardState > VAR_3) {
  FUNC_5(VAR_6);
                FUNC_6(VAR_6, VAR_3);
 }

 FUNC_2(&VAR_6->open_mutex);
        return 0;
}
