
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int * wep_key_len; int * wep_key; } ;
struct parse_data {int dummy; } ;


 int FUNC_0 (int ,int *,int,char const*,int ) ;

__attribute__((used)) static int FUNC_1(const struct parse_data *VAR_0,
         struct wpa_ssid *VAR_1, int VAR_2,
         const char *VAR_3)
{
 return FUNC_0(VAR_1->wep_key[0],
     &VAR_1->wep_key_len[0], VAR_2,
     VAR_3, 0);
}
