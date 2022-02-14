
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {scalar_t__ plink_state; } ;
struct hostapd_data {int num_plinks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,struct sta_info*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(struct hostapd_data *VAR_4, struct sta_info *VAR_5)
{
 if (VAR_5->plink_state == VAR_1)
  VAR_4->num_plinks--;
 FUNC_0(VAR_3, VAR_0, VAR_5);
 FUNC_0(VAR_2, VAR_0, VAR_5);
}
