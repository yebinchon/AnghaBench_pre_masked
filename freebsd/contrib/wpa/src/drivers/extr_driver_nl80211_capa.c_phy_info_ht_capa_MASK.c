
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;
struct hostapd_hw_modes {int a_mpdu_params; int mcs_set; int ht_capab; } ;


 int * FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static void FUNC_5(struct hostapd_hw_modes *VAR_0, struct nlattr *VAR_1,
        struct nlattr *VAR_2,
        struct nlattr *VAR_3,
        struct nlattr *VAR_4)
{
 if (VAR_1)
  VAR_0->ht_capab = FUNC_1(VAR_1);

 if (VAR_2)
  VAR_0->a_mpdu_params |= FUNC_2(VAR_2) & 0x03;

 if (VAR_3)
  VAR_0->a_mpdu_params |= FUNC_2(VAR_3) << 2;

 if (VAR_4 && FUNC_3(VAR_4) >= 16) {
  u8 *VAR_5;
  VAR_5 = FUNC_0(VAR_4);
  FUNC_4(VAR_0->mcs_set, VAR_5, 16);
 }
}
