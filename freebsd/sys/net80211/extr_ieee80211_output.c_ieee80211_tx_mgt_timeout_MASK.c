
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211vap {scalar_t__ iv_state; TYPE_1__* iv_ic; } ;
struct TYPE_3__ {int ic_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ieee80211vap*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_4)
{
 struct ieee80211vap *VAR_5 = VAR_4;

 FUNC_0(VAR_5->iv_ic);
 if (VAR_5->iv_state != VAR_2 &&
     (VAR_5->iv_ic->ic_flags & VAR_0) == 0) {




  FUNC_2(VAR_5, VAR_3,
   VAR_1);
 }
 FUNC_1(VAR_5->iv_ic);
}
