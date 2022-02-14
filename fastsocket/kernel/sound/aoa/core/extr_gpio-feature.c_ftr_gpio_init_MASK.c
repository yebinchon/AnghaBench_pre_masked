
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mutex; int work; } ;
struct TYPE_6__ {int mutex; int work; } ;
struct TYPE_5__ {int mutex; int work; } ;
struct gpio_runtime {TYPE_3__ line_out_notify; TYPE_2__ line_in_notify; TYPE_1__ headphone_notify; scalar_t__ implementation_private; } ;
struct TYPE_8__ {int get_master; int set_master; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gpio_runtime*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char*,char*,int *,int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 TYPE_4__ VAR_25 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct gpio_runtime *VAR_26)
{
 FUNC_2("headphone-mute", ((void*)0),
   &VAR_9,
   &VAR_10);
 FUNC_2("amp-mute", ((void*)0),
   &VAR_0,
   &VAR_1);
 FUNC_2("lineout-mute", ((void*)0),
   &VAR_21,
   &VAR_22);
 FUNC_2("hw-reset", "audio-hw-reset",
   &VAR_11,
   &VAR_12);
 if (FUNC_2("master-mute", ((void*)0),
       &VAR_23,
       &VAR_24)) {
  VAR_25.set_master = VAR_3;
  VAR_25.get_master = VAR_2;
 }

 VAR_8 = FUNC_2("headphone-detect", ((void*)0),
      &VAR_5,
      &VAR_6);


 VAR_20 = FUNC_2("lineout-detect", "line-output-detect",
           &VAR_17,
           &VAR_18);
 VAR_16 = FUNC_2("linein-detect", "line-input-detect",
          &VAR_13,
          &VAR_14);

 FUNC_4(VAR_5);
 FUNC_4(VAR_17);
 FUNC_4(VAR_13);

 FUNC_3(VAR_8, &VAR_7);
 FUNC_3(VAR_20, &VAR_19);
 FUNC_3(VAR_16, &VAR_15);

 FUNC_1(VAR_26);
 VAR_26->implementation_private = 0;
 FUNC_0(&VAR_26->headphone_notify.work, VAR_4);
 FUNC_0(&VAR_26->line_in_notify.work, VAR_4);
 FUNC_0(&VAR_26->line_out_notify.work, VAR_4);
 FUNC_5(&VAR_26->headphone_notify.mutex);
 FUNC_5(&VAR_26->line_in_notify.mutex);
 FUNC_5(&VAR_26->line_out_notify.mutex);
}
