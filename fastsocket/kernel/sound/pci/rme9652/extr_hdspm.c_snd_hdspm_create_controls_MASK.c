
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {unsigned int index; char* name; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct hdspm {struct snd_kcontrol** playback_mixer_ctls; scalar_t__ is_aes32; } ;


 unsigned int FUNC_0 (struct snd_kcontrol_new*) ;
 struct snd_kcontrol_new FUNC_1 (char*,int ) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_3 (struct snd_kcontrol_new*,struct hdspm*) ;
 struct snd_kcontrol_new* VAR_1 ;
 struct snd_kcontrol_new* VAR_2 ;
 struct snd_kcontrol_new VAR_3 ;

__attribute__((used)) static int FUNC_4(struct snd_card *VAR_4, struct hdspm * VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8;
 struct snd_kcontrol *VAR_9;


 if (VAR_5->is_aes32) {
  struct snd_kcontrol_new VAR_10 =
   FUNC_1("AES Lock Status", 0);

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1);
       VAR_6++) {
   VAR_8 = FUNC_2(VAR_4,
       FUNC_3(&VAR_1[VAR_6],
             VAR_5));
   if (VAR_8 < 0)
    return VAR_8;
  }
  for (VAR_6 = 1; VAR_6 <= 8; VAR_6++) {
   VAR_10.index = VAR_6;
   VAR_8 = FUNC_2(VAR_4,
       FUNC_3(&VAR_10, VAR_5));
   if (VAR_8 < 0)
    return VAR_8;
  }
 } else {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2);
       VAR_6++) {
   VAR_8 = FUNC_2(VAR_4,
       FUNC_3(&VAR_2[VAR_6],
             VAR_5));
   if (VAR_8 < 0)
    return VAR_8;
  }
 }







 VAR_3.name = "Chn";
 VAR_7 = VAR_0;







 for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6) {
  VAR_3.index = VAR_6 + 1;
  VAR_9 = FUNC_3(&VAR_3, VAR_5);
  VAR_8 = FUNC_2(VAR_4, VAR_9);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_5->playback_mixer_ctls[VAR_6] = VAR_9;
 }

 return 0;
}
