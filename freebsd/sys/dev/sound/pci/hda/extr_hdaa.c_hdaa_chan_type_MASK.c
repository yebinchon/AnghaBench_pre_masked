
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
struct TYPE_4__ {TYPE_1__ pin; } ;
struct hdaa_widget {scalar_t__ enable; scalar_t__ type; TYPE_2__ wclass; } ;
struct hdaa_devinfo {struct hdaa_audio_as* as; } ;
struct hdaa_audio_as {int * pins; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct hdaa_widget* FUNC_1 (struct hdaa_devinfo*,int ) ;

__attribute__((used)) static int
FUNC_2(struct hdaa_devinfo *VAR_1, int VAR_2)
{
 struct hdaa_audio_as *VAR_3;
 struct hdaa_widget *VAR_4;
 int VAR_5, VAR_6 = -1, VAR_7;

 VAR_3 = &VAR_1->as[VAR_2];
 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  VAR_4 = FUNC_1(VAR_1, VAR_3->pins[VAR_5]);
  if (VAR_4 == ((void*)0) || VAR_4->enable == 0 || VAR_4->type !=
      VAR_0)
   continue;
  VAR_7 = FUNC_0(VAR_4->wclass.pin.config);
  if (VAR_6 == -1)
   VAR_6 = VAR_7;
  else if (VAR_6 != VAR_7) {
   VAR_6 = -2;
   break;
  }
 }
 return (VAR_6);
}
