
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {scalar_t__ agreed_to_steer; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int disassoc_low_ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;
 int FUNC_1 (struct hostapd_data*,struct sta_info*,int ) ;
 int FUNC_2 (struct hostapd_data*,int const*,int ) ;
 int FUNC_3 (struct hostapd_data*,int const*,int ,int ,char*) ;

void FUNC_4(struct hostapd_data *VAR_3, const u8 *VAR_4)
{
 struct sta_info *VAR_5 = FUNC_0(VAR_3, VAR_4);

 if (!VAR_5 || !VAR_3->conf->disassoc_low_ack || VAR_5->agreed_to_steer)
  return;

 FUNC_3(VAR_3, VAR_4, VAR_1,
         VAR_0,
         "disconnected due to excessive missing ACKs");
 FUNC_2(VAR_3, VAR_4, VAR_2);
 FUNC_1(VAR_3, VAR_5, VAR_2);
}
