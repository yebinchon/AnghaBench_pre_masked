
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_radius_attr {int val; struct hostapd_radius_attr* next; } ;


 int FUNC_0 (struct hostapd_radius_attr*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct hostapd_radius_attr *VAR_0)
{
 struct hostapd_radius_attr *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_1(VAR_1->val);
  FUNC_0(VAR_1);
 }
}
