
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_radius_server {struct hostapd_radius_server* shared_secret; } ;


 int FUNC_0 (struct hostapd_radius_server*) ;

__attribute__((used)) static void FUNC_1(struct hostapd_radius_server *VAR_0,
           int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0(VAR_0[VAR_2].shared_secret);
 }
 FUNC_0(VAR_0);
}
