
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int tfm; } ;
struct TYPE_5__ {int tfm; } ;
struct TYPE_8__ {TYPE_3__ aes_cmac; TYPE_1__ ccmp; } ;
struct TYPE_6__ {scalar_t__ cipher; } ;
struct ieee80211_key {TYPE_4__ u; TYPE_2__ conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_key*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_key *VAR_2)
{
 if (VAR_2->conf.cipher == VAR_1)
  FUNC_1(VAR_2->u.ccmp.tfm);
 if (VAR_2->conf.cipher == VAR_0)
  FUNC_0(VAR_2->u.aes_cmac.tfm);
 FUNC_2(VAR_2);
}
