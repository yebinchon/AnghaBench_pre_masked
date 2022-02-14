
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osu_lang_text {int text; int lang; } ;
struct osu_icon {int filename; int mime_type; int lang; int id; } ;
struct osu_data {scalar_t__ friendly_name_count; scalar_t__ serv_desc_count; scalar_t__ icon_count; struct osu_icon* icon; struct osu_lang_text* serv_desc; struct osu_lang_text* friendly_name; int osu_nai2; int osu_nai; int osu_ssid2; int osu_ssid; int methods; int url; int bssid; } ;
typedef int buf ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (struct osu_data*,int ,int) ;
 int FUNC_5 (int ,int,char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 struct osu_data* FUNC_7 (struct osu_data*,size_t) ;
 int FUNC_8 (int ,int,char*,char*) ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,int *,int) ;
 int FUNC_12 (int ,char*,char const*) ;

__attribute__((used)) static struct osu_data * FUNC_13(const char *VAR_2, size_t *VAR_3)
{
 FILE *VAR_4;
 char VAR_5[1000];
 struct osu_data *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 size_t VAR_8 = 0;
 char *VAR_9, *VAR_10;

 VAR_4 = FUNC_3(VAR_2, "r");
 if (VAR_4 == ((void*)0)) {
  FUNC_12(VAR_1, "Could not open %s", VAR_2);
  return ((void*)0);
 }

 while (FUNC_2(VAR_5, sizeof(VAR_5), VAR_4)) {
  VAR_9 = FUNC_9(VAR_5, '\n');
  if (VAR_9)
   *VAR_9 = '\0';

  if (FUNC_10(VAR_5, "OSU-PROVIDER ", 13) == 0) {
   VAR_7 = FUNC_7(VAR_6, (VAR_8 + 1) * sizeof(*VAR_6));
   if (VAR_7 == ((void*)0))
    break;
   VAR_6 = VAR_7;
   VAR_7 = &VAR_6[VAR_8++];
   FUNC_4(VAR_7, 0, sizeof(*VAR_7));
   FUNC_8(VAR_7->bssid, sizeof(VAR_7->bssid), "%s",
     VAR_5 + 13);
   continue;
  }
  if (!VAR_7)
   continue;

  if (FUNC_10(VAR_5, "uri=", 4) == 0) {
   FUNC_8(VAR_7->url, sizeof(VAR_7->url), "%s", VAR_5 + 4);
   continue;
  }

  if (FUNC_10(VAR_5, "methods=", 8) == 0) {
   VAR_7->methods = FUNC_11(VAR_5 + 8, ((void*)0), 16);
   continue;
  }

  if (FUNC_10(VAR_5, "osu_ssid=", 9) == 0) {
   FUNC_8(VAR_7->osu_ssid, sizeof(VAR_7->osu_ssid),
     "%s", VAR_5 + 9);
   continue;
  }

  if (FUNC_10(VAR_5, "osu_ssid2=", 10) == 0) {
   FUNC_8(VAR_7->osu_ssid2, sizeof(VAR_7->osu_ssid2),
     "%s", VAR_5 + 10);
   continue;
  }

  if (FUNC_6(VAR_5, "osu_nai=", 8) == 0) {
   FUNC_5(VAR_7->osu_nai, sizeof(VAR_7->osu_nai),
        "%s", VAR_5 + 8);
   continue;
  }

  if (FUNC_6(VAR_5, "osu_nai2=", 9) == 0) {
   FUNC_5(VAR_7->osu_nai2, sizeof(VAR_7->osu_nai2),
        "%s", VAR_5 + 9);
   continue;
  }

  if (FUNC_10(VAR_5, "friendly_name=", 14) == 0) {
   struct osu_lang_text *VAR_11;
   if (VAR_7->friendly_name_count == VAR_0)
    continue;
   VAR_9 = FUNC_9(VAR_5 + 14, ':');
   if (VAR_9 == ((void*)0))
    continue;
   *VAR_9++ = '\0';
   VAR_11 = &VAR_7->friendly_name[VAR_7->friendly_name_count++];
   FUNC_8(VAR_11->lang, sizeof(VAR_11->lang), "%s", VAR_5 + 14);
   FUNC_8(VAR_11->text, sizeof(VAR_11->text), "%s", VAR_9);
  }

  if (FUNC_10(VAR_5, "desc=", 5) == 0) {
   struct osu_lang_text *VAR_12;
   if (VAR_7->serv_desc_count == VAR_0)
    continue;
   VAR_9 = FUNC_9(VAR_5 + 5, ':');
   if (VAR_9 == ((void*)0))
    continue;
   *VAR_9++ = '\0';
   VAR_12 = &VAR_7->serv_desc[VAR_7->serv_desc_count++];
   FUNC_8(VAR_12->lang, sizeof(VAR_12->lang), "%s", VAR_5 + 5);
   FUNC_8(VAR_12->text, sizeof(VAR_12->text), "%s", VAR_9);
  }

  if (FUNC_10(VAR_5, "icon=", 5) == 0) {
   struct osu_icon *VAR_13;
   if (VAR_7->icon_count == VAR_0)
    continue;
   VAR_13 = &VAR_7->icon[VAR_7->icon_count++];
   VAR_13->id = FUNC_0(VAR_5 + 5);
   VAR_9 = FUNC_9(VAR_5, ':');
   if (VAR_9 == ((void*)0))
    continue;
   VAR_9 = FUNC_9(VAR_9 + 1, ':');
   if (VAR_9 == ((void*)0))
    continue;
   VAR_9 = FUNC_9(VAR_9 + 1, ':');
   if (VAR_9 == ((void*)0))
    continue;
   VAR_9++;
   VAR_10 = FUNC_9(VAR_9, ':');
   if (!VAR_10)
    continue;
   *VAR_10 = '\0';
   FUNC_8(VAR_13->lang, sizeof(VAR_13->lang), "%s", VAR_9);
   VAR_9 = VAR_10 + 1;

   VAR_10 = FUNC_9(VAR_9, ':');
   if (VAR_10)
    *VAR_10 = '\0';
   FUNC_8(VAR_13->mime_type, sizeof(VAR_13->mime_type),
     "%s", VAR_9);
   if (!VAR_9)
    continue;
   VAR_9 = VAR_10 + 1;

   VAR_10 = FUNC_9(VAR_9, ':');
   if (VAR_10)
    *VAR_10 = '\0';
   FUNC_8(VAR_13->filename, sizeof(VAR_13->filename),
     "%s", VAR_9);
   continue;
  }
 }

 FUNC_1(VAR_4);

 *VAR_3 = VAR_8;
 return VAR_6;
}
