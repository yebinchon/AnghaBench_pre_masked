
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wpa_scan_res {int caps; scalar_t__ freq; scalar_t__ level; scalar_t__ ie_len; } ;
struct wpa_bss {int caps; scalar_t__ freq; scalar_t__ level; scalar_t__ ie_len; } ;


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
 int FUNC_0 (struct wpa_bss const*,struct wpa_scan_res const*,int ) ;
 scalar_t__ FUNC_1 (struct wpa_bss const*,struct wpa_scan_res const*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(const struct wpa_bss *VAR_16,
          const struct wpa_scan_res *VAR_17)
{
 u32 VAR_18 = 0;
 int VAR_19 = VAR_16->caps ^ VAR_17->caps;

 if (VAR_16->freq != VAR_17->freq)
  VAR_18 |= VAR_5;

 if (VAR_16->level != VAR_17->level)
  VAR_18 |= VAR_11;

 if (VAR_19 & VAR_1)
  VAR_18 |= VAR_8;

 if (VAR_19 & VAR_0)
  VAR_18 |= VAR_7;

 if (VAR_16->ie_len == VAR_17->ie_len &&
     FUNC_1(VAR_16 + 1, VAR_17 + 1, VAR_16->ie_len) == 0)
  return VAR_18;
 VAR_18 |= VAR_6;

 if (!FUNC_0(VAR_16, VAR_17, VAR_14))
  VAR_18 |= VAR_12;

 if (!FUNC_0(VAR_16, VAR_17, VAR_3))
  VAR_18 |= VAR_10;

 if (!FUNC_0(VAR_16, VAR_17, VAR_15))
  VAR_18 |= VAR_13;

 if (!FUNC_0(VAR_16, VAR_17, VAR_4) ||
     !FUNC_0(VAR_16, VAR_17, VAR_2))
  VAR_18 |= VAR_9;

 return VAR_18;
}
