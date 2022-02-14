
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {int dummy; } ;


 int FUNC_0 (struct hostapd_iface*,int,int) ;
 int FUNC_1 (struct hostapd_iface*,int*) ;
 int FUNC_2 (struct hostapd_iface*,int*) ;

__attribute__((used)) static int FUNC_3(struct hostapd_iface *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4;


 VAR_3 = FUNC_1(VAR_0, &VAR_4);
 if (VAR_3 < 0)
  return 0;


 VAR_1 = FUNC_2(VAR_0, &VAR_2);


 return FUNC_0(VAR_0, VAR_3, VAR_1);
}
