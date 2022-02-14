
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdaa_pcm_devinfo {int index; int playas; int recas; int digital; struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {int ascnt; int num_devs; struct hdaa_pcm_devinfo* devs; TYPE_1__* chans; int dev; struct hdaa_audio_as* as; } ;
struct hdaa_audio_as {scalar_t__ enable; scalar_t__ dir; int digital; int num_chans; size_t* chans; struct hdaa_pcm_devinfo* pdevinfo; } ;
struct TYPE_2__ {struct hdaa_pcm_devinfo* pdevinfo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(struct hdaa_devinfo *VAR_4)
{
 struct hdaa_audio_as *VAR_5 = VAR_4->as;
 int VAR_6, VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4->ascnt; VAR_6++) {
  if (VAR_5[VAR_6].enable == 0)
   continue;
  if (VAR_5[VAR_6].dir == VAR_0) {
   if (VAR_5[VAR_6].digital)
    VAR_12++;
   else
    VAR_10++;
  } else {
   if (VAR_5[VAR_6].digital)
    VAR_11++;
   else
    VAR_9++;
  }
 }
 VAR_4->num_devs =
     FUNC_2(VAR_10, VAR_9) + FUNC_2(VAR_12, VAR_11);
 VAR_4->devs =
     (struct hdaa_pcm_devinfo *)FUNC_1(
     VAR_4->num_devs * sizeof(struct hdaa_pcm_devinfo),
     VAR_1, VAR_3 | VAR_2);
 if (VAR_4->devs == ((void*)0)) {
  FUNC_0(VAR_4->dev,
      "Unable to allocate memory for devices\n");
  return;
 }
 for (VAR_6 = 0; VAR_6 < VAR_4->num_devs; VAR_6++) {
  VAR_4->devs[VAR_6].index = VAR_6;
  VAR_4->devs[VAR_6].devinfo = VAR_4;
  VAR_4->devs[VAR_6].playas = -1;
  VAR_4->devs[VAR_6].recas = -1;
  VAR_4->devs[VAR_6].digital = 255;
 }
 for (VAR_6 = 0; VAR_6 < VAR_4->ascnt; VAR_6++) {
  if (VAR_5[VAR_6].enable == 0)
   continue;
  for (VAR_7 = 0; VAR_7 < VAR_4->num_devs; VAR_7++) {
   if (VAR_4->devs[VAR_7].digital != 255 &&
       (!VAR_4->devs[VAR_7].digital) !=
       (!VAR_5[VAR_6].digital))
    continue;
   if (VAR_5[VAR_6].dir == VAR_0) {
    if (VAR_4->devs[VAR_7].recas >= 0)
     continue;
    VAR_4->devs[VAR_7].recas = VAR_6;
   } else {
    if (VAR_4->devs[VAR_7].playas >= 0)
     continue;
    VAR_4->devs[VAR_7].playas = VAR_6;
   }
   VAR_5[VAR_6].pdevinfo = &VAR_4->devs[VAR_7];
   for (VAR_8 = 0; VAR_8 < VAR_5[VAR_6].num_chans; VAR_8++) {
    VAR_4->chans[VAR_5[VAR_6].chans[VAR_8]].pdevinfo =
        &VAR_4->devs[VAR_7];
   }
   VAR_4->devs[VAR_7].digital = VAR_5[VAR_6].digital;
   break;
  }
 }
}
