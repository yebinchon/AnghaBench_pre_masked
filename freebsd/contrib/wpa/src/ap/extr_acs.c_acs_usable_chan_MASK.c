
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_channel_data {int flag; int survey_list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_channel_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hostapd_channel_data *VAR_1)
{
 return !FUNC_1(&VAR_1->survey_list) &&
  !(VAR_1->flag & VAR_0) &&
  FUNC_0(VAR_1);
}
