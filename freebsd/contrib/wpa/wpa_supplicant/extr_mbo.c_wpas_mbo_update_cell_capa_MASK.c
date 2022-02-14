
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* conf; } ;
struct TYPE_2__ {int mbo_cell_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*,int*,int) ;
 int FUNC_4 (struct wpa_supplicant*) ;

void FUNC_5(struct wpa_supplicant *VAR_4, u8 VAR_5)
{
 u8 VAR_6[7];

 if (VAR_4->conf->mbo_cell_capa == VAR_5) {
  FUNC_1(VAR_1,
      "MBO: Cellular capability already set to %u",
      VAR_5);
  return;
 }

 VAR_4->conf->mbo_cell_capa = VAR_5;

 VAR_6[0] = VAR_3;
 VAR_6[1] = 5;
 FUNC_0(VAR_6 + 2, VAR_2);
 VAR_6[5] = VAR_0;
 VAR_6[6] = VAR_5;

 FUNC_3(VAR_4, VAR_6, 7);
 FUNC_2(VAR_4);
 FUNC_4(VAR_4);
}
