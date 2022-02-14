
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {int enable_oce; TYPE_1__* conf; } ;
struct TYPE_2__ {int mbo_cell_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_0 (struct wpabuf*,int) ;
 int FUNC_1 (struct wpabuf*,int ) ;
 int FUNC_2 (struct wpabuf*,int) ;

void FUNC_3(struct wpa_supplicant *VAR_7, struct wpabuf *VAR_8)
{
 u8 *VAR_9;

 FUNC_2(VAR_8, VAR_6);
 VAR_9 = FUNC_0(VAR_8, 1);

 FUNC_1(VAR_8, VAR_5);
 FUNC_2(VAR_8, VAR_1);

 FUNC_2(VAR_8, VAR_0);
 FUNC_2(VAR_8, 1);
 FUNC_2(VAR_8, VAR_7->conf->mbo_cell_capa);
 if (VAR_7->enable_oce & VAR_4) {
  FUNC_2(VAR_8, VAR_2);
  FUNC_2(VAR_8, 1);
  FUNC_2(VAR_8, VAR_3);
 }
 *VAR_9 = (u8 *) FUNC_0(VAR_8, 0) - VAR_9 - 1;
}
