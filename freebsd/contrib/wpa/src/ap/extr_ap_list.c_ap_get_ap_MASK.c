
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_iface {struct ap_info** ap_hash; } ;
struct ap_info {struct ap_info* hnext; int addr; } ;


 int VAR_0 ;
 size_t FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ,int const*,int ) ;

__attribute__((used)) static struct ap_info * FUNC_2(struct hostapd_iface *VAR_1, const u8 *VAR_2)
{
 struct ap_info *VAR_3;

 VAR_3 = VAR_1->ap_hash[FUNC_0(VAR_2)];
 while (VAR_3 != ((void*)0) && FUNC_1(VAR_3->addr, VAR_2, VAR_0) != 0)
  VAR_3 = VAR_3->hnext;
 return VAR_3;
}
