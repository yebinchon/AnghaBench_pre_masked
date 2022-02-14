
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t config; } ;
struct TYPE_6__ {TYPE_2__ pin; } ;
struct TYPE_4__ {int widget_cap; } ;
struct hdaa_widget {int type; int name; TYPE_3__ wclass; TYPE_1__ param; } ;


 char** VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 char** VAR_7 ;
 char** VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_3(struct hdaa_widget *VAR_9)
{
 const char *VAR_10;

 VAR_9->type = FUNC_0(VAR_9->param.widget_cap);
 switch (VAR_9->type) {
 case 134:
  VAR_10 = "audio output";
  break;
 case 136:
  VAR_10 = "audio input";
  break;
 case 135:
  VAR_10 = "audio mixer";
  break;
 case 133:
  VAR_10 = "audio selector";
  break;
 case 131:
  VAR_10 = "pin";
  break;
 case 130:
  VAR_10 = "power widget";
  break;
 case 128:
  VAR_10 = "volume widget";
  break;
 case 132:
  VAR_10 = "beep widget";
  break;
 case 129:
  VAR_10 = "vendor widget";
  break;
 default:
  VAR_10 = "unknown type";
  break;
 }
 FUNC_2(VAR_9->name, VAR_10, sizeof(VAR_9->name));

 if (VAR_9->type == 131) {
  uint32_t VAR_11;
  const char *VAR_12;
  int VAR_13, VAR_14;

  VAR_11 = VAR_9->wclass.pin.config;
  VAR_12 = VAR_8[(VAR_11 & VAR_5) >>
      VAR_6];
  VAR_13 = (VAR_11 & VAR_3) >>
      VAR_4;
  VAR_14 = (VAR_11 & VAR_1) >>
      VAR_2;
  FUNC_1(VAR_9->name, ": ", sizeof(VAR_9->name));
  FUNC_1(VAR_9->name, VAR_12, sizeof(VAR_9->name));
  FUNC_1(VAR_9->name, " (", sizeof(VAR_9->name));
  if (VAR_13 == 0 && VAR_14 != 0 && VAR_14 != 15) {
   FUNC_1(VAR_9->name, VAR_0[VAR_14], sizeof(VAR_9->name));
   FUNC_1(VAR_9->name, " ", sizeof(VAR_9->name));
  }
  FUNC_1(VAR_9->name, VAR_7[VAR_13], sizeof(VAR_9->name));
  FUNC_1(VAR_9->name, ")", sizeof(VAR_9->name));
 }
}
