
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * jack; } ;
struct TYPE_5__ {int * jack; } ;
struct wm8350_data {TYPE_3__ hpr; TYPE_2__ hpl; } ;
struct wm8350 {int dummy; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int delayed_work; struct wm8350_data* private_data; struct wm8350* control_data; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 struct snd_soc_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct wm8350*,int ,int) ;
 int FUNC_5 (struct wm8350*,int ) ;
 int FUNC_6 (struct wm8350*,int ) ;
 int FUNC_7 (struct snd_soc_codec*,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_10)
{
 struct snd_soc_device *VAR_11 = FUNC_2(VAR_10);
 struct snd_soc_codec *VAR_12 = VAR_11->card->codec;
 struct wm8350 *VAR_13 = VAR_12->control_data;
 struct wm8350_data *VAR_14 = VAR_12->private_data;
 int VAR_15;

 FUNC_4(VAR_13, VAR_4,
     VAR_5 | VAR_6);
 FUNC_4(VAR_13, VAR_7, VAR_9);

 FUNC_6(VAR_13, VAR_2);
 FUNC_6(VAR_13, VAR_3);
 FUNC_5(VAR_13, VAR_2);
 FUNC_5(VAR_13, VAR_3);

 VAR_14->hpl.jack = ((void*)0);
 VAR_14->hpr.jack = ((void*)0);


 VAR_15 = FUNC_0(&VAR_12->delayed_work);



 if (VAR_15) {
  FUNC_3(&VAR_12->delayed_work, 0);
  FUNC_1();
 }

 FUNC_7(VAR_12, VAR_0);

 FUNC_4(VAR_13, VAR_8, VAR_1);

 return 0;
}
