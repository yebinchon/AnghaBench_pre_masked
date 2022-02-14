
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_neighbor_entry {scalar_t__ stationary; int ssid; int * bssid; int * civic; int * lci; int * nr; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hostapd_neighbor_entry *VAR_0)
{
 FUNC_1(VAR_0->nr);
 VAR_0->nr = ((void*)0);
 FUNC_1(VAR_0->lci);
 VAR_0->lci = ((void*)0);
 FUNC_1(VAR_0->civic);
 VAR_0->civic = ((void*)0);
 FUNC_0(VAR_0->bssid, 0, sizeof(VAR_0->bssid));
 FUNC_0(&VAR_0->ssid, 0, sizeof(VAR_0->ssid));
 VAR_0->stationary = 0;
}
