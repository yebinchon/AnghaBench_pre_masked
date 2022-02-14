
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_pcm_devinfo {size_t playas; size_t recas; } ;
struct hdaa_devinfo {struct hdaa_audio_as* as; } ;
struct hdaa_audio_as {scalar_t__* pins; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 struct hdaa_devinfo* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,...) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct hdaa_devinfo *VAR_4 = FUNC_1(VAR_0);
 struct hdaa_pcm_devinfo *VAR_5 =
     (struct hdaa_pcm_devinfo *)FUNC_0(VAR_1);
 struct hdaa_audio_as *VAR_6;
 int VAR_7 = 1, VAR_8, VAR_9 = 0;

 VAR_9 += FUNC_2(VAR_2 + VAR_9, VAR_3 - VAR_9, "nid=");
 if (VAR_5->playas >= 0) {
  VAR_6 = &VAR_4->as[VAR_5->playas];
  for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
   if (VAR_6->pins[VAR_8] <= 0)
    continue;
   VAR_9 += FUNC_2(VAR_2 + VAR_9, VAR_3 - VAR_9,
       "%s%d", VAR_7 ? "" : ",", VAR_6->pins[VAR_8]);
   VAR_7 = 0;
  }
 }
 if (VAR_5->recas >= 0) {
  VAR_6 = &VAR_4->as[VAR_5->recas];
  for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
   if (VAR_6->pins[VAR_8] <= 0)
    continue;
   VAR_9 += FUNC_2(VAR_2 + VAR_9, VAR_3 - VAR_9,
       "%s%d", VAR_7 ? "" : ",", VAR_6->pins[VAR_8]);
   VAR_7 = 0;
  }
 }
 return (0);
}
