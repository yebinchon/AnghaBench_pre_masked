
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int idx; int const* seq; } ;
struct TYPE_4__ {TYPE_1__ crypt; } ;
struct prism2_hostapd_param {TYPE_2__ u; int * sta_addr; int cmd; } ;
struct hostap_driver_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hostap_driver_data*,struct prism2_hostapd_param*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int,int) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2, void *VAR_3, const u8 *VAR_4,
        int VAR_5, u8 *VAR_6)
{
 struct hostap_driver_data *VAR_7 = VAR_3;
 struct prism2_hostapd_param *VAR_8;
 u8 *VAR_9;
 size_t VAR_10;
 int VAR_11 = 0;

 VAR_10 = sizeof(*VAR_8) + 32;
 VAR_9 = FUNC_4(VAR_10);
 if (VAR_9 == ((void*)0))
  return -1;

 VAR_8 = (struct prism2_hostapd_param *) VAR_9;
 VAR_8->cmd = VAR_1;
 if (VAR_4 == ((void*)0))
  FUNC_3(VAR_8->sta_addr, 0xff, VAR_0);
 else
  FUNC_2(VAR_8->sta_addr, VAR_4, VAR_0);
 VAR_8->u.crypt.idx = VAR_5;

 if (FUNC_0(VAR_7, VAR_8, VAR_10)) {
  FUNC_5("Failed to get encryption.\n");
  VAR_11 = -1;
 } else {
  FUNC_2(VAR_6, VAR_8->u.crypt.seq, 8);
 }
 FUNC_1(VAR_9);

 return VAR_11;
}
