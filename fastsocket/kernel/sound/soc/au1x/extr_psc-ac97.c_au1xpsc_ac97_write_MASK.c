
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;
struct au1xpsc_audio_data {int lock; } ;


 int FUNC_0 (struct au1xpsc_audio_data*) ;
 int FUNC_1 (struct au1xpsc_audio_data*) ;
 unsigned int VAR_0 ;
 unsigned short FUNC_2 (unsigned short) ;
 unsigned short VAR_1 ;
 struct au1xpsc_audio_data* VAR_2 ;
 unsigned short FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned short,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct snd_ac97 *VAR_3, unsigned short VAR_4,
    unsigned short VAR_5)
{

 struct au1xpsc_audio_data *VAR_6 = VAR_2;
 unsigned int VAR_7, VAR_8;

 FUNC_5(VAR_1, FUNC_1(VAR_6));
 FUNC_4();

 VAR_8 = VAR_0;
 do {
  FUNC_6(&VAR_6->lock);

  FUNC_5(FUNC_2(VAR_4) | (VAR_5 & 0xffff),
     FUNC_0(VAR_6));
  FUNC_4();

  VAR_7 = 2000;
  while ((!(FUNC_3(FUNC_1(VAR_6)) & VAR_1))
         && --VAR_7)
   FUNC_8(2);

  FUNC_5(VAR_1, FUNC_1(VAR_6));
  FUNC_4();

  FUNC_7(&VAR_6->lock);
 } while (--VAR_8 && !VAR_7);
}
