
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_rawmidi_substream {int dummy; } ;
struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct snd_ice1712*,int ,int) ;
 struct snd_rawmidi_substream* FUNC_2 (struct snd_ice1712*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct snd_rawmidi_substream*,int *,int) ;
 int FUNC_6 (struct snd_rawmidi_substream*) ;

__attribute__((used)) static void FUNC_7(struct snd_ice1712 *VAR_4)
{
 struct snd_rawmidi_substream *VAR_5;
 int VAR_6, VAR_7;
 u8 VAR_8[32];

 VAR_5 = FUNC_2(VAR_4, VAR_2);
 VAR_6 = 31 - FUNC_3(FUNC_0(VAR_4, VAR_1));
 if (VAR_6 > 0) {
  VAR_6 = FUNC_5(VAR_5, VAR_8, VAR_6);
  for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
   FUNC_4(VAR_8[VAR_7], FUNC_0(VAR_4, VAR_0));
 }



 FUNC_1(VAR_4, VAR_3,
   !FUNC_6(VAR_5));
}
