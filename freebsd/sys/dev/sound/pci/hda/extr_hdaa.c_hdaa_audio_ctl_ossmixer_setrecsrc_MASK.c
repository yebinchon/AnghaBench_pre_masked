
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct snd_mixer {int dummy; } ;
struct hdaa_widget {scalar_t__ enable; } ;
struct hdaa_pcm_devinfo {size_t recas; int recsrc; scalar_t__ playas; scalar_t__ index; struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {struct hdaa_chan* chans; struct hdaa_audio_as* as; } ;
struct hdaa_chan {scalar_t__* io; } ;
struct hdaa_audio_ctl {scalar_t__ enable; int ossmask; scalar_t__* devmute; scalar_t__* devright; scalar_t__* devleft; TYPE_1__* widget; } ;
struct hdaa_audio_as {int num_chans; size_t* chans; int mixed; } ;
struct TYPE_2__ {scalar_t__ bindas; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdaa_pcm_devinfo*,int) ;
 struct hdaa_audio_ctl* FUNC_1 (struct hdaa_devinfo*,int*) ;
 int FUNC_2 (struct hdaa_pcm_devinfo*,int,scalar_t__,int ) ;
 int FUNC_3 (struct hdaa_devinfo*) ;
 int FUNC_4 (struct hdaa_devinfo*) ;
 struct hdaa_widget* FUNC_5 (struct hdaa_devinfo*,scalar_t__) ;
 struct hdaa_pcm_devinfo* FUNC_6 (struct snd_mixer*) ;
 int FUNC_7 (struct snd_mixer*) ;

__attribute__((used)) static uint32_t
FUNC_8(struct snd_mixer *VAR_1, uint32_t VAR_2)
{
 struct hdaa_pcm_devinfo *VAR_3 = FUNC_6(VAR_1);
 struct hdaa_devinfo *VAR_4 = VAR_3->devinfo;
 struct hdaa_widget *VAR_5;
 struct hdaa_audio_as *VAR_6;
 struct hdaa_audio_ctl *VAR_7;
 struct hdaa_chan *VAR_8;
 int VAR_9, VAR_10;
 uint32_t VAR_11 = 0xffffffff;

 FUNC_3(VAR_4);
 if (VAR_3->recas < 0) {
  FUNC_4(VAR_4);
  return (0);
 }
 VAR_6 = &VAR_4->as[VAR_3->recas];


 if (!VAR_6->mixed) {
  FUNC_4(VAR_4);
  return (FUNC_7(VAR_1));
 }


 for (VAR_10 = 0; VAR_10 < VAR_6->num_chans; VAR_10++) {
  VAR_8 = &VAR_4->chans[VAR_6->chans[VAR_10]];
  for (VAR_9 = 0; VAR_8->io[VAR_9] >= 0; VAR_9++) {
   VAR_5 = FUNC_5(VAR_4, VAR_8->io[VAR_9]);
   if (VAR_5 == ((void*)0) || VAR_5->enable == 0)
    continue;
   VAR_11 &= FUNC_2(VAR_3, VAR_2,
       VAR_8->io[VAR_9], 0);
  }
 }
 if (VAR_11 == 0xffffffff)
  VAR_11 = 0;






 VAR_9 = 0;
 while ((VAR_7 = FUNC_1(VAR_4, &VAR_9)) != ((void*)0)) {
  if (VAR_7->enable == 0 ||
      !(VAR_7->ossmask & VAR_3->recsrc))
   continue;
  if (!((VAR_3->playas >= 0 &&
      VAR_7->widget->bindas == VAR_3->playas) ||
      (VAR_3->recas >= 0 &&
      VAR_7->widget->bindas == VAR_3->recas) ||
      (VAR_3->index == 0 &&
      VAR_7->widget->bindas == -2)))
   continue;
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   if (VAR_3->recsrc & (1 << VAR_10)) {
    VAR_7->devleft[VAR_10] = 0;
    VAR_7->devright[VAR_10] = 0;
    VAR_7->devmute[VAR_10] = 0;
   }
  }
 }





 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if ((VAR_11 | VAR_3->recsrc) & (1 << VAR_10))
   FUNC_0(VAR_3, VAR_10);
 }

 VAR_3->recsrc = VAR_11;
 FUNC_4(VAR_4);
 return (VAR_11);
}
