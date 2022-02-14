
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {int flags; scalar_t__ auth_alg; int addr; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int wpa; int ieee802_1x; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hostapd_data*,int ,int,int,int) ;

int FUNC_2(struct hostapd_data *VAR_6, struct sta_info *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 VAR_9 = FUNC_0(VAR_7->flags);
 VAR_8 = VAR_4 | VAR_5 | VAR_3;
 if (((!VAR_6->conf->ieee802_1x && !VAR_6->conf->wpa) ||
      VAR_7->auth_alg == VAR_0) &&
     VAR_7->flags & VAR_1)
  VAR_8 |= VAR_2;
 VAR_11 = VAR_9 & VAR_8;
 VAR_10 = VAR_9 | ~VAR_8;
 return FUNC_1(VAR_6, VAR_7->addr, VAR_9,
         VAR_11, VAR_10);
}
