
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct ieee80211_radiotap_iterator {TYPE_2__* _vns; TYPE_1__* current_namespace; } ;
struct TYPE_4__ {int n_ns; TYPE_1__* ns; } ;
struct TYPE_3__ {scalar_t__ oui; scalar_t__ subns; } ;



__attribute__((used)) static void FUNC_0(struct ieee80211_radiotap_iterator *VAR_0,
      uint32_t VAR_1, uint8_t VAR_2)
{
 int VAR_3;

 VAR_0->current_namespace = ((void*)0);

 if (!VAR_0->_vns)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0->_vns->n_ns; VAR_3++) {
  if (VAR_0->_vns->ns[VAR_3].oui != VAR_1)
   continue;
  if (VAR_0->_vns->ns[VAR_3].subns != VAR_2)
   continue;

  VAR_0->current_namespace = &VAR_0->_vns->ns[VAR_3];
  break;
 }
}
