
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_channel_data {int flag; int allowed_bw; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(const struct hostapd_channel_data *VAR_2)
{
 return !(VAR_2->flag & VAR_0) &&
  (VAR_2->allowed_bw & VAR_1);
}
