
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sta_info {int aid; } ;
struct hostapd_data {int* sta_aid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct hostapd_data *VAR_2, struct sta_info *VAR_3)
{
 int VAR_4, VAR_5 = 32, VAR_6;


 if (VAR_3->aid > 0) {
  FUNC_2(VAR_1, "  old AID %d", VAR_3->aid);
  return 0;
 }

 if (FUNC_1())
  return -1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->sta_aid[VAR_4] == (u32) -1)
   continue;
  for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
   if (!(VAR_2->sta_aid[VAR_4] & FUNC_0(VAR_5)))
    break;
  }
  if (VAR_5 < 32)
   break;
 }
 if (VAR_5 == 32)
  return -1;
 VAR_6 = VAR_4 * 32 + VAR_5 + 1;
 if (VAR_6 > 2007)
  return -1;

 VAR_3->aid = VAR_6;
 VAR_2->sta_aid[VAR_4] |= FUNC_0(VAR_5);
 FUNC_2(VAR_1, "  new AID %d", VAR_3->aid);
 return 0;
}
