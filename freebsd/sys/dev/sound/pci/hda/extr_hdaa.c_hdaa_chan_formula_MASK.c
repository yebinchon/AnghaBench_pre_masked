
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdaa_devinfo {TYPE_1__* chans; struct hdaa_audio_as* as; } ;
struct hdaa_audio_as {size_t* chans; scalar_t__ hpredir; int pinset; } ;
struct TYPE_2__ {int channels; } ;


 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct hdaa_devinfo *VAR_0, int VAR_1,
    char *VAR_2, int VAR_3)
{
 struct hdaa_audio_as *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_0->as[VAR_1];
 VAR_5 = VAR_0->chans[VAR_4->chans[0]].channels;
 if (VAR_5 == 1)
  FUNC_0(VAR_2, VAR_3, "mono");
 else if (VAR_5 == 2) {
  if (VAR_4->hpredir < 0)
   VAR_2[0] = 0;
  else
   FUNC_0(VAR_2, VAR_3, "2.0");
 } else if (VAR_4->pinset == 0x0003)
  FUNC_0(VAR_2, VAR_3, "3.1");
 else if (VAR_4->pinset == 0x0005 || VAR_4->pinset == 0x0011)
  FUNC_0(VAR_2, VAR_3, "4.0");
 else if (VAR_4->pinset == 0x0007 || VAR_4->pinset == 0x0013)
  FUNC_0(VAR_2, VAR_3, "5.1");
 else if (VAR_4->pinset == 0x0017)
  FUNC_0(VAR_2, VAR_3, "7.1");
 else
  FUNC_0(VAR_2, VAR_3, "%dch", VAR_5);
 if (VAR_4->hpredir >= 0)
  FUNC_1(VAR_2, "+HP", VAR_3);
}
