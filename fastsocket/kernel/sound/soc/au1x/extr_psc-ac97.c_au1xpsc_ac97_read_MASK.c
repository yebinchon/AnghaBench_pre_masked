
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;
struct au1xpsc_audio_data {int lock; } ;


 int FUNC_0 (struct au1xpsc_audio_data*) ;
 int FUNC_1 (struct au1xpsc_audio_data*) ;
 unsigned short VAR_0 ;
 int FUNC_2 (unsigned short) ;
 int VAR_1 ;
 int VAR_2 ;
 struct au1xpsc_audio_data* VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static unsigned short FUNC_9(struct snd_ac97 *VAR_4,
     unsigned short VAR_5)
{

 struct au1xpsc_audio_data *VAR_6 = VAR_3;
 unsigned short VAR_7, VAR_8, VAR_9;

 FUNC_5(VAR_2, FUNC_1(VAR_6));
 FUNC_4();

 VAR_8 = VAR_0;
 do {
  FUNC_6(&VAR_6->lock);

  FUNC_5(VAR_1 | FUNC_2(VAR_5),
     FUNC_0(VAR_6));
  FUNC_4();

  VAR_9 = 2000;
  while ((!(FUNC_3(FUNC_1(VAR_6)) & VAR_2))
   && --VAR_9)
   FUNC_8(2);

  VAR_7 = FUNC_3(FUNC_0(VAR_6)) & 0xffff;

  FUNC_5(VAR_2, FUNC_1(VAR_6));
  FUNC_4();

  FUNC_7(&VAR_6->lock);
 } while (--VAR_8 && !VAR_9);

 return VAR_8 ? VAR_7 : 0xffff;
}
