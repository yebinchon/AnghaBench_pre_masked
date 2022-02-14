
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int idx; size_t key_len; int flags; scalar_t__ alg; } ;
struct TYPE_4__ {TYPE_1__ crypt; } ;
struct prism2_hostapd_param {TYPE_2__ u; int * sta_addr; int cmd; } ;
struct hostap_driver_data {int dummy; } ;
typedef enum wpa_alg { ____Placeholder_wpa_alg } wpa_alg ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct hostap_driver_data*,struct prism2_hostapd_param*,size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (int *,int,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int ) ;
 int * FUNC_6 (size_t) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_4, void *VAR_5,
         enum wpa_alg VAR_6, const u8 *VAR_7,
         int VAR_8, int VAR_9,
         const u8 *VAR_10, size_t VAR_11,
         const u8 *VAR_12, size_t VAR_13)
{
 struct hostap_driver_data *VAR_14 = VAR_5;
 struct prism2_hostapd_param *VAR_15;
 u8 *VAR_16;
 size_t VAR_17;
 int VAR_18 = 0;

 VAR_17 = sizeof(*VAR_15) + VAR_13;
 VAR_16 = FUNC_6(VAR_17);
 if (VAR_16 == ((void*)0))
  return -1;

 VAR_15 = (struct prism2_hostapd_param *) VAR_16;
 VAR_15->cmd = VAR_3;
 if (VAR_7 == ((void*)0))
  FUNC_3(VAR_15->sta_addr, 0xff, VAR_0);
 else
  FUNC_2(VAR_15->sta_addr, VAR_7, VAR_0);
 switch (VAR_6) {
 case 130:
  FUNC_5((char *) VAR_15->u.crypt.alg, "NONE",
      VAR_1);
  break;
 case 128:
  FUNC_5((char *) VAR_15->u.crypt.alg, "WEP",
      VAR_1);
  break;
 case 129:
  FUNC_5((char *) VAR_15->u.crypt.alg, "TKIP",
      VAR_1);
  break;
 case 131:
  FUNC_5((char *) VAR_15->u.crypt.alg, "CCMP",
      VAR_1);
  break;
 default:
  FUNC_4(VAR_16);
  return -1;
 }
 VAR_15->u.crypt.flags = VAR_9 ? VAR_2 : 0;
 VAR_15->u.crypt.idx = VAR_8;
 VAR_15->u.crypt.key_len = VAR_13;
 FUNC_2((u8 *) (VAR_15 + 1), VAR_12, VAR_13);

 if (FUNC_1(VAR_14, VAR_15, VAR_17)) {
  FUNC_7("Failed to set encryption.\n");
  VAR_18 = -1;
 }
 FUNC_0(VAR_16);

 return VAR_18;
}
