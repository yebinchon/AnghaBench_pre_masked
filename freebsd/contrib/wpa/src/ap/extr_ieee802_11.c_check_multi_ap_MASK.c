
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sta_info {int flags; int addr; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int multi_ap; } ;


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
 int* FUNC_0 (int const*,size_t,int ) ;
 int FUNC_1 (struct hostapd_data*,int ,int ,int ,char*,...) ;

__attribute__((used)) static u16 FUNC_2(struct hostapd_data *VAR_11, struct sta_info *VAR_12,
     const u8 *VAR_13, size_t VAR_14)
{
 u8 VAR_15 = 0;

 VAR_12->flags &= ~VAR_10;

 if (!VAR_11->conf->multi_ap)
  return VAR_9;

 if (VAR_13) {
  const u8 *VAR_16;

  VAR_16 = FUNC_0(VAR_13 + 4,
       VAR_14 - 4,
       VAR_6);
  if (VAR_16 && VAR_16[1] == 1) {
   VAR_15 = VAR_16[2];
  } else {
   FUNC_1(VAR_11, VAR_12->addr,
           VAR_4,
           VAR_3,
           "Multi-AP IE has missing or invalid Multi-AP subelement");
   return VAR_8;
  }
 }

 if (VAR_15 && VAR_15 != VAR_5)
  FUNC_1(VAR_11, VAR_12->addr, VAR_4,
          VAR_3,
          "Multi-AP IE with unexpected value 0x%02x",
          VAR_15);

 if (!(VAR_15 & VAR_5)) {
  if (VAR_11->conf->multi_ap & VAR_1)
   return VAR_9;

  FUNC_1(VAR_11, VAR_12->addr,
          VAR_4,
          VAR_3,
          "Non-Multi-AP STA tries to associate with backhaul-only BSS");
  return VAR_7;
 }

 if (!(VAR_11->conf->multi_ap & VAR_0))
  FUNC_1(VAR_11, VAR_12->addr, VAR_4,
          VAR_2,
          "Backhaul STA tries to associate with fronthaul-only BSS");

 VAR_12->flags |= VAR_10;
 return VAR_9;
}
