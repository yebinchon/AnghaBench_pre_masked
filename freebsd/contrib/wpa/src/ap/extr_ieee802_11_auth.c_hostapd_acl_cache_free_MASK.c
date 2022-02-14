
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_cached_radius_acl {struct hostapd_cached_radius_acl* next; } ;


 int FUNC_0 (struct hostapd_cached_radius_acl*) ;

__attribute__((used)) static void FUNC_1(struct hostapd_cached_radius_acl *VAR_0)
{
 struct hostapd_cached_radius_acl *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
