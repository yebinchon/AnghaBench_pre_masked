
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {struct ap_info** ap_hash; } ;
struct ap_info {int addr; struct ap_info* hnext; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct hostapd_iface *VAR_0, struct ap_info *VAR_1)
{
 VAR_1->hnext = VAR_0->ap_hash[FUNC_0(VAR_1->addr)];
 VAR_0->ap_hash[FUNC_0(VAR_1->addr)] = VAR_1;
}
