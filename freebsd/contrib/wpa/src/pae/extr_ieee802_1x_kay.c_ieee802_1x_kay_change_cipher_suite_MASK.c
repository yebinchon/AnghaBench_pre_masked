
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802_1x_mka_participant {int new_sak; } ;
struct ieee802_1x_kay {unsigned int macsec_csindex; int macsec_capable; int macsec_desired; } ;
typedef enum macsec_cap { ____Placeholder_macsec_cap } macsec_cap ;
struct TYPE_2__ {int capable; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct ieee802_1x_mka_participant* FUNC_0 (struct ieee802_1x_kay*) ;
 scalar_t__ FUNC_1 (struct ieee802_1x_kay*,int*) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(struct ieee802_1x_kay *VAR_6,
       unsigned int VAR_7)
{
 struct ieee802_1x_mka_participant *VAR_8;
 enum macsec_cap VAR_9;

 if (!VAR_6)
  return -1;

 if (VAR_7 >= VAR_0) {
  FUNC_2(VAR_2,
      "KaY: Configured cipher suite index is out of range");
  return -1;
 }
 if (VAR_6->macsec_csindex == VAR_7)
  return -2;

 if (VAR_7 == 0)
  VAR_6->macsec_desired = VAR_1;

 VAR_6->macsec_csindex = VAR_7;
 VAR_6->macsec_capable = VAR_5[VAR_6->macsec_csindex].capable;

 if (FUNC_1(VAR_6, &VAR_9) < 0)
  return -3;

 if (VAR_6->macsec_capable > VAR_9)
  VAR_6->macsec_capable = VAR_9;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_3, "KaY: Cipher Suite changed");
  VAR_8->new_sak = VAR_4;
 }

 return 0;
}
