
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wmm_information_element {scalar_t__ qos_info; } ;
struct sta_info {scalar_t__ qosinfo; int flags; int addr; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ wmm_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hostapd_data*,int const*,size_t) ;
 int FUNC_1 (struct hostapd_data*,int ,int ,int ,char*) ;

__attribute__((used)) static u16 FUNC_2(struct hostapd_data *VAR_5, struct sta_info *VAR_6,
       const u8 *VAR_7, size_t VAR_8)
{
 VAR_6->flags &= ~VAR_4;
 VAR_6->qosinfo = 0;
 if (VAR_7 && VAR_5->conf->wmm_enabled) {
  struct wmm_information_element *VAR_9;

  if (!FUNC_0(VAR_5, VAR_7, VAR_8)) {
   FUNC_1(VAR_5, VAR_6->addr,
           VAR_1,
           VAR_0,
           "invalid WMM element in association "
           "request");
   return VAR_3;
  }

  VAR_6->flags |= VAR_4;
  VAR_9 = (struct wmm_information_element *) VAR_7;
  VAR_6->qosinfo = VAR_9->qos_info;
 }
 return VAR_2;
}
