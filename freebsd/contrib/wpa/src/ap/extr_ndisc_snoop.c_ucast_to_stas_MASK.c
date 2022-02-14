
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int flags; struct sta_info* next; } ;
struct hostapd_data {struct sta_info* sta_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_data*,struct sta_info*,int *,size_t) ;

__attribute__((used)) static void FUNC_1(struct hostapd_data *VAR_1, const u8 *VAR_2, size_t VAR_3)
{
 struct sta_info *VAR_4;

 for (VAR_4 = VAR_1->sta_list; VAR_4; VAR_4 = VAR_4->next) {
  if (!(VAR_4->flags & VAR_0))
   continue;
  FUNC_0(VAR_1, VAR_4, (u8 *) VAR_2, VAR_3);
 }
}
