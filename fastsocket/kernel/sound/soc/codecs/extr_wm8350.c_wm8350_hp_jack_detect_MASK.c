
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int report; struct snd_soc_jack* jack; } ;
struct TYPE_3__ {int report; struct snd_soc_jack* jack; } ;
struct wm8350_data {TYPE_2__ hpr; TYPE_1__ hpl; } ;
struct wm8350 {int dummy; } ;
struct snd_soc_jack {int dummy; } ;
struct snd_soc_codec {struct wm8350* control_data; struct wm8350_data* private_data; } ;
typedef enum wm8350_jack { ____Placeholder_wm8350_jack } wm8350_jack ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct wm8350*,int,struct wm8350_data*) ;
 int FUNC_1 (struct wm8350*,int ,int) ;
 int FUNC_2 (struct wm8350*,int) ;

int FUNC_3(struct snd_soc_codec *VAR_8, enum wm8350_jack VAR_9,
     struct snd_soc_jack *VAR_10, int VAR_11)
{
 struct wm8350_data *VAR_12 = VAR_8->private_data;
 struct wm8350 *VAR_13 = VAR_8->control_data;
 int VAR_14;
 int VAR_15;

 switch (VAR_9) {
 case 129:
  VAR_12->hpl.jack = VAR_10;
  VAR_12->hpl.report = VAR_11;
  VAR_14 = VAR_1;
  VAR_15 = VAR_4;
  break;

 case 128:
  VAR_12->hpr.jack = VAR_10;
  VAR_12->hpr.report = VAR_11;
  VAR_14 = VAR_2;
  VAR_15 = VAR_5;
  break;

 default:
  return -VAR_0;
 }

 FUNC_1(VAR_13, VAR_6, VAR_7);
 FUNC_1(VAR_13, VAR_3, VAR_15);


 FUNC_0(VAR_13, VAR_14, VAR_12);

 FUNC_2(VAR_13, VAR_14);

 return 0;
}
