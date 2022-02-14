
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int hs20_release; int anqp_domain_id; scalar_t__ disable_dgaf; int hs20; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int*,int ) ;

u8 * FUNC_2(struct hostapd_data *VAR_5, u8 *VAR_6)
{
 u8 VAR_7;
 if (!VAR_5->conf->hs20)
  return VAR_6;
 *VAR_6++ = VAR_4;
 *VAR_6++ = VAR_5->conf->hs20_release < 2 ? 5 : 7;
 FUNC_0(VAR_6, VAR_3);
 VAR_6 += 3;
 *VAR_6++ = VAR_2;
 VAR_7 = (VAR_5->conf->hs20_release - 1) << 4;
 if (VAR_5->conf->hs20_release >= 2)
  VAR_7 |= VAR_0;
 if (VAR_5->conf->disable_dgaf)
  VAR_7 |= VAR_1;
 *VAR_6++ = VAR_7;
 if (VAR_5->conf->hs20_release >= 2) {
  FUNC_1(VAR_6, VAR_5->conf->anqp_domain_id);
  VAR_6 += 2;
 }

 return VAR_6;
}
