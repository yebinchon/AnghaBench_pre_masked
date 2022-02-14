
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {struct sta_info* hnext; int addr; } ;
struct hostapd_data {struct sta_info** sta_hash; } ;


 size_t FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ,int const*,int) ;

struct sta_info * FUNC_2(struct hostapd_data *VAR_0, const u8 *VAR_1)
{
 struct sta_info *VAR_2;

 VAR_2 = VAR_0->sta_hash[FUNC_0(VAR_1)];
 while (VAR_2 != ((void*)0) && FUNC_1(VAR_2->addr, VAR_1, 6) != 0)
  VAR_2 = VAR_2->hnext;
 return VAR_2;
}
