
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_registered_device {TYPE_1__* wowlan; } ;
struct TYPE_2__ {int n_patterns; struct TYPE_2__* tcp; scalar_t__ sock; struct TYPE_2__* patterns; struct TYPE_2__* mask; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct cfg80211_registered_device *VAR_0)
{
 int VAR_1;

 if (!VAR_0->wowlan)
  return;
 for (VAR_1 = 0; VAR_1 < VAR_0->wowlan->n_patterns; VAR_1++)
  FUNC_0(VAR_0->wowlan->patterns[VAR_1].mask);
 FUNC_0(VAR_0->wowlan->patterns);
 if (VAR_0->wowlan->tcp && VAR_0->wowlan->tcp->sock)
  FUNC_1(VAR_0->wowlan->tcp->sock);
 FUNC_0(VAR_0->wowlan->tcp);
 FUNC_0(VAR_0->wowlan);
}
