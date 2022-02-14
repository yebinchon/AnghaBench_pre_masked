
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdaa_devinfo {int ascnt; int num_chans; struct hdaa_chan* chans; int dev; struct hdaa_audio_as* as; } ;
struct TYPE_2__ {int fmtlist; } ;
struct hdaa_chan {int as; int asindex; int dir; struct hdaa_devinfo* devinfo; int fmtlist; TYPE_1__ caps; } ;
struct hdaa_audio_as {scalar_t__ enable; int num_chans; scalar_t__ dir; int* chans; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hdaa_chan*) ;
 scalar_t__ FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (struct hdaa_chan*,int,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct hdaa_devinfo *VAR_6)
{
 struct hdaa_audio_as *VAR_7 = VAR_6->as;
 int VAR_8, VAR_9, VAR_10 = 0, VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_6->ascnt; VAR_9++) {
  if (VAR_7[VAR_9].enable)
   VAR_10 += VAR_7[VAR_9].num_chans;
 }
 if (VAR_6->num_chans == 0) {
  VAR_6->chans = (struct hdaa_chan *)FUNC_2(
      sizeof(struct hdaa_chan) * VAR_10,
      VAR_1, VAR_3 | VAR_2);
  if (VAR_6->chans == ((void*)0)) {
   FUNC_0(VAR_6->dev,
       "Channels memory allocation failed!\n");
   return;
  }
 } else {
  VAR_6->chans = (struct hdaa_chan *)FUNC_3(VAR_6->chans,
      sizeof(struct hdaa_chan) * (VAR_6->num_chans + VAR_10),
      VAR_1, VAR_3 | VAR_2);
  if (VAR_6->chans == ((void*)0)) {
   VAR_6->num_chans = 0;
   FUNC_0(VAR_6->dev,
       "Channels memory allocation failed!\n");
   return;
  }

  for (VAR_9 = 0; VAR_9 < VAR_6->num_chans; VAR_9++)
   VAR_6->chans[VAR_9].caps.fmtlist = VAR_6->chans[VAR_9].fmtlist;
 }
 VAR_11 = VAR_6->num_chans;
 VAR_6->num_chans += VAR_10;

 for (VAR_9 = VAR_11; VAR_9 < VAR_11 + VAR_10; VAR_9++) {
  VAR_6->chans[VAR_9].devinfo = VAR_6;
  VAR_6->chans[VAR_9].as = -1;
 }


 for (VAR_9 = 0; VAR_9 < VAR_6->ascnt; VAR_9++) {
  if (VAR_7[VAR_9].enable == 0)
   continue;
  for (VAR_8 = 0; VAR_8 < VAR_7[VAR_9].num_chans; VAR_8++) {
   VAR_6->chans[VAR_11].as = VAR_9;
   VAR_6->chans[VAR_11].asindex = VAR_8;
   VAR_6->chans[VAR_11].dir =
       (VAR_7[VAR_9].dir == VAR_0) ? VAR_5 : VAR_4;
   FUNC_1(&VAR_6->chans[VAR_11]);
   VAR_7[VAR_9].chans[VAR_8] = VAR_11;
   VAR_11++;
  }
 }
}
