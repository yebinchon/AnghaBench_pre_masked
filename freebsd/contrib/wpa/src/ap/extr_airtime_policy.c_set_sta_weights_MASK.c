
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {struct sta_info* next; } ;
struct hostapd_data {struct sta_info* sta_list; } ;


 int FUNC_0 (struct hostapd_data*,struct sta_info*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct hostapd_data *VAR_0, unsigned int VAR_1)
{
 struct sta_info *VAR_2;

 for (VAR_2 = VAR_0->sta_list; VAR_2; VAR_2 = VAR_2->next)
  FUNC_0(VAR_0, VAR_2, VAR_1);
}
