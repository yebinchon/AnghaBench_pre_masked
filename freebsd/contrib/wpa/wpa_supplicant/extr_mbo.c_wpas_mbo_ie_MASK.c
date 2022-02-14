
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
 int FUNC_0 (int *,size_t,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 struct wpabuf* FUNC_2 (size_t) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,int) ;
 int FUNC_7 (struct wpa_supplicant*,struct wpabuf*,int ) ;

int FUNC_8(struct wpa_supplicant *VAR_6, u8 *VAR_7, size_t VAR_8,
  int VAR_9)
{
 struct wpabuf *VAR_10;
 int VAR_11;

 if (VAR_8 < VAR_1 + 3 + 7 +
     ((VAR_6->enable_oce & VAR_5) ? 3 : 0))
  return 0;


 VAR_10 = FUNC_2(VAR_8 - VAR_1);
 if (!VAR_10)
  return 0;


 FUNC_7(VAR_6, VAR_10, 0);





 FUNC_6(VAR_10, VAR_0);
 FUNC_6(VAR_10, 1);
 FUNC_6(VAR_10, VAR_6->conf->mbo_cell_capa);


 if ((VAR_6->enable_oce & VAR_5) && VAR_9) {
  FUNC_6(VAR_10, VAR_3);
  FUNC_6(VAR_10, 1);
  FUNC_6(VAR_10, VAR_4);
 }

 VAR_11 = FUNC_0(VAR_7, VAR_8, FUNC_4(VAR_10), FUNC_5(VAR_10));
 if (!VAR_11)
  FUNC_1(VAR_2, "Failed to add MBO/OCE IE");

 FUNC_3(VAR_10);
 return VAR_11;
}
