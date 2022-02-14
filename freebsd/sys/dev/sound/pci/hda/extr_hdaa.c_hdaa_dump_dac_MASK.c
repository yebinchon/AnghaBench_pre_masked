
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdaa_widget {scalar_t__ enable; } ;
struct hdaa_pcm_devinfo {size_t playas; int dev; struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {struct hdaa_audio_as* as; TYPE_1__* chans; } ;
struct hdaa_audio_as {int* chans; int num_chans; scalar_t__* pins; } ;
typedef int nid_t ;
struct TYPE_2__ {int* io; int supp_pcm_size_rate; int supp_stream_formats; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct hdaa_pcm_devinfo*,scalar_t__,int ) ;
 struct hdaa_widget* FUNC_3 (struct hdaa_devinfo*,scalar_t__) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(struct hdaa_pcm_devinfo *VAR_0)
{
 struct hdaa_devinfo *VAR_1 = VAR_0->devinfo;
 struct hdaa_audio_as *VAR_2;
 struct hdaa_widget *VAR_3;
 nid_t *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_0->playas < 0)
  return;

 FUNC_0(VAR_0->dev, "Playback:\n");

 VAR_5 = VAR_1->as[VAR_0->playas].chans[0];
 FUNC_1(VAR_0->dev,
     VAR_1->chans[VAR_5].supp_stream_formats,
     VAR_1->chans[VAR_5].supp_pcm_size_rate);
 for (VAR_6 = 0; VAR_6 < VAR_1->as[VAR_0->playas].num_chans; VAR_6++) {
  VAR_5 = VAR_1->as[VAR_0->playas].chans[VAR_6];
  FUNC_0(VAR_0->dev, "            DAC:");
  for (VAR_4 = VAR_1->chans[VAR_5].io; *VAR_4 != -1; VAR_4++)
   FUNC_4(" %d", *VAR_4);
  FUNC_4("\n");
 }

 VAR_2 = &VAR_1->as[VAR_0->playas];
 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  if (VAR_2->pins[VAR_6] <= 0)
   continue;
  VAR_3 = FUNC_3(VAR_1, VAR_2->pins[VAR_6]);
  if (VAR_3 == ((void*)0) || VAR_3->enable == 0)
   continue;
  FUNC_0(VAR_0->dev, "\n");
  FUNC_2(VAR_0, VAR_2->pins[VAR_6], 0);
 }
 FUNC_0(VAR_0->dev, "\n");
}
