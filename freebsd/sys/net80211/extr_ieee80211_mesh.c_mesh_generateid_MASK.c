
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct ieee80211vap {TYPE_1__* iv_ic; } ;
struct TYPE_2__ {int ic_sta; } ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (int *,int ,scalar_t__*) ;
 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_2(struct ieee80211vap *VAR_1)
{
 int VAR_2 = 4;
 uint16_t VAR_3;

 do {
  FUNC_0(&VAR_3, 2);
  FUNC_1(&VAR_1->iv_ic->ic_sta, VAR_0, &VAR_3);
  VAR_2--;
 } while (VAR_3 == 0 && VAR_2 > 0);
 return VAR_3;
}
