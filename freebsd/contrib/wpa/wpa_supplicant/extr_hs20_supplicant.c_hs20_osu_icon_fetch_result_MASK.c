
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {size_t osu_prov_count; scalar_t__ osu_icon_id; struct osu_provider* osu_prov; int osu_icon_fetch_start; } ;
struct osu_provider {size_t icon_count; struct osu_icon* icon; } ;
struct osu_icon {int failed; scalar_t__ id; } ;
struct os_reltime {int sec; int usec; } ;


 int VAR_0 ;
 int FUNC_0 (struct os_reltime*) ;
 int FUNC_1 (struct os_reltime*,int *,struct os_reltime*) ;
 int FUNC_2 (int ,char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_1, int VAR_2)
{
 size_t VAR_3, VAR_4;
 struct os_reltime VAR_5, VAR_6;
 int VAR_7;

 FUNC_0(&VAR_5);
 FUNC_1(&VAR_5, &VAR_1->osu_icon_fetch_start, &VAR_6);
 VAR_7 = VAR_6.sec * 1000 + VAR_6.usec / 1000;
 FUNC_2(VAR_0, "HS 2.0: Icon fetch dur=%d ms res=%d",
     VAR_7, VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1->osu_prov_count; VAR_3++) {
  struct osu_provider *VAR_8 = &VAR_1->osu_prov[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_8->icon_count; VAR_4++) {
   struct osu_icon *VAR_9 = &VAR_8->icon[VAR_4];
   if (VAR_9->id || VAR_9->failed)
    continue;
   if (VAR_2 < 0)
    VAR_9->failed = 1;
   else
    VAR_9->id = VAR_1->osu_icon_id;
   return;
  }
 }
}
