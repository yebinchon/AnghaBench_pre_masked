
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int eapol_sm; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int *) ;

__attribute__((used)) static int FUNC_3(struct hostapd_data *VAR_1,
        const char *VAR_2)
{
 u8 VAR_3[VAR_0];
 struct sta_info *VAR_4;

 if (FUNC_2(VAR_2, VAR_3))
  return -1;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (!VAR_4 || !VAR_4->eapol_sm)
  return -1;

 FUNC_1(VAR_4->eapol_sm);
 return 0;
}
