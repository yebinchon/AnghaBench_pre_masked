
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee802_1x_mka_participant {scalar_t__ advised_desired; TYPE_1__* kay; } ;
struct ieee802_1x_mka_dist_sak_body {int dummy; } ;
struct TYPE_4__ {scalar_t__ sak_len; } ;
struct TYPE_3__ {unsigned int macsec_csindex; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int
FUNC_1(
 struct ieee802_1x_mka_participant *VAR_5)
{
 int VAR_6 = VAR_3;
 unsigned int VAR_7 = VAR_5->kay->macsec_csindex;

 if (VAR_5->advised_desired && VAR_7 < VAR_1) {
  VAR_6 = sizeof(struct ieee802_1x_mka_dist_sak_body);
  if (VAR_7 != VAR_2)
   VAR_6 += VAR_0;

  VAR_6 += VAR_4[VAR_7].sak_len + 8;
 }

 return FUNC_0(VAR_6);
}
