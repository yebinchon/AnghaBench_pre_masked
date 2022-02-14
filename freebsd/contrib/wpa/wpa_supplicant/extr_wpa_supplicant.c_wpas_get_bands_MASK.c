
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_modes; TYPE_1__* modes; } ;
struct wpa_supplicant {TYPE_2__ hw; } ;
struct TYPE_3__ {scalar_t__ num_channels; scalar_t__ mode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_0 (int const) ;

unsigned int FUNC_1(struct wpa_supplicant *VAR_8, const int *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11 = 0;

 if (VAR_9) {

  for (VAR_10 = 0; VAR_9[VAR_10]; VAR_10++)
   VAR_11 |= FUNC_0(VAR_9[VAR_10]);
 } else {




  for (VAR_10 = 0; VAR_10 < VAR_8->hw.num_modes; VAR_10++) {
   if (VAR_8->hw.modes[VAR_10].num_channels != 0) {
    if (VAR_8->hw.modes[VAR_10].mode ==
        VAR_6 ||
        VAR_8->hw.modes[VAR_10].mode ==
        VAR_7)
     VAR_11 |= VAR_0;
    else if (VAR_8->hw.modes[VAR_10].mode ==
      VAR_3)
     VAR_11 |= VAR_1;
    else if (VAR_8->hw.modes[VAR_10].mode ==
      VAR_4)
     VAR_11 |= VAR_2;
    else if (VAR_8->hw.modes[VAR_10].mode ==
      VAR_5)
     VAR_11 = VAR_0 | VAR_1 |
      VAR_2;
   }
  }
 }

 return VAR_11;
}
