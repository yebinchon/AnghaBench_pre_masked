
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int assoc_ie_taxonomy; int probe_ie_taxonomy; } ;
struct hostapd_data {int dummy; } ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 char* FUNC_3 (char*,char) ;

int FUNC_4(const struct hostapd_data *VAR_0,
     struct sta_info *VAR_1, char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 char *VAR_5, *VAR_6;

 if (!VAR_1->probe_ie_taxonomy || !VAR_1->assoc_ie_taxonomy)
  return 0;

 VAR_4 = FUNC_1(VAR_2, VAR_3, "wifi4|probe:");
 if (FUNC_2(VAR_3, VAR_4))
  return 0;
 VAR_5 = VAR_2 + VAR_4;
 VAR_6 = VAR_2 + VAR_3;

 FUNC_0(VAR_5, VAR_6 - VAR_5, VAR_1->probe_ie_taxonomy);
 VAR_5 = FUNC_3(VAR_5, '\0');
 if (VAR_5 >= VAR_6)
  return 0;
 VAR_4 = FUNC_1(VAR_5, VAR_6 - VAR_5, "|assoc:");
 if (FUNC_2(VAR_6 - VAR_5, VAR_4))
  return 0;
 VAR_5 += VAR_4;
 FUNC_0(VAR_5, VAR_6 - VAR_5, VAR_1->assoc_ie_taxonomy);
 VAR_5 = FUNC_3(VAR_5, '\0');
 return VAR_5 - VAR_2;
}
