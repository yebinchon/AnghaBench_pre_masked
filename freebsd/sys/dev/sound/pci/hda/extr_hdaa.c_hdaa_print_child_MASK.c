
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_pcm_devinfo {size_t playas; size_t recas; } ;
struct hdaa_devinfo {struct hdaa_audio_as* as; } ;
struct hdaa_audio_as {scalar_t__* pins; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct hdaa_devinfo* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, device_t VAR_1)
{
 struct hdaa_devinfo *VAR_2 = FUNC_3(VAR_0);
 struct hdaa_pcm_devinfo *VAR_3 =
     (struct hdaa_pcm_devinfo *)FUNC_2(VAR_1);
 struct hdaa_audio_as *VAR_4;
 int VAR_5, VAR_6 = 1, VAR_7;

 VAR_5 = FUNC_1(VAR_0, VAR_1);
 VAR_5 += FUNC_4(" at nid ");
 if (VAR_3->playas >= 0) {
  VAR_4 = &VAR_2->as[VAR_3->playas];
  for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
   if (VAR_4->pins[VAR_7] <= 0)
    continue;
   VAR_5 += FUNC_4("%s%d", VAR_6 ? "" : ",", VAR_4->pins[VAR_7]);
   VAR_6 = 0;
  }
 }
 if (VAR_3->recas >= 0) {
  if (VAR_3->playas >= 0) {
   VAR_5 += FUNC_4(" and ");
   VAR_6 = 1;
  }
  VAR_4 = &VAR_2->as[VAR_3->recas];
  for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
   if (VAR_4->pins[VAR_7] <= 0)
    continue;
   VAR_5 += FUNC_4("%s%d", VAR_6 ? "" : ",", VAR_4->pins[VAR_7]);
   VAR_6 = 0;
  }
 }
 VAR_5 += FUNC_0(VAR_0, VAR_1);

 return (VAR_5);
}
