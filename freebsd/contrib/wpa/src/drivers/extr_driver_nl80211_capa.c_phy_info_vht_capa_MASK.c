
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;
struct hostapd_hw_modes {int vht_mcs_set; int vht_capab; } ;


 int * FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void FUNC_4(struct hostapd_hw_modes *VAR_0,
         struct nlattr *VAR_1,
         struct nlattr *VAR_2)
{
 if (VAR_1)
  VAR_0->vht_capab = FUNC_1(VAR_1);

 if (VAR_2 && FUNC_2(VAR_2) >= 8) {
  u8 *VAR_3;
  VAR_3 = FUNC_0(VAR_2);
  FUNC_3(VAR_0->vht_mcs_set, VAR_3, 8);
 }
}
