
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wpa_supplicant {int current_bss; } ;
struct wpa_bss {int caps; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct wpa_bss*,int ,int ) ;

__attribute__((used)) static u32 FUNC_1(struct wpa_supplicant *VAR_17, struct wpa_bss *VAR_18)
{
 u32 VAR_19 = 0;

 VAR_19 |= VAR_1;






 if (VAR_18->caps & VAR_14)
  VAR_19 |= VAR_8;
 if (VAR_18->caps & VAR_12)
  VAR_19 |= VAR_6;
 if (VAR_18->caps & VAR_9)
  VAR_19 |= VAR_0;
 if (VAR_18->caps & VAR_13)
  VAR_19 |= VAR_7;
 if (VAR_18->caps & VAR_10)
  VAR_19 |= VAR_2;
 if (VAR_18->caps & VAR_11)
  VAR_19 |= VAR_4;
 if (FUNC_0(VAR_18, VAR_17->current_bss, VAR_16))
  VAR_19 |= VAR_5;
 if (FUNC_0(VAR_18, VAR_17->current_bss, VAR_15))
  VAR_19 |= VAR_3;

 return VAR_19;
}
