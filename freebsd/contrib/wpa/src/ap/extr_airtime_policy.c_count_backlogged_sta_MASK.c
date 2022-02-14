
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int backlogged_until; int addr; struct sta_info* next; } ;
struct os_reltime {int dummy; } ;
struct hostapd_data {unsigned int num_backlogged_sta; struct sta_info* sta_list; } ;
struct hostap_sta_driver_data {scalar_t__ backlog_bytes; } ;


 scalar_t__ FUNC_0 (struct hostapd_data*,struct hostap_sta_driver_data*,int ) ;
 int FUNC_1 (struct os_reltime*) ;
 scalar_t__ FUNC_2 (struct os_reltime*,int *) ;
 int FUNC_3 (struct hostapd_data*,struct sta_info*,struct os_reltime*) ;

__attribute__((used)) static void FUNC_4(struct hostapd_data *VAR_0)
{
 struct sta_info *VAR_1;
 struct hostap_sta_driver_data VAR_2 = {};
 unsigned int VAR_3 = 0;
 struct os_reltime VAR_4;

 FUNC_1(&VAR_4);

 for (VAR_1 = VAR_0->sta_list; VAR_1; VAR_1 = VAR_1->next) {
  if (FUNC_0(VAR_0, &VAR_2, VAR_1->addr))
   continue;

  if (VAR_2.backlog_bytes > 0)
   FUNC_3(VAR_0, VAR_1, &VAR_4);
  if (FUNC_2(&VAR_4, &VAR_1->backlogged_until))
   VAR_3++;
 }
 VAR_0->num_backlogged_sta = VAR_3;
}
