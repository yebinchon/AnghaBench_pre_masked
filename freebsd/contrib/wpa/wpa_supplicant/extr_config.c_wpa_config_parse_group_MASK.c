
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int group_cipher; } ;
struct parse_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char const*) ;
 int FUNC_1 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_2(const struct parse_data *VAR_5,
      struct wpa_ssid *VAR_6, int VAR_7,
      const char *VAR_8)
{
 int VAR_9;
 VAR_9 = FUNC_0(VAR_7, VAR_8);
 if (VAR_9 == -1)
  return -1;





 VAR_9 &= ~(VAR_3 | VAR_4);

 if (VAR_9 & ~VAR_2) {
  FUNC_1(VAR_0, "Line %d: not allowed group cipher "
      "(0x%x).", VAR_7, VAR_9);
  return -1;
 }

 if (VAR_6->group_cipher == VAR_9)
  return 1;
 FUNC_1(VAR_1, "group: 0x%x", VAR_9);
 VAR_6->group_cipher = VAR_9;
 return 0;
}
