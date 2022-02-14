
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802_1x_mka_sak_use_body {int dummy; } ;
struct ieee802_1x_mka_participant {scalar_t__ advised_desired; TYPE_1__* kay; } ;
struct TYPE_2__ {scalar_t__ macsec_desired; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(
 struct ieee802_1x_mka_participant *VAR_1)
{
 int VAR_2 = VAR_0;

 if (VAR_1->kay->macsec_desired && VAR_1->advised_desired)
  VAR_2 = sizeof(struct ieee802_1x_mka_sak_use_body);

 return FUNC_0(VAR_2);
}
