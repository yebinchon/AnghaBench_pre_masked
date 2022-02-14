
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211com {TYPE_2__* ic_csa_newchan; TYPE_1__* ic_bsschan; } ;
struct TYPE_4__ {int ic_flags; } ;
struct TYPE_3__ {int ic_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct ieee80211com *VAR_5)
{
 return ((VAR_5->ic_bsschan->ic_flags ^ VAR_5->ic_csa_newchan->ic_flags) &
     (VAR_0 | VAR_1 | VAR_2 |
      VAR_4 | VAR_3)) != 0;
}
