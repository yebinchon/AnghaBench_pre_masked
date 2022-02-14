
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sta_info {int supported_rates; int supported_rates_len; int addr; } ;
struct ieee802_11_elems {int supp_rates_len; int ext_supp_rates_len; int ext_supp_rates; int supp_rates; } ;
struct hostapd_data {TYPE_1__* iface; } ;
struct TYPE_4__ {scalar_t__ mode; } ;
struct TYPE_3__ {TYPE_2__* current_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hostapd_data*,int ,int ,int ,char*,...) ;
 int FUNC_1 (int ,int,int ,int,int ,int) ;

__attribute__((used)) static u16 FUNC_2(struct hostapd_data *VAR_5, struct sta_info *VAR_6,
      struct ieee802_11_elems *VAR_7)
{

 if (VAR_5->iface->current_mode &&
     VAR_5->iface->current_mode->mode == VAR_1)
  return VAR_3;

 if (!VAR_7->supp_rates) {
  FUNC_0(VAR_5, VAR_6->addr, VAR_2,
          VAR_0,
          "No supported rates element in AssocReq");
  return VAR_4;
 }

 if (VAR_7->supp_rates_len + VAR_7->ext_supp_rates_len >
     sizeof(VAR_6->supported_rates)) {
  FUNC_0(VAR_5, VAR_6->addr, VAR_2,
          VAR_0,
          "Invalid supported rates element length %d+%d",
          VAR_7->supp_rates_len,
          VAR_7->ext_supp_rates_len);
  return VAR_4;
 }

 VAR_6->supported_rates_len = FUNC_1(
  VAR_6->supported_rates, sizeof(VAR_6->supported_rates),
  VAR_7->supp_rates, VAR_7->supp_rates_len,
  VAR_7->ext_supp_rates, VAR_7->ext_supp_rates_len);

 return VAR_3;
}
