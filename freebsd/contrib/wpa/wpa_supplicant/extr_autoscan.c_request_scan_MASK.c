
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int scan_interval; int scan_req; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,int ) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_1)
{
 VAR_1->scan_req = VAR_0;

 if (FUNC_1(VAR_1))
  FUNC_0(VAR_1, VAR_1->scan_interval, 0);
}
