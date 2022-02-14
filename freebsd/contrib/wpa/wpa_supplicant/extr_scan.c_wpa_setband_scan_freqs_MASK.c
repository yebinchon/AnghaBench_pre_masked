
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * modes; } ;
struct wpa_supplicant {scalar_t__ setband; TYPE_1__ hw; } ;
struct wpa_driver_scan_params {scalar_t__ freqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct wpa_supplicant*,int ,struct wpa_driver_scan_params*) ;

__attribute__((used)) static void FUNC_1(struct wpa_supplicant *VAR_4,
       struct wpa_driver_scan_params *VAR_5)
{
 if (VAR_4->hw.modes == ((void*)0))
  return;
 if (VAR_5->freqs)
  return;
 if (VAR_4->setband == VAR_3)
  FUNC_0(VAR_4, VAR_0,
         VAR_5);
 else if (VAR_4->setband == VAR_2)
  FUNC_0(VAR_4, VAR_1,
         VAR_5);
}
