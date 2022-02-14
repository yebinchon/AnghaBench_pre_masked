
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config {int wps_nfc_pw_from_config; int wmm_ac_params; int changed_parameters; } ;
struct global_parse_data {char* name; int changed_flag; scalar_t__ (* parser ) (struct global_parse_data const*,struct wpa_config*,int,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct global_parse_data* VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (char*,char) ;
 size_t FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (struct global_parse_data const*,struct wpa_config*,int,char*) ;
 int FUNC_5 (int ,char*,int,...) ;

int FUNC_6(struct wpa_config *VAR_4, char *VAR_5, int VAR_6)
{
 size_t VAR_7;
 int VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  const struct global_parse_data *VAR_9 = &VAR_3[VAR_7];
  size_t VAR_10 = FUNC_2(VAR_9->name);
  if (FUNC_3(VAR_5, VAR_9->name, VAR_10) != 0 ||
      VAR_5[VAR_10] != '=')
   continue;

  if (VAR_9->parser(VAR_9, VAR_4, VAR_6, VAR_5 + VAR_10 + 1)) {
   FUNC_5(VAR_1, "Line %d: failed to "
       "parse '%s'.", VAR_6, VAR_5);
   VAR_8 = -1;
  }
  if (VAR_9->changed_flag == VAR_0)
   VAR_4->wps_nfc_pw_from_config = 1;
  VAR_4->changed_parameters |= VAR_9->changed_flag;
  break;
 }
 if (VAR_7 == VAR_2) {
  if (VAR_6 < 0)
   return -1;
  FUNC_5(VAR_1, "Line %d: unknown global field '%s'.",
      VAR_6, VAR_5);
  VAR_8 = -1;
 }

 return VAR_8;
}
