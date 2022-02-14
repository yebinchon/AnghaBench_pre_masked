
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int reassociate; scalar_t__ normal_scans; scalar_t__ scan_runs; scalar_t__ disconnected; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_1)
{
 FUNC_0(VAR_0, "DPP: Trying to connect to the new network");
 VAR_1->disconnected = 0;
 VAR_1->reassociate = 1;
 VAR_1->scan_runs = 0;
 VAR_1->normal_scans = 0;
 FUNC_1(VAR_1);
 FUNC_2(VAR_1, 0, 0);
}
